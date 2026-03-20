#include<stdio.h>
#include<math.h>

int main(void)
{
    float capital,rate;
    int n;
    rate=0.025;
    printf("请输入本金和存款期（空格分隔）：");
    scanf("%f %d",&capital,&n);
    float deposit=capital*pow(1+rate,n);
    printf("%d年之后的本利之和为deposit=%f元\n",n,deposit);
    return 0;
}

