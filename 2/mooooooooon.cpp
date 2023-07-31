#include<stdio.h>
int main()
{
    int r,q,w,e;
    scanf("%d%d",&q,&w);
    r=q*w;
    e=q/w;
    printf("%d\n",r);
    if(r>=e&&e!=r)
    {
        printf("hafez",r);
    }
    else
    {
        printf("jojomode" ,e);
    }
    return 0;
}
