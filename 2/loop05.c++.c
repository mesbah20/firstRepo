#include<stdio.h>
int main()
{

    int a,b,c;
    scanf("%d",&a);
    b=0;
    for(c=12;c<=a;c=c+10){
        b=b+c;
        printf("%d\n",b);
    }
    return 0;
}
