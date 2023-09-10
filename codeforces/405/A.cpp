#include <iostream>

using namespace std;

int main(){
    int columns, temp;
    cin >> columns;
    int cubes[columns];
    for(int i = 0; i < columns; i++)
        cin >> cubes[i];
    for(int i = 0; i < columns - 1; i++){
        for(int j = 0; j < columns - 1 - i; j++){
            if(cubes[j] > cubes[j+1]){
                temp = cubes[j];
                cubes[j] = cubes[j+1];
                cubes[j+1] = temp;
            }
        }
    }
    for(auto cube: cubes)
        cout << cube << " ";
    return 0;
}