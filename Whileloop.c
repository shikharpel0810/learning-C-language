//multiplication table of a no. till n using while loop
#include <stdio.h>
int main()
{
int num =0, term =0, i =1;
printf("enter a no.: ");
scanf("%d",&num);
printf("enter total term :");
scanf("%d",&term);
while (i<=term)

{
printf("\n%d*%d=%d",num,i,num*i);
i++;
}
return 0;

}