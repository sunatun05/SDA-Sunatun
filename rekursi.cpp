#include <iostream>

using namespace std;

// Fungsi rekursif untuk menghitung faktorial
long long int hitungFactorial(int input) {
  if (input < 0) {
    cout << "Tak terdefinisi. \n\nHarap masukkan angka non-negatif/bilangan bulat." << endl;
    return -1;  // Mengembalikan nilai -1 untuk menandakan input tidak valid
  } else if (input == 0) {
    return 1;  // Basis kasus: jika input = 0, maka hasil faktorial adalah 1
  } else {
    return input * hitungFactorial(input - 1);  // Rekursif: mengalikan input dengan faktorial dari input - 1
  }
}

int main() {
  cout << "##  Program Rekursi C++ Hitung Faktorial ##" << endl;
  cout << "===========================================" << endl;
  cout << endl;

  int angka;

  cout << "Input angka: ";
  cin >> angka;

  long long int hasil = hitungFactorial(angka);
  if (hasil != -1) {
    cout << angka << "! = " << hasil;  // Memanggil fungsi hitungFactorial untuk menghitung faktorial angka
  }
  cout << endl;

  return 0;
}

