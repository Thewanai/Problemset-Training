#include <iostream>
#include <string>
using namespace std;

int main() {
    string f, m, s;
    cin >> f;
    cin >> m;
    cin >> s;
    if (f == m && m == s) cout << "?" << endl;
    else if ((f == "rock" && m == "scissors" && m == s) ||
    (f == "paper" && m == "rock" && m == s) ||
    (f == "scissors" && m == "paper" && m == s)) cout << "F" << endl;
    else if ((m == "rock" && f == "scissors" && f == s) ||
    (m == "paper" && f == "rock" && f == s) ||
    (m == "scissors" && f == "paper" && f == s)) cout << "M" << endl;
    else if ((s == "rock" && m == "scissors" && m == f) ||
    (s == "paper" && m == "rock" && m == f) ||
    (s == "scissors" && m == "paper" && m == f)) cout << "S" << endl;
    else cout << "?" << endl;
    return 0;
}
