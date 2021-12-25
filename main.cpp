#include <iostream>
using namespace std;

int main() {
 int a ;
 float D ;

cin>> a ;

 D = a * 100 / 1100;

 cout << D<<"%age" <<"\n" ;
 
 if (a >= 33) {
     cout<< "Pass \n" ;
 if(D>= 60) {
cout<<"1st Division";
} else if (D >= 50) {
    cout << "Second Division";
} else if (D >= 40) {
    cout << "Third Division";
 } else {
     cout << "No division";
 }
 }else {
     cout << "Fail";
 }
return 0;


}

