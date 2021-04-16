#include<stdio.h>
#include "../inc/header1.h"
#include "../unity/unity.h"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}
       
void test_binaryToDecimal(void){

    long binarynum=1010111;
    
    
    TEST_ASSERT_EQUAL(57,binaryToDecimal(binarynum));

    

}

void test_binaryToOctal(void){

    long binarynum=111001;
    

    TEST_ASSERT_EQUAL(62,binaryToOctal(binarynum));

    

}

void test_decimalToBinary(void){

    
    int decimalnum=234;
    TEST_ASSERT_EQUAL(11101010,decimalToBinary(decimalnum));

   
}

void test_decimalToOctal(void){

    
    int decimalnum=436;
    TEST_ASSERT_EQUAL(664,decimalToOctal(decimalnum));

   
}


void test_octaltobinary(void){

    
    int octalnum=71;
    TEST_ASSERT_EQUAL(111,octaltobinary(octalnum));

   
}


void test_octalToDecimal(void){

    
    int octalnum=754;
    TEST_ASSERT_EQUAL(1797,octalToDecimal(octalnum));

   
}


int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_binaryToDecimal); 
RUN_TEST(test_binaryToOctal);
RUN_TEST(test_decimalToBinary);
RUN_TEST(test_decimalToOctal);
RUN_TEST(test_octaltobinary);
RUN_TEST(test_octalToDecimal);
return UNITY_END();
}
