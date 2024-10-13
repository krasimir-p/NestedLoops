#include <iostream>

using namespace std;

int main()
{
    int firstNumber, secondNumber;
    cin >> firstNumber >> secondNumber;

    int oddSum = 0, evenSum = 0, num = 0, digit=0;

    for (int i = firstNumber; i <= secondNumber; i++) {
        num = i;
        for (int j = 1; j <= 6;j++) {
            digit = num % 10;
            num /= 10;
            if (j % 2 == 0) {
                evenSum += digit;
            }
            else {
                oddSum += digit;
            }
            
        }
        if (oddSum == evenSum) {
            cout << i << " ";
        }
        oddSum = 0;
        evenSum = 0;
    }
    return 0;
}
