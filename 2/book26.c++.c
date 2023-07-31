#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=0;
    for(c=2;c<=a;c=c+2){
        b=b+c*c;
        printf("%d\n",c);
    }
    return 0;
}
