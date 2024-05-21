#include <iostream>
#include <string>
using namespace std;

class orang
{
public:
    string nama;
    orang(string pNama) : nama(pNama)
    {
        cout << "orang dibuat\n"
             << endl;
    }
    ~orang()
    {
        cout << "orang dihapus\n"
             << endl;
    }
    int jumlah(int a, int b)
    {
        return a + b;
    }
};

class peLajar : public orang
{
public:
    string sekolah;
    peLajar(string pNama, string pSekolah) : orang(pNama), sekolah(pSekolah)
    {
        cout << "pelajar dibuat\n"
             << endl;
    }
    ~peLajar()
    {
        cout << "pelajar dihapus\n"
             << endl;
    }
    string perkenalan()
    {
        return "Hallo, nama saya " + nama + " dari sekolah " + sekolah + "\n";
    }
};

