#include <iostream>
using namespace std;
int main(){
    int num, prev = 0, next = 1, val = 1;
    cout<<"Enter number : ";
    cin>>num;

    while(next<=num){
        printf("%d, ",next);
        prev = val;
        val = next;
        next = prev+ val; 
    }
}