#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for (int i = 0; i < n; i++){
        for (int j = n - 1; j > i; j--){
            cout << "  ";
        }
        for (int k = 0; k <= i; k++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}