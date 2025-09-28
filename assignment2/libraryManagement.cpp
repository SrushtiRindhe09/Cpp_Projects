/*Create a class Book to manage book records in a library.The class should have the following private data members: bookID (int).title(string).price(float).
Implement the following
a) Default constructor to initialize default values.
b) Parameterized constructor to initialize with user-provided values.
c) Destructor to display a message when the object is destroyed.*/


#include <iostream>
using namespace std;

class Book
{
 private:
         int bookID;
         string title;
         float price;
         
public:
       Book()
       {
         bookID = 1;
         title = "letuscpp";
         price = 100;
         cout << "Default constructor is called" << endl; 
       }
     
       Book(int id, string t, float p)
       {
         bookID = id;
         title = t;
         price = p;
         cout << "parameterised constructor is called";
       }
       
       void display()
       {
        
        cout << "\nBook ID is:" << bookID;
        cout << "\nBook title is:" << title;
        cout << "\nBook price is:" << price << endl;
       }
        
       ~Book()
       {
       
         cout << "destuctor is called! object is destroyed" << endl;
       }        
       
};
 
 
 int main()
 {
   Book b1;
   b1.display();
   Book b2(2,"data structure",200.0);
   b2.display();
   return 0;   
 }


/*
-----output-----

Default constructor is called

Book ID is:1
Book title is:letuscpp
Book price is:100
parameterised constructor is called
Book ID is:2
Book title is:data structure
Book price is:200
destuctor is called! object is destroyed
destuctor is called! object is destroyed.

*/
