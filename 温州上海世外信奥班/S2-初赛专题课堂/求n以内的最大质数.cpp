//��n���ڵ��������
#include <stdio.h>
int main()
{
    int n,j,k;
 
    scanf("%d",&n);                          //��ȡ����nֵ
    if(n < 2)
    {
        printf("��2��ʼ��������\n");     //������ʾ
        return 0;
    }
    for(j = n;j >= 2;j--)                    //��nֵ��ʼ�ݼ������������ҵ��ĵ�һ����������Χ���������
    {
        for(k = 2;k < j;k++)             //k��2�ݼ���j����
        {
            if(j % k == 0)
                break;
        }
        if(j == k)                       //k��j�����������k��j��ȣ�jΪ����  
        {
            printf("%d���ڵ��������Ϊ%d\n",n,j);
            break;
        }
    }
}
