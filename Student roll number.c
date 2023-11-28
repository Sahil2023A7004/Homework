#include<stdio.h>
int main()
{
    int class[20]={12,13,14,15,16,17,18,19,20,10};
    for(int i=0;i<20;i++)
    {
        printf("%d\n",class[i]);
    }
    printf("\n6th student roll is %d",class[5]);
    printf("\n8th student roll is %d",class[7]);
    return 0;
}