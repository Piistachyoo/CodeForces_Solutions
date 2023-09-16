#include <iostream>

int main() {
    long number_of_cards;
    std::cin >> number_of_cards;
    int cards[number_of_cards];
    long sereja_sum = 0;
    long dima_sum = 0;
    int *ptr_front, *ptr_end;
    for (int i = 0; i < number_of_cards; i++)
        std::cin >> cards[i];
    ptr_front = &cards[0];
    ptr_end = &cards[number_of_cards - 1];
    char exit_flag = 0;
    while (1) {
        if (*ptr_front > *ptr_end) {
            sereja_sum += *ptr_front;
            ptr_front++;
        } else if (*ptr_end > *ptr_front) {
            sereja_sum += *ptr_end;
            ptr_end--;
        } else {
            sereja_sum += *ptr_front;
            break;
        }

        if (*ptr_front > *ptr_end) {
            dima_sum += *ptr_front;
            ptr_front++;
        } else if (*ptr_end > *ptr_front) {
            dima_sum += *ptr_end;
            ptr_end--;
        } else {
            dima_sum += *ptr_front;
            break;
        }
    }
    std::cout << sereja_sum << ' ' << dima_sum;
    return 0;
}