#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main() {
    char a[200];
    cin.getline(a,200);

    for (int i = strlen(a) - 1; i >= 0; i--) {
        cout << a[i];
    }
    return 0;
}
