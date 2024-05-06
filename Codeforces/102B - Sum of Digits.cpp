#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    int spell = 0, sum;
    cin >> num;
    while (num.length() > 1) {
        sum = 0;
        for (char c : num) {
            sum += c - '0';
        }
        num = to_string(sum);
        spell++;
    }
    cout << spell << endl;
    return 0;
}
