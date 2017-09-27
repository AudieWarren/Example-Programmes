#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
string x, y;

while(1==1){
    cout << "Please input a word" << endl;
    cin >> x;
    y = x;
    reverse(x.begin(), x.end());
    if (x == y) {
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not a palindrome" << endl;
    }
}
return 0;
}
