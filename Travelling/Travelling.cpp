#include <iostream>

using namespace std;

int main()
{
    string destination;
    double cost=0, savings=0, amount=0;

    while (cin >> destination && destination != "End") {
        cin >> cost;
        while (savings < cost) {
            cin >> amount;
            savings += amount;
        }
        cout << "Going to " << destination << "!" << endl;
        savings = 0;
    }
    return 0;
}
