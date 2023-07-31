#include<stdio.h>
int main()
{
    int l,m,t,k;
    l=58;
    m=58;
    t=l+m;
    k=m-l;
    if(t!=k&&k>=t&&t<k)
    {
        printf("lap");

    }
    else
    {
        printf("kis");
    }
    return 0;
}
