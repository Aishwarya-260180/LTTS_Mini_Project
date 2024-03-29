#include<stdio.h>
#include <math.h>
#include "../inc/header1.h"

//FUNCTION TO CONVERT BINARY TO OCTAL
int binaryToOctal(long binarynum)
{
    int octalnum = 0, decimalnum = 0, i = 0;

    /* This while loop converts binary number "binarynum" to the
     * decimal number "decimalnum"
     */
    while(binarynum != 0)
    {
        decimalnum = decimalnum + (binarynum%10) * (i*i);
        i++;
        binarynum = binarynum / 10;
    }

    
    //i is re-initialized
    i = 1;

    /* This loop converts the decimal number "decimalnum" to the octal
     * number "octalnum"
     */
    while (decimalnum != 0)
    {
        octalnum = octalnum + (decimalnum % 8) * i;
        decimalnum = decimalnum / 8;
        i = i * 10;
    }

    //Returning the octal number that we got from binary number
    return octalnum;
}
