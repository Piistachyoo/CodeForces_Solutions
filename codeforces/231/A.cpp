#include <iostream>

using namespace std;

int main(){
    int number_of_problems, temp;
    cin >> number_of_problems;
    int solution_counter = 0;
    int team[number_of_problems][3];
    for(int i = 0; i < number_of_problems; i++){
        cin >> team[i][0] >> team[i][1] >> team[i][2];
    }
    for(int i = 0; i < number_of_problems; i++){
        temp = team[i][0] + team[i][1] + team[i][2];
        if(temp > 1)
            solution_counter++;
    }
    cout << solution_counter;
}