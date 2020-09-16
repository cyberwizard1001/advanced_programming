#include<iostream>
using namespace std;

class X {
public:
    int a;

protected:
    int b;

private:
    int c;

protected:
    int get_abc() {
        cin >> a >> b >> c;
        return c;
    }
};

class Y : protected X {
};

class Z : protected Y {
};

class T : private Z {
    public:
    int c1;
    void sum_abc() {
        c1 = get_abc();
        if(a>0 && b%2==0 && c1%2!=0) {
            cout << a+b+c1 << endl;
        }
    }
};

int main() {
    T t;
    t.sum_abc();
}
