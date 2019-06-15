#define CTEST_MAIN
#include <ctest.h>
#include <functions.h>

int main(int argc, const char** argv) { return ctest_main(argc, argv); }

CTEST(Result_test, Plus_test)
{
    // Given
    float A[4] = { 32.34, 10.24, -23, 1.43 };
    // When
    const float result = PLUS(A, 4);
    // Then
    const float expected = 21.01;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Result_test, Minus_test)
{
    // Given
    float A[4] = { 32.34, 1.24, 3.23, 12.43 };
    // When
    const float result = MINUS(A, 4);
    // Then
    const float expected = 15.44;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Result_test, Multiplication_test)
{
    // Given
    float A[4] = { 2.5, 5.2, 1.25, 2 };
    // When
    const float result = MULTIPLICATION(A, 4);
    // Then
    const float expected = 32.5;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Result_test, Division_test)
{
    // Given
    const float a = 10;
    const float b = 2;
    // When
    const float result = DIVISION(a, b);
    // Then
    const float expected = 5;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Result_test, Radical_test)
{
    // Given
    const float a = 36;
    // When
    const float result = RADICAL(a);
    ;
    // Then
    const float expected = 6;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Result_test, Factorial_test)
{
    // Given
    const float a = 4;
    // When
    const float result = FACTORIAL(a);
    ;
    // Then
    const float expected = 24;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Result_test, Exponent_test)
{
    // Given
    const float x = 4;
    const float y = 3;
    // When
    const float result = EXPONENT(x, y);
    // Then
    const float expected = 64;
    ASSERT_DBL_NEAR(expected, result);
}
