#include <iostream>

using namespace std;

int main()
{
int i, y, res = 0;
while(1==1){
for (i=0; i<3; i++){
    cout << "Input a number. Type \'Done\' when you are done." << endl;
    cin >> y;
    if(res<y) {
        res = y;
    }
}
    cout << res << endl;
    }
    return 0;
}
