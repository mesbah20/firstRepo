#include<stdio.h>
int main()
{
    for(int a=1;a<=20;a++)
    {
        for(int j=5;j>=a;j--)
        {
            printf("%d",j);
        }
        printf("\n");
        a++;

    }
    return 0;
}
