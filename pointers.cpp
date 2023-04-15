#include <iostream>

using namespace std;

void test_pointer(int* a) {
    *a = 5;
    cout <<"adres w pamieci test pointer "<< a << endl;
}

int main() {
    int a = 10;

    test_pointer(&a);
    cout << a << endl;
    cout <<"adres w pamieci "<< &a << endl;
}