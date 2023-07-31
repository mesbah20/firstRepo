#include<stdio.h>
int main()
{
    int a=10;
    for(int f=1;f<=10;f++)
    {
        for(int j=1;j<=a;j++)
        {
            printf("%d",j);
        }
        printf("\n");
        a--;
    }
    return 0;
}
