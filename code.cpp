#include <iostream>
#include <string>
using namespace std;


int main(){
    string word;
    cout << "Enter word you want to guest: ";
    cin >> word;
    char guest;

    bool bool1 = false;
    //                  0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25
    char alphabet[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char alphabet2[] = {'_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_'};
    int length_of_word = word.length();
    while(bool1 == false){
        cout << "Enter letter you want to quest: ";
        cin >> guest;
        for(int i =0;i < length_of_word;i++){
            if(guest==word[i]){
                alphabet2[i]=guest;}
            cout << alphabet2[i];
            }
            cout << endl;
    }
    }
