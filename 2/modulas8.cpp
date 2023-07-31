#include<stdio.h>
int main()
{
    for(int h=10;h<=29;h++)
    {
        if((h%11)==5)
        {
            printf("%d jokar\n",h);
        }
        else
        {
            printf("%d king\n",h);
        }
        printf("\n");
    }
    return 0;
}
