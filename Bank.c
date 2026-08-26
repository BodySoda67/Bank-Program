#include<stdio.h>
#include<string.h>
int main()
{
    int balance=10000,n,i;
    char a[10];
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
        if(i>balance)
            printf("insuffcient balance");
        else
        {
        balance-=i;
        printf("successfully withdrawn!");
        }

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
    scanf("%9s",a);
    }while(strcmp(a,"Y")==0||strcmp(a,"y")==0||strcmp(a,"yes")==0||strcmp(a,"YES")==0);

}
