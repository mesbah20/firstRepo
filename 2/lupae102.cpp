#include<stdio.h>
int main()
{
   int a=15;
       for(int d=1;d<=15;d++)
       {
           for(int s=a;s>=1;s--)
           {
            printf("%d ",s);
           }
           printf("\n");
           a--;
   }
    return 0;
}
