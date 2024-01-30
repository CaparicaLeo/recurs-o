#include <iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}
int main(){
    int n;
    cout << "Escolha um numero: ";
    cin >> n;
    cout << "A soma de todos os positivos inteiros ate " << n << ": " << sum(n) << endl;
    return 0;
}