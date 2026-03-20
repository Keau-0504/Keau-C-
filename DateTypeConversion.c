//数据类型的转换
#include <stdio.h>
int main()
{
     // 1. 不同类型混合运算
    int a = 5;
    float b = 2.5;
    float result1 = a + b; // a自动转换为float，结果7.5

    // 2. 赋值时的转换
     float f = 10;  // int转float，f = 10.0
     int i = 3.14;  // float转int，i = 3（截断小数）

     // 3. 函数参数传递
     printf("%f\n", 5);  // int转double，输出5.000000
     char ch = 'A';
     int num = ch;  // char转int，num = 65（ASCII码）

     printf("a + b = %.1f\n", result1);
     printf("f = %f, i = %d\n", f, i);
     printf("num = %d\n", num);

     return 0;
}
