#include <iostream>
using namespace std;
int mult(int x, int y){
    if(x==0 || y==0){
        return 0;
    }
    else{
        return x+mult(x,y-1);
    }
}
int main(){
    int x,y;
    cout << "X = ";
    cin >> x ;
    cout << "Y = ";
    cin >> y;
    cout << "X * Y = "<<mult(x,y) << endl;
}