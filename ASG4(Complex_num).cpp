#include <iostream>
using namespace std;

class Complex
{
    private:
        float real;
        float imag;
    public:
           Complex()
           {
            real = 0;
            imag = 0;
           }    
           Complex (float r, float i)
           {
            real = r;
            imag = i;
           }

           friend istream& operator>>(istream& in, Complex& c)
           {
             cout << "Enter the real part:";
             in >> c.real;
             cout << "Enter the Imaginary part:";
             in >> c.imag;
             return in ;
           }
           friend ostream& operator<<(ostream& out, const Complex& c)
           {
            out << c.real << "+" << c.imag << "i";
            return out ;
           }

           Complex operator+(const Complex& c)
           {
            Complex temp;
            temp.real = real + c.real;
            temp.imag = imag + c.imag;
            return temp;
           }
           Complex operator*(const Complex& c)
           {
            Complex temp;
            temp.real = (real * c.real) - (imag * c.imag);
            temp.imag = (real * c.imag) + (imag * c.real);
            return temp;
           }
};

int main()
{
  Complex c1, c2, sum, product;
  cout << "Enter the first Complex number:" << endl;
  cin >> c1;
  cout << "Enter tthe Second complex number:" << endl;
  cin >> c2;

  sum = c1 + c2;
  product = c1 * c2;

  cout << "\n------Result-------" << endl;
  cout << "\nFirst Complex number:" << c1 << endl;
  cout << "\nsecond complex number:" << c2 << endl;
  cout << "\nSum:" << sum << endl;
  cout << "\nProduct:" << product << endl;

  return 0;
 }