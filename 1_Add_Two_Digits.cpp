/*
You are given a two-digit integer n. Return the sum of its digits.

Example

For n = 29, the output should be
solution(n) = 11.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[memory limit] 1 GB

[input] integer n

A positive two-digit integer.

Guaranteed constraints:
10 ≤ n ≤ 99.

[output] integer

The sum of the first and second digits of the input number.
*/

int solution(int n) {
    /* Logic:
        two digit number given.
        take modulus of number with 10 and save it.
        divide int by 10. 
        take modulus again with 10 and save it
        add the two obtained digits
    */
    int firstDigit = n % 10;
    n = n/10;
    int secondDigit = n % 10;
    int sumOfDigits = firstDigit + secondDigit;
    return sumOfDigits;
}
