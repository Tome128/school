#include <iostream>
#include <string>

using namespace std;

void test_pointer(int* a) {
    *a = 5;
//cout <<"adres w pamieci test pointer "<< a << endl;
}

int main() {
    int a = 0x12345678;
    long double* c;
    long double d = 0x12345678;
    c = &d;
    cout << "c:"<<c<<endl;
    cout << "d:"<<d<<endl;
    test_pointer(&a);
    cout << a << endl;
    cout <<"adres w pamieci "<< &a << endl;
    int array[] = {0x10,0x3,0x24,0x55,0x8};
    cout<<"array address : "<<array<<endl;
    cout<<"array address : "<<&array<<endl;
    cout<<"array address 1 : "<<&array[4]<<endl;
    cout<<array[0]<<" "<<array[4]<<endl;
    int * x = &array[0];
    cout<< hex <<  *(x + 3)<<dec<<25<<endl;
    printf("%.2X", *(x + 3));

   for(int i = 0;i<sizeof(array);i++)
   {
       string a = '0'+to_string((int)*((char *)x + i));
       cout<<dec<<i << ": " <<hex<< "0x"+a.substr(a.size()-2, 2) <<endl;

   }

}
// pointer declaration int* a;
// variable declaration int b;
// setting pointer address a = &b
// getting variable memory address &b
// setting memory value at pointer address *a = 10
// &b referencing
// *a de-referencing