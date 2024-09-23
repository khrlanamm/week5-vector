#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    vector<int> inputArray(n);
    cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> inputArray[i];
    }

    // Membalik urutan array
    vector<int> reversedArray(n);
    for (int i = 0; i < n; i++) {
        reversedArray[i] = inputArray[n - 1 - i];
    }

    // Mencetak array yang sudah dibalik
    cout << "Array setelah dibalik: ";
    cout<<"[";
    for (int i = 0; i < n; i++) {
        cout << reversedArray[i];
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout<<"]";
}
