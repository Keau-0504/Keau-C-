#include<stdio.h>
#include<math.h>

int main(void)
{
    float a,b,c,result1,result2;
    printf("请输入方程ax^2+bx+c的参数a,b,c的值（用空格分隔,注意使b^2-4ac>0）：");
    scanf("%f %f %f",&a,&b,&c);
    result1 =(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    result2 =(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    printf("该方程的两个实根为：%f 和%f", result1, result2);
    return 0;
}
