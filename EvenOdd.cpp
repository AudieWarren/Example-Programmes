#include <iostream>

using namespace std;

int main()
{
int x;
while (1==1){
    cin >> x;
    if (x % 2 == 0) {
        cout << "Even" << endl;
    }
    else {
        cout << "Odd" << endl;
    }}
    return 0;
}

\\Currently crashes on non integer input.
