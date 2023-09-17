#include <iostream>

int main() {
    std::string s, t;
    getline(std::cin, s);
    getline(std::cin, t);
    short position = 1;
    for (char c : t) {
        if (c == s[position - 1]) {
            position++;
        }
    }
    std::cout << position;
    return 0;
}
