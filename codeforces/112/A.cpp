#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string str1, str2;
    getline(cin, str1);
    getline (cin, str2);
    int ret_val = 0;
    for(int i = 0; ((i < 100) && (str1[i] != '\0')); i++){
        if(isupper(str1[i]))
            str1[i] = tolower(str1[i]);
        if(isupper(str2[i]))
            str2[i] = tolower(str2[i]);
        if(str1[i] < str2[i]){
            ret_val = -1;
            break;
        }
        else if(str1[i] > str2[i]){
            ret_val = 1;
            break;
        }
        else{
            continue;
        }
    }
    cout << ret_val;
    return 0;
}