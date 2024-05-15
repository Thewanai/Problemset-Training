#include <iostream>
#include <string>
using namespace std;

int main() {
    int t, flag;
    char temp;
    string a;
    cin >> t;
    while (t--) {
        flag = 0;
        cin >> a;
        for (int i = 0; i < a.length()-1; i++) {
            if (a[i] != a[i+1]) {
                flag = 1;
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
            cout << a << endl;
        } else cout << "NO" << endl;
    }
    return 0;
}
