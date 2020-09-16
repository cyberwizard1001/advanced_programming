#include<iostream>
using namespace std;
class measure
{
        public:
        //@start-editable@

           void shape(int radius)
           {
               cout << 3.14*radius*radius;
           }

           void shape(int len, int bre)
           {
               cout << len*bre;
           }

           void shape(float t, int d, int e)
           {
               cout << t*d*e;
           }

           void shape(long a)
           {
               cout << a*a;
           }

           void shape(double radius)
           {
               cout << (4/3)*(3.14)*radius*radius*radius;
           }

           void shape(float height, double radius)
           {
               cout << 3.14*radius*radius*height;
           }



        //@end-editable@
};
int main()
{
        int r,d,e,l,b;
        float t,c,h;
        long a;
        int ch;
        double j,f;
        long int g;
        measure obj;
        cout<<"CALCULATION OF AREA AND VOLUME"<<endl;
        cout<<"1. area of circle"<<endl;
        cout<<"2. area of rectangle"<<endl;
        cout<<"3. area of triangle"<<endl;
        cout<<"4. area of square"<<endl;
        cout<<"5. Volume of the sphere"<<endl;
        cout<<"6. Volume of the cylinder"<<endl;
        cout<<"Enter your choice "<<endl;
        cin>>ch;
        switch(ch)
        {
                case 1:
                        //cout<<"enter the value of radius of the circle"<<endl;
                        cin>>r;
                        obj.shape(r);
                        break;
                case 2:
                        //cout<<"enter the sides of rectangle"<<endl;
                        cin>>l>>b;
                        obj.shape(l,b);
                        break;
                case 3:
                        //cout<<"enter the sides of triangle"<<endl;
                        cin>>d>>e;
                        obj.shape(0.5,d,e);
                        break;
                case 4:
                        //cout<<"enter the sides of square"<<endl;
                        cin>>a;
                        obj.shape(a);
                        break;
                case 5:
                        //cout<<"Enter the radius"<<endl;
                        cin>>j;
                        obj.shape(j);
                        break;
                case 6:
                        //cout<<"Enter the radius"<<endl;
                        cin>>f;
                        //cout<<"Enter the height"<<endl;
                        cin>>h;
                        obj.shape(h,f);
                        break;
                default:
                        cout<<"The choice entered is a wrong choice"<<endl;
        }
        return 0;
}
