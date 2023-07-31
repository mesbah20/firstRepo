#include<stdio.h>
int main()
{

    float x,y,z;
    scanf("%f",&x);
    y=0;
    for(z=1.5;z<=x;z++){
        y=y+z;

        printf("%.2f\n",y);
    }
    return 0;
}
