#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Membuat vector dengan ukuran 100 untuk menyimpan hasil FizzBuzz
    vector<string> fizzBuzzResults(100);

    for (int i = 0; i < 100; i++) {
        int number = i+1;
        if (number % 3 == 0 && number % 5 == 0) {
            fizzBuzzResults[i] = "FizzBuzz";  // Kelipatan 3 dan 5
        } else if (number % 3 == 0) {
            fizzBuzzResults[i] = "Fizz";      // Kelipatan 3
        } else if (number % 5 == 0) {
            fizzBuzzResults[i] = "Buzz";      // Kelipatan 5
        } else {
            fizzBuzzResults[i] = to_string(number); // Angka biasa
        }
    }

    // Output hasil dari vector
    for (int i = 0; i < 100; i++) {
        cout << fizzBuzzResults[i] << endl;
    }
}
