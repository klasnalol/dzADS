#include <iostream>

using namespace std;

int countStudentsUnableToEat(int* students, int n, int* samsas, int m) {
    int i = 0; 
    int j = 0; 

    while (i < n && j < m) {
        if (students[i] == samsas[j]) {
            i++;
            j++;
        } else {
            i++;
        }
    }
    return n - i;
}

int main() {
    // Example usage
    int students1[] = {1, 1, 0, 0};
    int samsas1[] = {0, 1, 0, 1};
    cout << countStudentsUnableToEat(students1, 4, samsas1, 4) << endl;  
    int students2[] = {1, 1, 1, 0, 0, 1};
    int samsas2[] = {1, 0, 0, 0, 1, 1};
    cout << countStudentsUnableToEat(students2, 6, samsas2, 6) << endl;  
    return 0;
}
