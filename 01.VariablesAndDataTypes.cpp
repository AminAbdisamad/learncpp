//Single comment on C++

/*
 * Multiple comment
 *
 *
 * */

#include "iostream" // for cin cout
#include "vector" //vectors
#include "string" //strings
#include "fstream" //file io
using namespace std;

int main(){
//    Constant double
const double PI = 3.14566677;
//float
float myHeight = 1.78;
// character
char myGrade = 'A';

// int
int myAge = 28;
// boolean
bool isGoing = true;
//Printing variable values
//cout << canDrive(18) <<endl;
cout << "PI : " << PI <<endl;
cout << "My Grade : " << myGrade <<endl;
cout << "Age : " << myAge <<endl;
cout << "going : " << isGoing <<endl;

//size of dataTypes
    cout << "size Of : " << sizeof(PI) <<endl;
    cout << "My Grade : " << sizeof(myGrade) <<endl;
    cout << "Age : " << sizeof(myAge) <<endl;
    cout << "my Height : " << sizeof(myHeight) <<endl;
    cout << "going : " << sizeof(isGoing) <<endl;


return 0;
}