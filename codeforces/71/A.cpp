#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string temp;
    cin.ignore(10, '\n');
    for (int i = 0; i < n; i++) {
        getline(cin, temp);
        if (temp.length() > 10) {
            cout << temp[0] << (temp.length() - 2) << temp[temp.length() - 1]
                 << endl;
        } else
            cout << temp << endl;
    }

    return 0;
}