#include <iostream>
using namespace std;

int main() {
    long long supply;
    int number;
    cin >> number >> supply;
    char sign;
    int wanted;
    int left = 0;
    while (number != 0) {
        cin >> sign >> wanted;
        if (sign == '+') {
            supply += wanted;
        } else if (sign == '-') {
            if (wanted <= supply) {
                supply -= wanted;
            } else {
                left++;
            }
        }
        number--;
    }
    cout << supply << ' ' << left;
    return 0;
}