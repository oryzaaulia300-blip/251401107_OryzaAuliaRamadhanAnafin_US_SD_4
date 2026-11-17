#include <iostream>
using namespace std;

#define MAX 50

int main(){
    system("cls");
    int stack[MAX];
    int top = -1;
    char kata[20];
    
    //push
    top++;
    stack[top] = 10;

    top++;
    stack[top] =20;
    
    top++;
    stack[top] = 30;

    cout << "isi stack: ";
    for(int i = top; i >= 0; i--){
        cout <<stack[i] <<" ";
    }
    cout << endl;

  
    cout << "Top: "<< stack[top] << endl; 



}