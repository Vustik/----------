
#include <iostream>
using namespace std;
int main()
{
    int a[] = { 1, 2, 3, 4, 5 };
    int b[5];
    int* p1 = a, * p2 = b;

    for (int i = 0; i < 5; i++) {
        *(p2 + i) = *(p1 + i);
    }

    for (int i = 0; i < 5; i++) {
        cout << b[i] << " ";
    }








    int a[] = { 1, 2, 3, 4, 5 };
    int* p = a;

    for (int i = 4; i >= 0; i--) {
        cout << *(p + i) << " ";
    }

    return 0;










    int a[] = { 1, 2, 3, 4, 5 };
    int b[5];
    int* p1 = a, * p2 = b;

    for (int i = 0; i < 5; i++) {
        *(p2 + i) = *(p1 + 4 - i);
    }

    for (int i = 0; i < 5; i++) {
        cout << b[i] << " ";
    }

    return 0;
    return 0;
}

