#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string input;
    int number;
    long long primeSum = 0, nonPrimeSum = 0;
    
    while (cin >> input && input != "stop") {
        number = stoi(input);
        if (number < 0) {
            cout << "Number is negative." << endl;
        }
        else {
            bool isNonPrime = false;
            for (int i = 2; i <=sqrt(number); i++) {
                if (number % i == 0) {
                    isNonPrime = true;
                    break;
                }
            }
            if (isNonPrime) {
                nonPrimeSum += number;
            }
            else {
                primeSum += number;
            }
        }
    }

    cout << "Sum of all prime numbers is: " << primeSum << endl;
    cout << "Sum of all non prime numbers is: " << nonPrimeSum << endl;

    return 0;
}
