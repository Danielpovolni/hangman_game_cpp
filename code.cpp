#include <iostream>
#include <string>
using namespace std;


int main(){
    string word;
    cout << "Enter word you want to guest: ";
    cin >> word;
    char guess;

    bool bool1 = false;
   //                   0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25
    char alphabet[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char alphabet2[] = {'_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_'};
    int length_of_word = word.length();
    while(bool1 == false){
		int count =0;
		int number_of_failed_attempts = 0;
        cout << "Enter letter you want to quest: ";
        cin >> guess;
        for(int i =0;i < length_of_word;i++){
            // find guess in word
            if(guess==word[i]){
                alphabet2[i]=guess;}
            }
            //check if guess is in the word
            if(word.find(guess) == string::npos){
                cout << "NO LATTER IN WORD" << endl;
				number_of_failed_attempts++;
            }
        // print word with latter that have been found
        for(int x=0;x < length_of_word; x++){
            cout << alphabet2[x];
			if(word[x]==alphabet2[x]){
			count++;}}
		cout << endl;
        if(count == length_of_word){
        cout << "YOU WIN";
		bool1 = true;}
    }
    }

