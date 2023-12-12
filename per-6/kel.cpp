#include<iostream>
using namespace std;

int main() {
    int n;
  
    cout << "Masukkan jumlah bilangan yang ingin ditampilkan: ";
    cin >> n;

    int first = 0, second = 1;
    cout << "Deret bilangan: " << first << " " << second << " ";

    int i = 2;
    while (i < n) {
        int next = first + second;
        cout << next << " ";
        first = second;
        second = next;
        ++i;
    }

    cout << endl;
}
