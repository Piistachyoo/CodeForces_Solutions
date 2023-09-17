#include <iostream>

int main() {
    short calories[4];
    std::string str;
    int sum = 0;
    int index;
    for (int i = 0; i < 4; i++) {
        std::cin >> calories[i];
    }
    std::cin.ignore(1, '\n');
    std::getline(std::cin, str);

    for (int i = 0; i < str.length(); i++) {
        index = str[i] - '0' - 1;
        sum += calories[index];
    }
    std::cout << sum;
    return 0;
}