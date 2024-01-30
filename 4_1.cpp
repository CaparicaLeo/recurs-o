#include <iostream>
using namespace std;
// Tanto a função func quanto a sum realizam a soma de todos os positivos antes de n;
int sum(int n){
    int x=0;
    for(int i=1;i<=n;i++){
        x+=i;
    }
    return x;
}

int main(){
    int x;
    cin >> x;
    cout << sum(x)<< endl;
}
