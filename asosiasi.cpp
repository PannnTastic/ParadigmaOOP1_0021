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
    void cetakDokter();
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

void Pasien::tambahDokter(dokter *pdokter)
{
    daftar_dokter.push_back(pdokter);
}

void Pasien::cetakDokter()
{
    cout << "Daftar Dokter yang menangani pasien \"" << this->nama << "\":\n";
    for (auto& a : daftar_dokter)// auto digunakan dalam perulangan for untuk secara otomatis menentukan tipe data dri elemen yang diitera
    {
        cout << a->nama << ", ";
    }
    cout << endl;
}

void dokter::tambahPasien(Pasien *pPasien)
{
    pPasien->tambahDokter(this);
}

void dokter::cetakPasien()
{
    cout << "Daftar Pasien dari dokter "
            " << this->nama << "
            ":";
    for (auto a : daftar_pasien)
    {
        cout << a->nama << ", ";
    }
    cout << endl;
}

void dokter::cetakPasien()
{
    cout << "Daftar Pasien dari dokter "
            " << this->nama << "
            ":";
    for (auto a : daftar_pasien)
    {
        cout << a->nama << ", ";
    }
    cout << endl;
}