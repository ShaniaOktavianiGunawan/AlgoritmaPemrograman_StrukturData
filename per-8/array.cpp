#include <iostream>
using namespace std;

int main() {
    int num[3][3];
    string item[] = {"printer", "mouse", "data cabel"};
    const int year[] = {2001, 2002, 2003};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter number of " << item[i] << " " << year[j] << ": ";
            cin >> num[i][j];
        }
    }

    cout << "Sales total\n==============================\nNo   Item          2001   2002   2003\n";
    cout << "==============================\n";

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << "    " << item[i] << "   ";
        for (int j = 0; j < 3; j++) {
            cout << num[i][j] << "     ";
        }
        cout << "\n";
    }
    cout << "==============================\n";

    return 0;
}

