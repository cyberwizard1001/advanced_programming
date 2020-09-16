#include <iostream>
using namespace std;

class A {
    protected:
    int A_value;
};
class B: public A {
    public:
    B(int a) {
        A_value = a;     
    }
};
class C {
    protected:
    int C_value;
    C(int c) {
        C_value = c;
    }
};

class D: public B, public C {
    public:
    D(int a, int c): B(a), C(c) {}
    
    void product() {
        cout << A_value*C_value << endl;
    }
};

int main() {
    int num1,num2;
    cin>>num1;
    cin>>num2;
    D d(num1, num2); 
    d.product();
    return 0;
}
