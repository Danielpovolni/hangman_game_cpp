#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    cin >> word;
    string guest;

    bool bool1 = false;
    //                  0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25
    char alphabet[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int length_of_word = word.length();
    while(bool1 == false)
        cin >> guest;
        for(int i=0; i < 5;i++){
            for(int x=0; x<26;x++){
                if(word[i]==alphabet[x]){
                    cout << i;
                }}}


}
