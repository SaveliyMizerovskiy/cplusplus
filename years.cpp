//Name:Saveliy Mizerovskiy
//Email:saveliy.mizerovskiy51@myhunter.cuny.edu
#include <iostream>
using namespace std;
int main(){
    bool year = false;
    int y = 0;
    while (!year){
        cout << "Enter a year: ";
        cin >> y;
        if (y <= 2018){
            year = true;
        } else {
            cout << "Year must be 2018 or earlier\n";
        }
    }
}
