#include<stdio.h>
#include <math.h>
#include "inc/header1.h"

//MAIN CODE
int main()
{
    //INITIALIZING VARIABLES
    int ch=1; 
    long binarynum,bn,decimalnum,dn,decimalnum1,doc,octalnum,on,binarynum2,bo,octalnum2,ob;

    //PRINT STATEMENT TO ASK USER TO CHOOSE AMONG VARIOUS OPTIONS
    while(ch<7){

    printf("\n=========================================================\n");
    printf("WELCOME USER\n");
    printf("=========================================================\n");
    printf("VARIOUS OPTIONS ARE\n");
    printf("=========================================================\n");
    printf("1.binary to decimal\n2.decimal to binary\n3.decimal to octal\n4.octal to decimal\n5.Binary to octal\n6.octal to binary\n7.exit\n");
    printf("=========================================================\n");
    printf("ENTER YOUR CHOICE\n");
    printf("=========================================================\n");
    scanf("%d",&ch);

    //SWITCH CASE TO CALL FUNCTION AS PER USER INPUT
    switch(ch)
    {
        case 1: 
                printf("Enter a binary number: ");
                scanf("%ld", &binarynum);
                 bn=binaryToDecimal(binarynum);
                 printf("Equivalent decimal number is: %ld\n",bn);
                 break;
        case 2: 
                printf("Enter a Decimal Number: ");
                scanf("%ld", &decimalnum);
                 dn=decimalToBinary(decimalnum);
                 printf("Equivalent Binary Number is: %ld\n",dn);
                 break;
        case 3: 
                printf("Enter a Decimal Number: ");
                 scanf("%ld", &decimalnum1);
                 
                doc=decimalToOctal(decimalnum1);
                printf("Equivalent Octal Number: %ld\n",doc); break;
        case 4: 
                printf("Enter an octal number: ");
                scanf("%ld", &octalnum);
                on=octalToDecimal(octalnum);
                printf("Equivalent decimal number is: %ld\n",on);break;
        case 5: 
                printf("Enter a binary number: ");
                scanf("%ld", &binarynum2);
                bo=binaryToOctal(binarynum2);
                printf("Equivalent octal value: %ld\n",bo);break;

        case 6: 
                printf("Enter an octal number: ");
                scanf("%ld", &octalnum2);
                ob=octaltobinary(octalnum2);
                printf("Equivalent binary number is: %ld\n", ob);break;

        case 7: printf("THANK YOU USER...... \nVISIT AGAIN..!!!!!!!\n"); break;
        default: printf("INVALID INPUT\n");
    }


    }
}
