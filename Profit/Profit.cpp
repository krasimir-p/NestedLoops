#include <iostream>

using namespace std;

int main()
{
    int coinsOneLv, coinsTwoLv, banknote5Lv, sum;
    cin >> coinsOneLv >> coinsTwoLv >> banknote5Lv >> sum;

    for(int lv1=0;lv1<=coinsOneLv;lv1++){
        for (int lv2 = 0; lv2 <= coinsTwoLv; lv2++) {
            for (int lv5 = 0; lv5 <= banknote5Lv; lv5++) {
                if (lv1*1 + lv2*2 + lv5*5 == sum) {
                    cout << lv1 << " * 1 lv. + " << lv2 << " * 2 lv. + " << lv5 << " * 5 lv. = " << sum << " lv." << endl;
                }
            }
        }
    }

    return 0;
}
