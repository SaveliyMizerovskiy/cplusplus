//Name:Saveliy Mizerovskiy
//Email:saveliy.mizerovskiy51@myhunter.cuny.edu
#include <iostream>
using namespace std;
int main(){
    int y = 0;
    cout << "Please enter the number of years: ";
    cin >> y;
    int year = 2017;
    float pop = 325.70;
    for ( int i = 1; i <= y; i ++){
        cout << "\nYear " << year << " " << pop; 
        year ++;
        pop = pop + pop*(12.4/1000) - pop*(8.4/1000);
        pop = (int)(pop * 100 + .5);
        pop = (float)pop / 100;
    } 
}