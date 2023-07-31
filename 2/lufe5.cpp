#include<stdio.h>
int main()
{
    for(int r=15;r<=33;r++)
    {
        for(int d=15;d<=r;d++)
        {
            for(int s=15;s<=d;s++)
                printf("\n");
        }
        {
            for(int r=15;r<=d;r++){


                printf("%d ",d);
            }
        }


        printf("\n");
    }
    return 0;
}
