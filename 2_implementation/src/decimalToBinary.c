#include<stdio.h>
#include <math.h>
#include "../inc/header1.h"

//FUNCTION TO CONVERT DECIMAL TO BINARY
long decimalToBinary(int decimalnum)
{
    long binarynum = 0;
    int rem, temp = 1;

    while (decimalnum!=0)
    {
        rem = decimalnum%2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    //Returning
    return binarynum;
}