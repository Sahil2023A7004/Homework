#include<stdio.h>
void main()
{
 void add();
 add();   
}
void add()
{
int z;
int a,b;
printf("enter two numbers");
scanf("%d%d",&a,&b);
z=a+b;
printf("sum=%d",z);
} 