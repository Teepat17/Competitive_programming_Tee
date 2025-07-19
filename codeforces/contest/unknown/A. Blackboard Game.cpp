#include <bits/stdc++.h>
using namespace std;
#define int long long

#include <bits/stdc++.h>
using namespace std;
#define int long long

string contest(int n){
    set<int> num;
    for (int i = 0; i < n; i++) num.insert(i);

    string winner = "Bob"; // Last to make a valid pair wins

    while (!num.empty()) {
        int a = *num.begin();
        num.erase(a);

        bool paired = false;
        for (int b : num) {
            if ((a + b) % 4 == 3) {
                num.erase(b);
                paired = true;
                break;
            }
        }

        if (!paired) {
            winner = "Alice"; 
            break;
        }
        winner = (winner == "Alice" ? "Bob" : "Alice");
    }
    return winner;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector <int> arr(n);
    vector <bool> result(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        cout << contest(arr[i]) << endl;
    }
    return 0;
}