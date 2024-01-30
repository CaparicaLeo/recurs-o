#include <iostream>
using namespace std;
int sum(int *v, int n);
int main(){
    int n;
    cout << "Tamanho do vetor: ";
    cin >> n;
    int vetor[n];
    for(int i=0;i<n;i++){
        cout << "Elemento " << i <<": ";
        cin >> vetor[i];
    }
    int *ptr=vetor;
    cout << "A soma dos elementos: " << sum(ptr,n) << endl;
    return 0;
}
int sum(int *v, int n){
    if(n==1){
        return v[0];
    }
    else{
        return v[n-1]+ sum(v,n-1);
    }
}