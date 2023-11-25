//Name:Saveliy Mizerovskiy
//Email:saveliy.mizerovskiy51@myhunter.cuny.edu
#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Number:";
    cin >> x;
    string n = "";
    for (int i = 1; i <= x; i++){
        n = n + "*";
        cout << n << "\n";
    }
}