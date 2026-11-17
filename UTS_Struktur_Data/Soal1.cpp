#include <iostream>
using namespace std;

int main(){
    int nilai[4][5];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            cin >> nilai[i][j];
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            cout << nilai[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}