#include<stdio.h>
void main() 
{
    int a,fact=1,i;
 printf("enter the number:");
 scanf("%d",&a);
i=a;
while(i>0)
{ fact=fact*1;
i--;
}
printf(" factorial ofthe number is %d\n",fact);

}