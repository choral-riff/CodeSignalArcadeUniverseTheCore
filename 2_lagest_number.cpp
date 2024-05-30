/*
Given an integer n, return the largest number that contains exactly n digits.

Example

For n = 2, the output should be
solution(n) = 99.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[memory limit] 1 GB

[input] integer n

Guaranteed constraints:
1 ≤ n ≤ 9.

[output] integer

The largest integer of length n.
*/

#include <cmath> //preprocessor for pow

int solution(int n) {
    /*Logic:
        largest number with n digits is gonna be n digits of 9. 
    */
    int desiredNumber = 0;
    for (int i = 0; i < n; i++){
        desiredNumber = desiredNumber + (9*pow(10,i));
    }
    return desiredNumber;
}
