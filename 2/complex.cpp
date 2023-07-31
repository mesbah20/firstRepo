#include<stdio.h>
int main()
{
   int z,x,c,d,g;
   scanf("%d%d%d",&z,&x,&c);
   d=(z+x)-c;
   g=(x-z)+c;
   printf("%d\n%d\n" ,d,g);
   if(d=g&&g>=d&&d>=g)
   {
       printf("ooood");
   }
   else
   {
       printf("baka");
   }
    return 0;
}
