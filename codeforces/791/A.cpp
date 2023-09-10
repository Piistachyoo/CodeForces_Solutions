#include <iostream>

using namespace std;

int main(){
    int limak_weight, bob_weight;
    int years_counter = 0;
    cin >> limak_weight >> bob_weight;
    while(limak_weight <= bob_weight){
        years_counter++;
        limak_weight *= 3;
        bob_weight *= 2;
    }
    cout << years_counter;
    return 0;
}