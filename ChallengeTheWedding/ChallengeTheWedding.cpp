#include <iostream>

using namespace std;

int main()
{
    int men, women, tables;
    cin >> men >> women >> tables;
        
    int count = 0;

    for (int m = 1; m <= men; m++) {
        for (int w = 1; w <= women; w++) {
            count++;
            if (count > tables) {
                break;
            }
            cout << "(" << m << " <-> " << w << ") ";
        }
    }

    return 0;
}
