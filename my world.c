#include<stdio.h>
#include<math.h>
int main()
{
    //char a[20]="";
    float degree,rad;
    printf("what do you want convert?give the choice as D or R");
    char b=;
    scanf("%c",&b);
    if(b=="D")
    {
    printf("give the data to convert from degrees to radian");
    scanf("%f",&degree);
    rad=degree*(M_PI/180);
    printf("%f", rad);}
    else
    {
        printf("give the data to convert from radian to degrees");
        scanf("%f",&rad);
        degree=rad/(M_PI/180);
        printf("%f",degree);
    }
}
