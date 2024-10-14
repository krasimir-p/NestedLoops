#include <iostream>

using namespace std;

int main()
{
    int startFirstPair, startSecondPair, diffFirstPair, diffSecondPair;
    cin >> startFirstPair >> startSecondPair >> diffFirstPair >> diffSecondPair;

    int endFirsPair = startFirstPair + diffFirstPair;
    int endSecondPair = startSecondPair + diffSecondPair;

    for (int i = 1010; i <= 9999; i++) {
        int secondNum = i % 100;
        int firstNum = i / 100;
       
        bool firstPairIsPrime = false;
        bool secondPairIsPrime = false;

        for (int j1 = startFirstPair; j1 <= endFirsPair; j1++) {
            bool isPrime = true;
            for (int k = 2; k < j1; k++) {
                if (j1 % k == 0) {
                    isPrime = false;
                    break;
                }
            }
            if(isPrime){
                if (j1 == firstNum) {
                    firstPairIsPrime = true;
                }
            }
        }

        for (int j1 = startSecondPair; j1 <= endSecondPair; j1++) {
            bool isPrime = true;
            for (int k = 2; k < j1; k++) {
                if (j1 % k == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                if (j1 == secondNum) {
                    secondPairIsPrime = true;
                }
            }
        }
        
        if (firstPairIsPrime && secondPairIsPrime) {
            cout << i << endl;
        }
    }
    return 0;
}
