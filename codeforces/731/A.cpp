#include <iostream>

int main() {
    std::string str;
    getline(std::cin, str);
    char current = 'a';
    int length_to_start, length_to_end;
    int char_from_start, char_from_end;
    int char_from_current;
    int moves = 0;
    for (char c : str) {
        length_to_start = abs(current - 'a');
        length_to_end = abs('z' - current);
        char_from_start = abs(c - 'a');
        char_from_end = abs(c - 'z');
        char_from_current = abs(c - current);
        if ((char_from_current <= (length_to_start + 1 + char_from_end)) &&
            (char_from_current <= (length_to_end + 1 + char_from_start))) {
            moves += char_from_current;
        } else {
            if ((length_to_start + 1 + char_from_end) <
                (length_to_end + 1 + char_from_start)) {
                moves += (length_to_start + 1 + char_from_end);
            } else {
                moves += (length_to_end + 1 + char_from_start);
            }
        }
        current = c;
    }
    std::cout << moves;
    return 0;
}

