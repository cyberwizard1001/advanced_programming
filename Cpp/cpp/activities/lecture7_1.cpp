#include<iostream>

using namespace std;

class NumberHolder
{
public:
    int a;
    float b;
    void addval()
    {
        cin >> a;
        cin >> b;
        viewval();
    }

private:
    void viewval()
    {
        cout << a << " " << b;
    }

}obj;

int main()
{
    obj.addval();
    return 0;
}
