#include <iostream>
using namespace std;

int total;

int main() {
    int total = 5;
    cout<< "Total Lokal = " << total << endl;
    ::total = 7;
    cout<< "Toral Global = " << ::total;
}
