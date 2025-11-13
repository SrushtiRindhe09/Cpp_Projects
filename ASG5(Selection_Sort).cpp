#include <iostream>
using namespace std;

template <class T>
void seletionSort( T arr[], int n)
{
     int i, j, midIndex;
     T temp;
     for (i = 0; i < n; i++)
     {
       midIndex = i;
       for (j = i + 1; j < n; j++)
       {
         if (arr[j] < arr[midIndex])
         midIndex = j;
       }
        temp = arr[i];
        arr[i] = arr[midIndex];
        arr[midIndex] = temp;
     }
     cout << "\nSorted Array" << endl;
     for (i = 0; i < n; i++)
     {
        cout << arr[i] << "" << endl;
     }
}

int main()
{
  int intarr[5];
  float floatarr[5];

  cout << "Entet the integer array elements;" << endl;
  for (int i = 0; i < 5; i++)
  cin >> intarr[i];

  cout << "Entet the float array elements;" << endl;
  for (int i = 0; i < 5; i++)
  cin >> floatarr[i];

  seletionSort(intarr, 5);
  seletionSort(floatarr, 5);

  return 0;
}