#include <iostream>
using namespace std;
void ruler(int n, int start = 0) {
    if (n > 0) {
        ruler(n - 1, start);

        int end = start + 2 * n;
        cout << ".";
        for (int i = 0; i < n; i++) {
            cout << "-";
        }
        cout << endl;

        ruler(n - 1, start + n);
    }
}

int main() {
    ruler(4);
    return 0;
}