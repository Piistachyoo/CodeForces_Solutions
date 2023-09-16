#include <iostream>

int main() {
    int number_of_stones;
    std::cin >> number_of_stones;
    std::string stones;
    std::cin >> stones;
    int x = 0;
    int removes = 0;
    for (int i = 1; i < number_of_stones; i++) {
        if (stones[i] == stones[i - x - 1]) {
            removes++;
            x++;
        } else {
            x = 0;
        }
    }
    std::cout << removes;
    return 0;
}