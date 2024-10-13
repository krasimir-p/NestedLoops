#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1000; i <= 9999; i++) {
        int num = i;
        int  d1, d2, d3, d4;
        d1 = num % 10;
        num /= 10;
        d2 = num % 10;
        num /= 10;
        d3 = num % 10;
        d4 = num / 10;
        if((d1+d2==d3+d4) && (n%(d1+d2)==0) && d1!=0&&d2!=0 && d3!=0 && d4!=0){
            cout << d4 << d3 << d2 << d1 << " ";
        }
    }
    return 0;
}
