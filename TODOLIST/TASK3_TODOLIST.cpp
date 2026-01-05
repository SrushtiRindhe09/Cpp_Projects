#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>     

struct Task 
{
    std::string description;
    bool completed;
};

void addTask(std::vector<Task>& tasks, const std::string& description) 
{
    Task newTask;
    newTask.description = description;
    newTask.completed = false;
    tasks.push_back(newTask);
    std::cout << "Task added: " << description << std::endl;
}

void viewTasks(const std::vector<Task>& tasks) 
{
    if (tasks.empty()) {
        std::cout << "No tasks available." << std::endl;
    } else {
        std::cout << "Tasks:" << std::endl;
        for (const auto& task : tasks) {
            std::cout << "- " << task.description << " [" << (task.completed ? "Completed" : "Pending") << "]" << std::endl;
        }
    }
}

void markTaskAsCompleted(std::vector<Task>& tasks, const std::string& description)
{
    for (auto& task : tasks) {
        if (task.description == description) {
            task.completed = true;
            std::cout << "Task marked as completed: " << description << std::endl;
            return;
        }
    }
    std::cout << "Task not found: " << description << std::endl;
}

void removeTask(std::vector<Task>& tasks, const std::string& description) 
{
    auto it = std::remove_if(tasks.begin(), tasks.end(),
                             [&description](const Task& task) { return task.description == description; });

    if (it != tasks.end()) {
        tasks.erase(it, tasks.end());
        std::cout << "Task removed: " << description << std::endl;
    } else {
        std::cout << "Task not found: " << description << std::endl;
    }
}

int main() 
{
    std::vector<Task> tasks;
    int choice;

    do {
        std::cout << "\n==== To-Do List Manager ====" << std::endl;
        std::cout << "1. Add Task\n2. View Tasks\n3. Mark Task as Completed\n4. Remove Task\n0. Exit\n";
        std::cout << "Enter your choice: ";

        // Ensure the user enters a valid integer
        while (!(std::cin >> choice)) {
            std::cin.clear();  // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
            std::cout << "Invalid input. Please enter a number: ";
        }

        switch (choice) {
            case 1:
                {
                    std::string taskDescription;
                    std::cout << "Enter task description: ";
                    std::cin.ignore();  
                    std::getline(std::cin, taskDescription);
                    addTask(tasks, taskDescription);
                }
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                {
                    std::string taskDescription;
                    std::cout << "Enter task description to mark as completed: ";
                    std::cin.ignore();  // Clear the newline character from the buffer
                    std::getline(std::cin, taskDescription);
                    markTaskAsCompleted(tasks, taskDescription);
                }
                break;
            case 4:
                {
                    std::string taskDescription;
                    std::cout << "Enter task description to remove: ";
                    std::cin.ignore();  // Clear the newline character from the buffer
                    std::getline(std::cin, taskDescription);
                    removeTask(tasks, taskDescription);
                }
                break;
            case 0:
                std::cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}