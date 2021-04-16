#include<stdio.h>
#include <math.h>
#include "../inc/header1.h"

//FUNCTION TO CONVERT OCTAL TO BINARY
long long octaltobinary(int octal)
{
int decimal = 0, i = 0;
long long binary = 0;

while(octal != 0)
{
decimal += (octal%10) * pow(8,i);
++i;
octal/=10;
}

i = 1;

while (decimal != 0)
{
binary += (decimal % 2) * i;
decimal /= 2;
i *= 10;
}
//Returning
return binary;
}