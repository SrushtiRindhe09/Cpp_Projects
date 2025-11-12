#include <iostream>
include <string>
using namespace std;

class BankAccount {
    privete : 
              int accno;
              string name;
              double bal;
    public :
             bankAccount(int a, string n, double b)
             {
                accno = a;
                name = n;
                bal = b;

             }

             void deposit (double amount )
             {
                if (amount > 0)
                {
                    balance= balance + amount;
                    cout << "Deposited Amount :" << amount << endl;                
                }
                else 
                {
                    cout << "invalid deposit aount "<< endl;

                } 
            }

                void withdraw (double amount )
             {
                if (amount > 0 && amount <= balance)
                {
                    balance= balance - amount;
                    cout << "withdrawn Amount :" << amount << endl;                
                }
                else 
                {
                       cout << "invalid deposit aount "<< endl;
                    
                }
            }
                 void display ()
                 {
                   cout << "Account Number :" << accno << endl;
                   cout << "Account Holder :" << name << endl;
                   cout << "balance :" << bal << endl;
               }
}

int main ()
{
   BankAccount bk(101, "Srushti", 5000);
   bk.display();

   bk.deposit (1000);
   bk. display();

   bk. withdraw(2000);
   bk.display();
   return 0;
}