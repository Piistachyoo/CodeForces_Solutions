#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    string str;
    int dist = 0;
    getline(cin, str);
    sort(str.begin(), str.end());
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            if (str[i] != str[i - 1])
                dist++;
        }
    }
    cout << dist;
    return 0;
}