#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  int anak;
  double gaji;
  string nama;

  cout << "Masukkan nama: ";
  getline(cin, nama);

  cout << "Masukkan jumlah anak: ";
  cin >> anak;

  cout << "Masukkan gaji: ";
  cin >> gaji;

  cout << "Nama: " << nama << endl;
  cout << "Jumlah anak: " << anak << endl;
  cout << "Gaji: " << gaji << endl;

  return 0;
}