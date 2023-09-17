#include <iostream>

int main() {
    short number_of_teams;
    std::cin >> number_of_teams;
    //   int number_of_games = number_of_teams * (number_of_teams - 1);
    short arr[number_of_teams][2];
    int flag;
    int result = 0;
    for (int i = 0; i < number_of_teams; i++) {
        std::cin >> arr[i][0] >> arr[i][1];
    }
    for (int i = 0; i < number_of_teams; i++) {
        flag = 0;
        for (int j = 0; j < number_of_teams; j++) {
            if (arr[i][0] == arr[j][1])
                result++;
        }
    }
    std::cout << result;
    return 0;
}
