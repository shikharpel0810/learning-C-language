//sum of n no. using for loop
#include<stdio.h>
int main()
{
    int num=1,i=0,sum=0;
    for (i=0;num!=0;i++)
    
{
    printf("enter a number :");
    scanf("%d",&num);
    sum=sum+num;
}
printf("sum is : %d", sum);
return 0;
}