#include <iostream>
using namespace std;

int main()
{  // begin
      // numeric nPanjang, nLebar, nLuas
      int nPanjang, nLebar, nLuas;
      // display 'Masukkan Panjang = '
      cout << "Masukkan Panjang = ";
      // accept nPanjang
      cin >> nPanjang;
      // diplay 'Masukkan Lebar'
      cout << "Masukkan Lebar = ";
      // accept nLebar
      cin >> nLebar;
      // compute nLuas = nPanjang * nLuas
      nLuas = nPanjang * nLebar;
      // display 'Luasnya adalah = ' + nLuas
      cout << "Luasnya adalah = " << nLuas << endl;
}  // end