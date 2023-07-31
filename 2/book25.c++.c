#include<stdio.h>
int main()
{

    int a,b,c;
    scanf("%d",&a);
    b=1;
    for(c=1;c<=a;c++){
        b=b+c*c;
        printf("%d\n",b);
    }
    return 0;
}
