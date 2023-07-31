#include<stdio.h>
int main()
     int a=5;
     for(int y=1;y<=5;y++)
       {
           for(int s=a;s>=1;s--)
           {
               printf("%d",s);
           }
       }

       printf("\n");
       a--;
   }
    return 0;
}
