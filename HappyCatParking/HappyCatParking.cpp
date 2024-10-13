#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int days, hoursPerDay;
    cin >> days >> hoursPerDay;

    double totalSum = 0;

    cout << fixed << setprecision(2);
    
    for (int d = 1; d <= days; d++) {
        double sum = 0;
        for (int h = 1; h <= hoursPerDay; h++) {
            if (d % 2 == 0 && h % 2 == 1) {
                sum += 2.5;
            }
            else if (d % 2 == 1 && h % 2 == 0) {
                sum += 1.25;
            }
            else {
                sum++;
            }
        }
        cout << "Day: " << d << " - " << sum << " leva" << endl;
        totalSum += sum;
    }
    
    cout << "Total: " << totalSum << " leva" << endl;

    return 0;
}
