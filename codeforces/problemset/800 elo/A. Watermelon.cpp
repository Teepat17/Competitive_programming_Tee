#include <iostream>
using namespace std;

int main() {
    int weight;
    cin >> weight;

    if (weight > 2 && weight % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}