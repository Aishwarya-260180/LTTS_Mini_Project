/**
 * @file header1.h
 * @author Aishwarya Mulkipatil (aishumpatil7@gmail.com)
 * @brief Header File
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _HEADER1_H_
#define _HEADER1_H_

/**
 * @brief function for converting binary numbers to decimals numbers
 * 
 * @param binarynum provides input to function which should be further converted
 
 * @return int
 */

int binaryToDecimal(long binarynum);

/**
 * @brief function for converting binary numbers to octal numbers
 * 
 * @param binarynum provides input to function which should be further converted
 
 * @return int
 */

int binaryToOctal(long binarynum);

/**
 * @brief function for converting decimal numbers to binary numbers
 * 
 * @param decimalnum provides input to function which should be further converted
 
 * @return long
 */

long decimalToBinary(int decimalnum);

/**
 * @brief function for converting decimal numbers to octal numbers
 * 
 * @param decimalnum provides input to function which should be further converted
 
 * @return int
 */

int decimalToOctal(int decimalnum);

/**
 * @brief function for converting octal numbers to binary numbers
 * 
 * @param ocatlnum provides input to function which should be further converted
 
 * @return long
 */
long long octaltobinary(int octal);

/**
 * @brief function for converting octal numbers to decimal numbers
 * 
 * @param ocatlnum provides input to function which should be further converted
 
 * @return long
 */
long octalToDecimal(int octalnum);

#endif