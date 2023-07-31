#include<stdio.h>
int main()
{
    int a=4;
    for(int s=1;s<=5;s++)
    {
        for(int j=a;j>=1;j--)
        {
            printf("*");
        }
        for(int i=1;i<=s;i++)
        {
            printf("*");
        }
        printf("\n");
        a--;
    }
    return 0;
}
