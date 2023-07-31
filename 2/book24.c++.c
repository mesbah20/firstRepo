#include<stdio.h>
int main()
{
    float x,y,z;
    scanf("%f",&x);
    y=0;
    for(z=1;z<=x;z++){
        y=y+1/(z*z);

        printf("%.2f\n",y);
    }
    return 0;
}

