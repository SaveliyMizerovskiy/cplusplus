//Name:Saveliy Mizerovskiy
//Email:saveliy.mizerovskiy51@myhunter.cuny.edu
#include <iostream>
using namespace std;
int main(){
    int n;
    int x;
    cout << "Enter Number: ";
    cin >> n;
    if (n < 0){
        cout << 1;
        x = 32 + n;
    } else {
        cout << 0;
        x = n;
    }
    int b = 16;
    while (b > 0.5){
        if ( x >= b){
            cout << 1;
        } else {
            cout << 0;
        }
        x = x % b;
        b = b/2;
    }
     cout << "\n";
}