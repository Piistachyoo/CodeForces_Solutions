#include <iostream>

using namespace std;

int main(){
    string  word;
    getline(cin, word);
    if(('a' <= word[0]) && (word[0] <= 'z')){
        word[0] -= 32;
    }
    cout << word;
}