#include<stdio.h>
int main()
{
    int x,y,z,a,b,c;
    scanf("%d%d%d%d%d%d",&x,&y,&z,&a,&b,&c);
   if(x>a||x+y>a+b||x+y+z>a+b+c){
      printf("no");
   }
   else{
    printf("yes");
   }

    return 0;
}
