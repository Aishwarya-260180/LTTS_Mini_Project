#include<stdio.h>
#include <math.h>
#include "../inc/header1.h"

//FUNCTION TO CONVERT BINARY TO DECIMAL
int binaryToDecimal(long binarynum)
{
    int decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        //decimalnum = decimalnum + remainder*pow(2,temp);
        decimalnum = decimalnum + remainder*(temp*temp);
        temp++;
    }
    //Returning
    return decimalnum;
}
