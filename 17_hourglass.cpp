#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for (int i = n; i > 0; i--){
        for (int j = 0; j < n - i; j++){
            cout << "  ";
        }
        for (int k = 0; k < 2*i - 1; k++){
            cout << "* ";
        }
        cout << endl;
    }
    for (int a = 1; a < n; a++){
        for (int b = 0; b < n - a - 1; b++){
            cout << "  ";
        }
        for (int c = 0; c <= 2*a; c++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}