#include <iostream>

int main() {
    int price, coins;
    std::cin >> price >> coins;
    int bought = 0;
    while (true) {
        bought++;
        if ((price * bought) % 10 == 0) {
            break;
        }
        if ((price * bought) % 10 == coins) {
            break;
        }
    }
    std::cout << bought;
    return 0;
}
