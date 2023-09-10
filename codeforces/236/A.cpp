#include <iostream>

using namespace std;

int main(){
    string name;
    getline(cin, name);
    int count = 0;
    int chars[123] = {0};
    for(int i = 0; name[i] != '\0'; i++){
        if(chars[(int)name[i]] == 0){
            count++;
            chars[(int)name[i]]++;
        }
    }
    if(count%2==0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}