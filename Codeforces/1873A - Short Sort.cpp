#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    string card;
    cin >> t;
    while (t--) {
        cin >> card;
        if (card[0] == 'a') cout << "YES" << endl;
        else if (card[1] == 'b') cout << "YES" << endl;
        else if (card[2] == 'c') cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
