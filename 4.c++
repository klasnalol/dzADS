#include <iostream>
using namespace std;
int reverse(int array, int start, int end) {
    if (start < end) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        reverse(array, start + 1, end - 1);
    }
}

int main() {
    intarray = new int[5];

    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }

    reverse(array, 0, 4);

    cout << "Reversed array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }

    delete[] array;

    return 0;
}