#include <stdio.h>
#include <stdlib.h>

int minAngle(int x, int y)
{
    if(x<y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int hr_min_Angle(double h, double m)
{
    int hr,mi,angle;
    if (h == 12)
    {
        h = 0;
    }

    if (m == 60)
    {
        m = 0;
        h += 1;
        if (h > 12)
        {
           h = h - 12;
        }

    }

    hr = 0.5 * (h * 60 + m);
    mi = 6 * m;
    angle = abs(hr - mi);
    angle = minAngle(360 - angle, angle);

    return angle;
}

int min_sec_angle(int h,int m,int s)
{
    int hr,mi,sec,angle;
    if(h==12)
    {
        h=0;
    }

    if(m==60)
    {
        m=0;
        h+=1;
        if(h>12)
        {
           h=h-12;
        }
    }
    if(s==60)
    {
        s=0;
        m+=1;
        if(m>60)
        {
            m=m-60;
        }
    }
    mi = (6*m)+(s/10);
    sec = 6 * s;
    angle = abs(mi - sec);
    angle = minAngle(360 - angle, angle);
}



int main()
{
    int h,m,s;
    printf("Enter hours: \n");
    scanf("%d",&h);
    printf("Enter minutes: \n");
    scanf("%d",&m);
    printf("Enter seconds: \n");
    scanf("%d",&s);
    printf("Angle between hr and min=%d\n",hr_min_Angle(h,m));
    printf("Minute & sec : %d",min_sec_angle(h,m,s));

    return 0;
}