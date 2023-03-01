//求n以内的最大质数
#include <stdio.h>
int main()
{
    int n,j,k;
 
    scanf("%d",&n);                          //获取输入n值
    if(n < 2)
    {
        printf("从2开始计算质数\n");     //错误提示
        return 0;
    }
    for(j = n;j >= 2;j--)                    //从n值开始递减查找质数，找到的第一个质数即范围内最大质数
    {
        for(k = 2;k < j;k++)             //k从2递加找j余数
        {
            if(j % k == 0)
                break;
        }
        if(j == k)                       //k与j无余数，最后k，j相等，j为质数  
        {
            printf("%d以内的最大质数为%d\n",n,j);
            break;
        }
    }
}
