#include <iostream>

using namespace std;

int main(){
    int wires;
    cin >> wires;
    int oskols[wires];
    for(int i = 0; i < wires; i++){
        cin >> oskols[i];
    }
    int shots;
    cin >> shots;
    int x_wire, y_bird;
    for(int i = 0; i < shots; i++){
        cin >> x_wire >> y_bird;
        if(x_wire == 1){
           // oskols[x_wire - 2] += (y_bird - 1);
            oskols[x_wire] += (oskols[x_wire-1] - y_bird);
            oskols[x_wire - 1] = 0;
        }
        else if(x_wire == wires){
           // oskols[x_wire] += (oskols[x_wire-1] - y_bird);
           oskols[x_wire - 2] += (y_bird - 1);
            oskols[x_wire-1] = 0;
        }
        else{
            oskols[x_wire - 2] += (y_bird - 1);
            oskols[x_wire] += (oskols[x_wire-1] - y_bird);
            oskols[x_wire-1] = 0;
        }
    }
    for(int i = 0; i < wires; i++){
        cout << oskols[i] << endl;
    }
    return 0;
}

