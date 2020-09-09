// inheritance.cpp
#include <iostream>
using namespace std;
class base    //single base class
{
    public:
     int x;
//@start-editable@
void getdata(){
    cin >> x;
}

//@end-editable@
};
class derive : public base    //single derived class
{
    private:
        int y;
//@start-editable@
public:
void readdata(){
    cin >> y;

    if((x>y)||(y<0)||(x<0))
      return;
}
void product(){
    cout << x*y;
}

//@end-editable@
};
 int main()
 {
    derive a;     //object of derived class
    a.getdata();
    a.readdata();
    a.product();
    return 0;
 }    
