#include<iostream>

using namespace std;

class student
{
  protected:
  int Mark1, Mark2;

  public:
    void get()
    {
      cin >> Mark1 >> Mark2;
    }
};

class sports
{
  protected:
    int sport_mark;

    public:
      void getsm()
      {
        cin >> sport_mark;
      }
};

class statement: public student, public sports
{ public:
  void display()
  {
    int total_marks = sport_mark + Mark1 + Mark2;

    if((Mark1>=0)&&(Mark2<=95)&&(sport_mark>=0)&&(sport_mark<=5)&&(total_marks>=0)&&(total_marks<=95))
    {

    float average = total_marks/3.0;
    cout << average;
    }

    else return;

  }
};


int main()
{
  statement obj;
  obj.get();
  obj.getsm();
  obj.display();
  return 0;
}
