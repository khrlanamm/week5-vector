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

    // Hasil yang diharapkan
    vector<string> expectedResults = {
        "1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz",
        "11", "Fizz", "13", "14", "FizzBuzz", "16", "17", "Fizz", "19", "Buzz",
        "Fizz", "22", "23", "Fizz", "Buzz", "26", "Fizz", "28", "29", "FizzBuzz",
        "31", "32", "Fizz", "34", "Buzz", "Fizz", "37", "38", "Fizz", "Buzz",
        "41", "Fizz", "43", "44", "FizzBuzz", "46", "47", "Fizz", "49", "Buzz",
        "Fizz", "52", "53", "Fizz", "Buzz", "56", "Fizz", "58", "59", "FizzBuzz",
        "61", "62", "Fizz", "64", "Buzz", "Fizz", "67", "68", "Fizz", "Buzz",
        "71", "Fizz", "73", "74", "FizzBuzz", "76", "77", "Fizz", "79", "Buzz",
        "Fizz", "82", "83", "Fizz", "Buzz", "86", "Fizz", "88", "89", "FizzBuzz",
        "91", "92", "Fizz", "94", "Buzz", "Fizz", "97", "98", "Fizz", "Buzz"
    };

    bool testPassed = false;
    if (expectedResults == fizzBuzzResults) testPassed = true;

    // Output hasil pengujian
    if (testPassed) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
}
