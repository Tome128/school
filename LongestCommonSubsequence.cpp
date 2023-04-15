#include <iostream>

using namespace std;


int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[] = {1, 3, 5, 7, 9, 2, 4, 6, 8};
    int size_a = sizeof(a) / sizeof(a[0]);
    int size_b = sizeof(b) / sizeof(b[0]);
    int lcs = 0;
    int max_lcs = 0;
    int start_a = 0;
    int start_b;

    while (lcs < size_a - start_a) {
        start_b = 0;
        lcs = 0;
        for (int i = start_a; i < size_a; i++) {
            for (int j = start_b; j < size_b; j++) {
                if(a[i] == b[j]) {
                    lcs++;
                    start_b = j + 1;
                    break;
                }
            }
        }
        max_lcs = max(lcs, max_lcs);
        start_a++;
    }
    cout<<"lcs = "<<max_lcs<<endl;
}