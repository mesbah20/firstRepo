#include<stdio.h>
int main()
{
    int s,a=10;
    while(a<=25)
    {
        s=5;
        while(s<=a)
        {
            printf("%d ",s);
            s++;
        }
        printf("\n");
        a++;
    }
     return 0;
}
