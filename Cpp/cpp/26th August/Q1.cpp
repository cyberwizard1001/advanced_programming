//Write a class having two private variables and one-member function which will return the
//area of the rectangle.

#include <iostream>

using namespace std;

class rect{
  private:

    int len;
    int bre;
    int calc_area()
    {
      return len*bre;
    }

  public:

      void get_data()
      {
        cout << "Enter length and breadth: ";
        cin >> len >> bre;
      }

      int ret_data()
      {
         int ret_var = calc_area();
         return ret_var;
      }


}obj;
int main() {

  obj.get_data();

  int area = obj.ret_data();

  cout << "Area: " << area << "square units.";

  return 0;
}
