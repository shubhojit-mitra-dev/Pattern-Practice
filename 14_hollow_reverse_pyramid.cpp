#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for (int i = n; i > 0; i--){
        for (int j = 0; j < n - i; j++){
            cout << "  ";
        }
        for (int k = 0; k < 2*i - 1; k++){
            if (i == n || k == 0 || k == 2*i - 2){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}