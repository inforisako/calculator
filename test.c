#include "unity.h"
#include "calc.c"
#include <limits.h>

void setUp(void) {}     // Not needed yet
void tearDown(void) {}

void test_sub(void) {
    TEST_ASSERT_EQUAL(0, sub(1, 1));
}

void test_mul(void) {
    TEST_ASSERT_EQUAL(6, mul(2, 3));
    TEST_ASSERT_EQUAL(0, mul(5, 0));
    TEST_ASSERT_EQUAL(-6, mul(-2, 3));
}

void test_add(void) {
    TEST_ASSERT_EQUAL(4, add(2, 2));
    TEST_ASSERT_EQUAL(INT_MAX, add(INT_MAX, 1));
}

void test_divide(void) {
    TEST_ASSERT_EQUAL(2, divide(6, 3));
    TEST_ASSERT_EQUAL(3, divide(7, 2));
    TEST_ASSERT_EQUAL(0, divide(5, 0));
}

void test_power(void) {
    TEST_ASSERT_EQUAL(8, power(2, 3));
    TEST_ASSERT_EQUAL(1, power(2, 0));
    TEST_ASSERT_EQUAL(0, power(2, -1));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    RUN_TEST(test_mul);
    return UNITY_END();
}
