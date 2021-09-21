//sum of odd and even numbers till n using for loop
#include<stdio.h>
int main()
{
    int total=0, sumodd=0, sumeven=0, i=0;
    printf("enter total no. :");
    scanf("%d",&total);
    for(i=1;i<=total;i++)

    
        if (i%2==0)
        {
            printf("\n Now adding %d to evensum");
            sumeven=sumeven+i;
        }
    else
    {
        printf("\n Now adding %d to sumodd");
        sumodd=sumodd+i;
    }
    printf("\n Sum of odd no.:%d", sumodd);
    printf("\n Sum of even no. :%d", sumeven);

    return 0;
}