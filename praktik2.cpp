#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  float alas, tinggi, luas;

  cout << "Masukkan alas: ";
  cin >> alas;

  cout << "Masukkan tinggi: ";
  cin >> tinggi;

  luas = 0.5 * alas * tinggi;

  cout << "Luas segitiga: " << luas << endl;

  return 0;
}