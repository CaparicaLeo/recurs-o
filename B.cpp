#include <iostream>
using namespace std;
int pow(int b, int e){
    if(e==0){
        return 1;
    }
    else{
        return b*pow(b,e-1);
    }
}
int main(){
    int b,e;
    cout << "BASE: ";
    cin >> b;
    cout << "EXPOENTE: ";
    cin >> e;
    cout << b << " ELEVADO A " << e << " = " << pow(b,e) << endl;
}
