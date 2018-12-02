#include <iostream>
using namespace std;

void tukar (int a, int b)
{
int tmp = a;
a = b;
b = tmp;

}

int main (){
    int a =5;
    int b =10;

    cout << "nilai variabel a adalah :" << a << endl;
    cout << "nilai variabel b adalah :" << b << endl;
    tukar (a ,b);
    cout << "\nsetelah ditukar : tukar (a,b)\n";
    cout << "nilai variabel a adalah :" << a << endl;
    cout << "nilai variabel b adalah :" << b << endl;
    cout << endl;






}
