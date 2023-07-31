#include<stdio.h>
int main()
{
    int s,f,g,h,t;
    scanf("%d%d%d",&s,&f,&g);
    h=1095;
    t=s+f*g;
    printf("%d\n",t);

    if(h>=t&&t!=h&&t>=h&&h<=t)
    {
        printf("mankey");
    }
    else
    {
        printf("crocodile");
    }
    return 0;
}
