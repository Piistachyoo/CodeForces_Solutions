#include <iostream>

using namespace std;

int main(){
    int number_of_oranges, max_size, waste_max;
    cin >> number_of_oranges >> max_size >> waste_max;
    int oranges[number_of_oranges];
    for(int i = 0; i < number_of_oranges; i++){
        cin >> oranges[i];
    }
    int container = 0;
    int empty_times=0;

    for(int i = 0; i < number_of_oranges; i++){
        if(oranges[i] > max_size){
            continue;
        }
        container += oranges[i];
        if(container > waste_max){
            container = 0;
            empty_times ++;
        }
    }
    cout << empty_times;
    return 0;
}

