#include<stdio.h>
int main()
{
    int a=15;
 for(int s=1;s<=20;s++)
{
    for(int j=25;j>=a;j--)
    {
        printf("%d ",j);
    }
    printf("\n");
    a--;
}
    return 0;
}
