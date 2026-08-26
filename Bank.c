#include<stdio.h>
int main()
{
    int balance=10000,n,i;
    char a;
    do{
    printf("welcome! Please select an option.");
    printf("\n1.Deposit  2.Withdrawl  3.Check Balance  4.Exit\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Enter Deposit amount :");
        scanf("%d",&i);
        balance+=i;
        printf("successfully deposited!");
        
    }
     else if(n==2)
    {
        printf("Enter Withdrawl amount :");
        scanf("%d",&i);
        balance-=i;
        printf("successfully withdrawn!");

    }
     else if(n==3)
     {
        printf("your balance is %d",balance);
     }
     else if(n==4)
     {
        break;
     }
    printf("\nDo you want to continue? yes or no:");
    scanf("%s",&a);
    }while(a=='y'||a=='Y');

}