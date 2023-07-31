#include<stdio.h>
int main()
{
    int q,w,e,r;
    scanf("%d%d" ,&w,&e);
    q=w*e;
    r=w/e;
    printf("%d\n%d\n" ,q,r);

    if(q>=r&&r!=q&&q!=r)
    {
        printf("man of honest\n");
    }
    else
    {
        printf("man of straw\n");
    }

    return 0;
}
