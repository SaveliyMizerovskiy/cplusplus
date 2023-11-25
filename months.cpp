//Name:Saveliy Mizerovskiy
//Email:saveliy.mizerovskiy51@myhunter.cuny.edu
#include <iostream>
using namespace std;
int main(){
    int m = 0;
    cout << "Months:";
    cin >> m;
    if (m < 3 or m > 11){
        cout << "\nHappy Winter";
    } else if (m >= 3 and m < 7){
        cout << "\nHappy Spring";
    } else if (m >= 7 and m < 9){
        cout << "\nHappy Summer";
    } else {
        cout << "\nHappy fall";
    }
}