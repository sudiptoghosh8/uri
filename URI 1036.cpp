#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,x,y,d,e;
    scanf("%f%f%f",&a,&b,&c);
    d=(-b+sqrt((b*b)-4*a*c))/(2.0*a);
    e=(-b-sqrt((b*b)-4*a*c))/(2.0*a);
    if(a==0||((b*b)-(4*a*c))<0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5f\nR2 = %.5f\n",d,e);
    }
    return 0;
}
