#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    int flag = 1;
    cin >> s;
    cin >> t;
    if (s.length() == t.length()) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o') {
                if (t[i] == 'a' || t[i] == 'i' || t[i] == 'u' || t[i] == 'e' || t[i] == 'o') {
                    continue;
                } else {
                    cout << "NO" << endl;
                    flag = 0;
                    break;
                }
            } else if (t[i] == 'a' || t[i] == 'i' || t[i] == 'u' || t[i] == 'e' || t[i] == 'o') {
                if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o') {
                    continue;
                } else {
                    cout << "NO" << endl;
                    flag = 0;
                    break;
                }
            }
        }
        if (flag) cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}
