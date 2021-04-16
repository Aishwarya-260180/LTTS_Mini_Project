#include<stdio.h>
#include <math.h>
#include "../inc/header1.h"

//FUNCTION TO CONVERT OCTAL TO DECIMAL
long octalToDecimal(int octalnum)
{
    int decimalnum = 0, temp = 0;

    while(octalnum != 0)
    {
       // decimalnum = decimalnum + (octalnum%10) * pow(8,temp);
        decimalnum = decimalnum + (octalnum%10) * (temp*temp*temp*temp*temp*temp*temp*temp);
        temp++;
        octalnum = octalnum / 10;
    }
    //Returning
    return decimalnum;
}
