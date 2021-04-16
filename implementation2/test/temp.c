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
    
    
    TEST_ASSERT_EQUAL(87,binaryToDecimal(binarynum));

    

}

void test_binaryToOctal(void){

    long binarynum=111001;
    

    TEST_ASSERT_EQUAL(71,binaryToOctal(binarynum));

    

}

void test_decimalToBinary(void){

    
    int decimalnum=234;
    TEST_ASSERT_EQUAL(11101010,decimalToBinary(decimalnum));

   
}

int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_binaryToDecimal); 
RUN_TEST(test_binaryToOctal);
RUN_TEST(test_decimalToBinary);
return UNITY_END();
}