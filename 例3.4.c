#include<stdio.h>
#define PI 3.14159
int main(void)
{
    double r;
    printf("input r:");
    scanf("%lf",&r);
    printf("c=%f\n",2*PI*r);
    printf("area=%f\n",PI*r*r);
    return 0;
}
