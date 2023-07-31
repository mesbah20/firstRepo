#include<stdio.h>
int main()
{
    for( int r=4;r<=22;r++)
    {
        if(r==19)
        continue;
        {
           printf("%d major\n",r);
        }
        printf("\n");
    }
    return 0;
}
