//angle1,angle2,angle3

#include<stdio.h>

int main()
{
    bool result;
    float a1,a2,a3;

    scanf("%f %f %f",&a1,&a2.&a3);

    if((a1<=0)||(a2<=0)||(a3<=0)&&(a1+a2+a3!=180))
    {
        result = false;
    }

    else result = true;

    return 0;
}
