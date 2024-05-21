#include <iostream>
#include <vector>
using namespace std;

class dokter;
class Pasien { 
public:
string nama;
vector<dokter*> daftar_dokter;
Pasien(string pNama)  : nama(pNama) {
cout << "Pasien \"" << nama << "\" ada\n";
}
~Pasien() {
cout << "Pasien \"" << nama << "\" tidak ada\n";
}
void tambahDokter(dokter*);
void cetakPasien();
};