#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    c = a + b;
    string stra, strb, strc, newstra, newstrb, newstrc;
    stra = to_string(a);
    strb = to_string(b);
    strc = to_string(c);
    for (char c : stra) {
        if (c != '0') newstra += c;
    }
    for (char c : strb) {
        if (c != '0') newstrb += c;
    }
    for (char c : strc) {
        if (c != '0') newstrc += c;
    }
    a = stoi(newstra);
    b = stoi(newstrb);
    c = stoi(newstrc);
    if (a + b == c) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
