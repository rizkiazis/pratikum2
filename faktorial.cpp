#include <iostream>
using namespace std;

// faktorial dengan rekursif
int faktorial (int n){
    if (n==0 || n==1){
        cout << "1\n";
        return 1;
    }else{
        cout << n << "*";
        return n * faktorial (n-1);
    }


}
int main (){
int n;
cout<< "\nmasukan nilai n!";
cin >> n;
cout << n << "!=";
cout << "maka nilai " <<n << " faktorial dengan rekursif:" <<
faktorial(n) << endl << endl;

}
