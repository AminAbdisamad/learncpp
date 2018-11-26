#include <iostream>
using namespace std;
int main(){
    int age[] = {12,23,34,45,56,67,78,76,65,54,43,32,32,21};
    for (int i = 0; i < sizeof(age)/sizeof(age[0]); i++){
        cout << "Ages : " << age[i] << ", ";
    }
    //    defining Array
    char myName[5][9] = {{'A','M','I','I','N'},
                         {'A','B','D','I','S','A','M','A','D'}};
//    Adding values to array
myName[0][0] = 'E';

//    Display first Name through Index
    cout << " name[0][0]: "<< myName[0][0] <<endl;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j< 5; j++){
            cout << myName[i][j];
        }
        cout << endl;
    }
//    While loops
    int start = 0;
    while( start <= 10){
        cout << "Number: " << start << endl;
        start ++;
    }

//     Do while loops
    string userInput;
    int guessedNumber = 0;
    do {
        cout << "Guess Number between 1 and 10: ";
        getline(cin, userInput);
        guessedNumber = stoi(userInput);
    }while(guessedNumber != 4);


}


