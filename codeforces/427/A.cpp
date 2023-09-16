#include <iostream>

int main() {
    int number;
    std::cin >> number;
    int temp;
    int officers_number = 0;
    int crimes_number = 0;
    for (int i = 0; i < number; i++) {
        std::cin >> temp;
        if (temp == -1) {
            if (officers_number) {
                officers_number--;
            } else {
                crimes_number++;
            }
        } else {
            officers_number += temp;
        }
    }
    std::cout << crimes_number;
    return 0;
}