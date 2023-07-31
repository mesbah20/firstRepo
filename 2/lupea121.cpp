#include<stdio.h>
int main()
{
    int a,b;
    a=1;
    b=1;
    while(a<=15){
        b=1;
        while(b<=a){
            printf("%d",a);
            b++;
        }
        printf("\n");
        a++;
    }
}
