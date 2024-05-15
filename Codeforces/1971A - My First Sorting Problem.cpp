#include <iostream>
#include <string>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        (a < b) ? cout << a << " " << b << endl : cout << b << " " << a << endl;
    }
    return 0;
}
