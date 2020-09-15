#include<iostream>

using namespace std;

/*
Perform addition operation on complex data using class and object. The program should
ask for real and imaginary part of two complex numbers, and display the real and
imaginary parts of their sum

*/

class complex
{
    int real;
    int comp;

    public:

        int ret_real()
        {
            return real;
        }

        int ret_compl()
        {
            return comp;
        }

        void get_input()
        {
            cout << "Enter real value followed by complex: ";
            cin >> real >> comp;
        }
}num1,num2;

int main()
{
    cout << "Enter first number: "<<endl;
    num1.get_input();

    cout << "Enter second number: "<<endl;
    num2.get_input();

    int real_sum = num1.ret_real() + num2.ret_real();
    int compl_sum = num1.ret_compl() + num2.ret_compl();

    cout << "Sum: " << real_sum << "+i" << compl_sum;
    return 0;
}  
