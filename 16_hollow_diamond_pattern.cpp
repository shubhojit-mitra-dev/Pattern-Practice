#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            cout << "  ";
        }
        for (int k = 0; k < 2*i + 1; k++){
            if (k == 0 || k == 2*i){
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int a = n - 1; a > 0; a--){
        for (int b = 0; b < n - a; b++){
            cout << "  ";
        }
        for (int c = 0; c < 2*a - 1; c++){
            if (c == 0 || c == 2*a - 2){
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}