//CIT-223-042/2015
//BRIAN OUMA OMONDI
#include<stdio.h>
int main()
{
float received=10,payed=0,sent=0,account=3500;
int option=0,phno,payno,pin;
char option1;
do
{
printf("WELCOME TO MPESA SERVICES\n");
printf("Choose an option to carry out:\n");
printf("1 - Receive money\n");
printf("2 - Pay bill\n");
printf("3 - Send money\n");
printf("4 - Balance Enquiry\n");
printf("5 - Exit\n");
scanf("%d",&option);

switch (option)
{
case 1:
    printf("Enter the phone No.:\n");
    scanf("%d",&phno);
    printf("Enter your PIN");
    scanf("%d",&pin);
    printf("Enter the amount to be received : \n");
    scanf("%f",&received);
    if(account+received<=70000)
    {
    if(received<=30000)
    {
      account+=received;
    }
    else
    {
      printf("Amount entered is past the transaction limit\n");
    }
    }
    else
    {
      printf("Money to be received has passed the maximum account limit\n");
    }
    break;

case 2 :
    printf("Enter the Pay bill No.:\n");
    scanf("%d",&payno);
    printf("Enter the amount to be paid : \n");
    scanf("%f",&payed);
    printf("Enter your PIN");
    scanf("%d",&pin);

    if(account-payed>=0)
    {
    if(payed<account)
    {
      account-=payed;
      account-=payed*0.05;
    }
    else
    {
      printf("Money in the account is insufficient\n");
    }
    }
    else
    {
      printf("The Transaction can't be made\n");
    }
    break;

 case 3 :
    printf("Enter the phone No.:\n");
    scanf("%d",&phno);
    printf("Enter the amount you want to send: \n");
    scanf("%f",&sent);
    printf("Enter your PIN");
    scanf("%d",&pin);
    if(account-sent>=0)
    {
    if(sent<=30000)
    {
    if(sent<account)
    {
      account-=sent+35;
    }
    else
    {
      printf("Money in the account is insufficient");
    }
    }
    else
    {
      printf("Amount entered is past the transaction limit \n");
    }
    }
    else
    {
      printf("Sorry you have insufficient funds in your Account\n");
    }
    break;

 case 4 :
    printf("Enter your PIN");
    scanf("%d",&pin);
    printf("Your account Balance is %6.2f\n",account);


 case 5 :
    return 0;
    break;

default : printf("Invalid Option\n");
}
printf("Thank you for using our services\n");
printf("Your account balance is %6.2f\n",account);
printf("Do you wish to continue with another transaction ?\n 1-Yes\n 2-No\n");
scanf("%s",&option1);
}
while(option1=='1');
printf("Your total Account balance is %6.2f\n",account);
printf("Thank you for using MPESA");
return 0;
}
