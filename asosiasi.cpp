#include <iostream>
#include <vector>
using namespace std;

class dokter;
class Pasien
{
public:
    string nama;
    vector<dokter *> daftar_dokter;
    Pasien(string pNama) : nama(pNama)
    {
        cout << "Pasien \"" << nama << "\" ada\n";
    }
    ~Pasien()
    {
        cout << "Pasien \"" << nama << "\" tidak ada\n";
    }
    void tambahDokter(dokter *);
    void cetakdokter();
};

class dokter
{
public:
    string nama;
    vector<Pasien *> daftar_pasien;
    dokter(string pNama) : nama(pNama)
    {
        cout << "Dokter \"" << nama << "\" ada\n";
    }
    ~dokter()
    {
        cout << "Dokter \"" << nama << "\" tidak ada\n";
    }
    void tambahPasien(Pasien *);
    void cetakPasien();
};