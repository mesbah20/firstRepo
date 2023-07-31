#include<stdio.h>
int main()
{
    for(int a=1;a<=10;a++)
    {
        for(int s=a;s<=1;s--)
        {
            printf("*");
        }
        printf("\n");
        a--;
    }
    return 0;
}
