#include<iostream>

using namespace std;


class complex
{
public:
  int real_part;
  int imag_part;

  void getdata()
  {
    cout << "Enter real followed by imaginary part: ";
    cin >> real_part >> imag_part;
  }

  void add(complex num1, complex num2)
  {
    int real_sum = num1.real_part+num2.real_part;
    int imag_sum = num1.imag_part+num2.imag_part;

    cout << "Sum: " << real_sum <<"+"<<imag_sum<<"i" << endl;
  }

  void sub(complex num1, complex num2)
  {

      int real_sub = num1.real_part-num2.real_part;
      int imag_sub = num1.imag_part-num2.imag_part;

      cout << "Diff: " << real_sub <<"+"<<imag_sub<<"i" << endl;
  }

  void mul(complex num1, complex num2)
  {

      int real_prod = num1.real_part*num2.real_part;
      int imag_prod = num1.imag_part*num2.imag_part;

      cout << "Prod: " << real_prod <<"+"<<imag_prod<<"i" << endl;
  }
};

int main()
{
  complex num1, num2, num3;
  cout << "Enter number: ";

  num1.getdata();
  num2.getdata();

  cout << "Enter choice:\n 1. Addition\n2. Subtraction\n3. Multiplication";
  int choice;

  cin >> choice;

  switch (choice) {
    case 1: num3.add(num1,num2); break;
    case 2: num3.sub(num1,num2); break;
    case 3: num3.sub(num1,num2); break;
    default : cout << "Error, try again.\n "; break;
  }

  
  return 0;
}
