#include<iostream>

using namespace std;

class point
{
public:
  int x,y;

  void getdata()
  {
    cout << "Enter coordinates: ";
    cin >> x >> y;

    checkquadrant();
  }

  void checkquadrant()
  {
    if((x>0)&&(y>0))
      cout << "First";

    else if((x<0)&(y>0))
      cout << "Second";

    else if((x<0)&&(y<0))
      cout << "Third";

    else if((x>0)&&(y<0))
      cout << "Fourth";

    else cout << "Origin";

  }
}coord;

int main()
{
  coord getdata();
  return 0;
}
