#include <iostream>

using namespace std;

int main(){
    string  word;
    getline(cin, word);
    int lower_count = 0, upper_count = 0;
    for(int i = 0; word[i] != '\0'; i++){
        if('a' <= word[i] && word[i] <= 'z'){
            lower_count++;
        }
        else if('A' <= word[i] && word[i] <= 'Z'){
            upper_count++;
        }
    }
    if(upper_count > lower_count){
        for(int i = 0; word[i] != '\0'; i++){
            if('a' <= word[i] && word[i] <= 'z'){
                word[i] -= 32;
            }
        }
    }
    else{
        for(int i = 0; word[i] != '\0'; i++){
            if('A' <= word[i] && word[i] <= 'Z'){
                word[i] += 32;
            }
        }
    }
    cout << word;
}