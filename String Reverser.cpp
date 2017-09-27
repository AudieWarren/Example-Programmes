#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
string x;
while(1==1){
    cout << "Please input a word" << endl;
    cin >> x;
    reverse(x.begin(), x.end());
    cout << x << endl;
}
return 0;
}
