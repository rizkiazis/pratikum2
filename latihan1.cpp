#include <iostream>
using namespace std;

void nilai(int a){
    a = 10;
}

int main() {
    int a = 5;
    cout<< "Nilai Awal : " << a << endl;
    nilai(a);
    cout << "Nilai Akhir : " << a << endl;
}
