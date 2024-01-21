using namespace std;
void main() {
    int razmer_matrici;
    int razmer_massiva;
    cin >> razmer_matrici;
    int* mass = new int[razmer_matrici];
    int** numbers{ new int*[razmer_matrici] };
    for (int j = 0; j < razmer_matrici; j++) {
        cin >> razmer_massiva;
        mass[j] = razmer_massiva;
        numbers[j] = new int[razmer_massiva];
        for (int i = 0; i < razmer_massiva; i++) {
            cin >> numbers[j][i];
        }
    }
    int space_coin, x, y;
    cin >> space_coin;
    for (int i = 0; i < space_coin; i++) {
        cin >> x; std::cin >> y;
        if (x > 0 && x <= razmer_matrici && y > 0 && y <= (sizeof(numbers[x - 1]))) {
            cout << numbers[x - 1][y - 1] << std::endl;
        }
        else {
            cout << "ERROR";
        }
    }
}