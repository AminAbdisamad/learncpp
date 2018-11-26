//
// Created by aminux on 11/25/18.
//

#include "iostream"
using namespace std;

int canDrive(int yourAge){
    int maxAge = 80;
    int minAge = 15;
    bool isFeelingWell = false;
    bool hasLicence = false;
    if((yourAge < maxAge) && (yourAge > minAge) && !hasLicence && !isFeelingWell){
        cout << "You can drive sir. Go a head!!";
    }else{
        cout << "You didn't meet the required conditions";
    }
    return yourAge;
}

// Switch
int lang(int langNumber){
    switch (langNumber){
        case 1:
            cout << "Hello, ";
            break;
        case 2:
            cout << "Merhaba!";
            break;
        case 3:
            cout << "Assalamu Aleikum";
            break;
        default:
            cout << "Waran walaal";
    }
    return 0;
}

int main(){
////    ternary operator
//int overWeight = 95; // KG
//int underWeight = 45; //KG
//bool isOverWeight =

    cout << canDrive(19) <<endl;
    cout << lang(2) <<endl;
    return 0;
}