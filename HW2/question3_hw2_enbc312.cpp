#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char mostrepeatedchar(string word);

int main() {
    string word = "Elizabeth";

    cout << "The most repeated character is: "
         << mostrepeatedchar(word) << '\n';

    return 0;
}

char mostrepeatedchar(string word) {
    unordered_map<char, int> mp;
    int n = word.length();

    char result = word[0];   
    int cnt = 0;             
    if(word.length() == 0) return '\0';
    for (int i = 0; i < n; i++) {
        mp[word[i]]++;       

        if (cnt < mp[word[i]]) {
            result = word[i];
            cnt = mp[word[i]];
        }
        
    }

    return result;
}