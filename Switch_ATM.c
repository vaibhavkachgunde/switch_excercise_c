// Write a program to create ATM simulator using Switch Statement:
    // Balance
    // Functions:
        // 1. Deposit
        // 2. Withdraw
        // 3. Check Balance
        // 4. Exit



#include<stdio.h>
 int main(){
        int  balance=0;
        int choice;
        int amount;
        int choseexit=0;
         menu:
        printf("******* ATM ********* \n");
        
        printf("press 1 for cheak balance \n");
        printf("press 2 for deposit \n");
        printf("press 3 for withdrawal \n");
        printf("press 4 for exit \n");
        
        printf("enter your choice \n");
        scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("your balance is \n %d\n",balance);
            break;
        case 2:
            printf("enter a amount of deposit :\n");
            scanf("%d",&amount);
            balance= balance + amount;
            break;
        case 3:
            printf("enter a amount of withdrawal :\n");
            scanf("%d",&amount);
            balance= balance - amount;
            break;
        case 4:
            printf("tp the exit the program... \n");
            choseexit=1;
            break;
        default:
            printf(" to the invalid input \n");



    }

    if (choseexit !=1)
    {
        goto menu;
    }
    



return 0;
 }