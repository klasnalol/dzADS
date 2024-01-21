#include <iostream>
using namespace std;

const int MAX_N = 10001;

int main() {
    int N;
    cin >> N;
    int leftShelf[MAX_N];
    int rightShelf[MAX_N];
    int removalOrder[MAX_N];
    int leftTop = 0;
    int rightTop = 0;
    int removalTop = 0;
    for (int i = 0; i < N; ++i) {
        int operation, diskNumber;
        cin >> operation;

        if (operation == 1  operation == 2) {
            // Placing a disk on the shelf
            cin >> diskNumber;
            if (operation == 1) {
                leftShelf[leftTop++] = diskNumber;
            }
            else {
                rightShelf[rightTop++] = diskNumber;
            }
        }
        else if (operation == 3  operation == 4) {
            if (operation == 3 && leftTop > 0) {
                removalOrder[removalTop++] = leftShelf[--leftTop];
            }
            else if (operation == 4 && rightTop > 0) {
                removalOrder[removalTop++] = rightShelf[--rightTop];
            }
        }
    }
    for (int i = 0; i < removalTop; ++i) {
        cout << removalOrder[i] << " ";
    }

    return 0;
}