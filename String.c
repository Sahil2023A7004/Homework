#include<stdio.h>
void main()
{
    char a[100];
    printf("Enter the String");
    scanf("%s",a);
    printf("The string is %s",a);
    printf("Enter the string");
    gets(a);
    printf("The String id %s",a);
    printf("Enter the string");
    scanf("%[^\n]s",a);
    printf("The String is %s",a);
}