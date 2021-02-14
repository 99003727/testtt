#include<stdio.h>
#include<math.h>
int main()
{
    //char a[20]="";
    float degree,rad;
    printf("what do you want convert?give the choice as 1Degree. or 2.Radian\n");
    char b[10];
    scanf("%c",b);
    if(b[0]="D")
    {
    printf("give the data to convert from degrees to radian\n");
    scanf("%f",&degree);
    rad=degree*(M_PI/180);
    printf("%f", rad);}
    else
    {
        printf("give the data to convert from radian to degrees\n");
        scanf("%f",&rad);
        degree=rad/(M_PI/180);
        printf("%f",degree);
    }
}
