#include<stdio.h>
int main(){
    int fn=0,sn=1,i,next;
    printf("the fibonnaci");
    for(i=0;i<20;i++)
    {next=fn+sn;
    fn=sn;
    sn=next;
    printf("%d",next);
    }
    printf("\n");
    return 0;
}