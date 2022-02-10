#include "unity.h"

#include "Ebill.h"
/* Modify these two lines according to the project */

#define PROJECT_NAME    "EbillCalculator"

/* Prototypes for all the test functions */
void test_bill1(void);
void test_bill2(void);
void test_bill3(void);
void test_bill4(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_bill1);
  RUN_TEST(test_bill2);
  RUN_TEST(test_bill3);
  RUN_TEST(test_bill4);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_bill1(void) {
    A.amount;
    B.unitsconsumed;
    if(B.unitsconsumed <=30 && B.unitsconsumed >= 0)
    {
        A.amount = B.unitsconsumed * 3.25;
        TEST_ASSERT_EQUAL(A.amount, B.unitsconsumed * 3.25 );
    }

}
void test_bill2(void){
    A.amount;
    B.unitsconsumed;
    if(B.unitsconsumed >= 31 && B.unitsconsumed <= 100)
    {
        A.amount = B.unitsconsumed * 4.70;
        TEST_ASSERT_EQUAL(A.amount, B.unitsconsumed * 4.70 );
    }
}
void test_bill3(void){
    A.amount;
    B.unitsconsumed;
     if(B.unitsconsumed >= 101 && B.unitsconsumed <= 200)
    {
        A.amount = B.unitsconsumed * 6.25;
        TEST_ASSERT_EQUAL(A.amount, B.unitsconsumed * 6.25 );
    }
}
void test_bill4(void){
    if(B.unitsconsumed >= 201 && B.unitsconsumed <= 300)
    {
        A.amount = B.unitsconsumed * 7.30;
        TEST_ASSERT_EQUAL(A.amount, B.unitsconsumed * 6.25 );
    }
  
}

