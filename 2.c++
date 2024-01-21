#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int* L = new int[N];
    for (int i = 0; i < N; ++i) {
        cin >> L[i];
    }
    int Q;
    cin >> Q;
    for (int q = 0; q < Q; ++q) {
        string queryType;
        cin >> queryType;

        if (queryType == "Insert") {
            int x, y;
            cin >> x >> y;
            int* newL = new int[N + 1];

            //  before index x
            for (int i = 0; i < x; ++i) {
                newL[i] = L[i];
            }

            //  at index x
            newL[x] = y;

            //  after index x
            for (int i = x; i < N; ++i) {
                newL[i + 1] = L[i];
            }

            // Update N 
            delete[] L;
            L = newL;
            ++N;
        }
        else if (queryType == "Delete") {
            int x;
            cin >> x;

            // new dynamic array, accommodate the removal of the element
            int* newL = new int[N - 1];

            for (int i = 0; i < x; ++i) {
                newL[i] = L[i];
            }

            for (int i = x + 1; i < N; ++i) {
                newL[i - 1] = L[i];
            }
            delete[] L;
            L = newL;
            --N;
        }
    }
    for (int i = 0; i < N; ++i) {
        cout << L[i] << " ";
    }

    
    delete[] L;

    return 0;
}