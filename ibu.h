#ifndef IBU_H
#define IBU_H
#include <vector>

class ibu
{
public:
    string nama;
    vector<anak *> daftar_anak;

    ibu(string pNama) : nama(pNama)
    {
        cout << "Ibu \"" << nama << "\" ada\n ";
    }
    ~ibu()
    {
        cout << "Ibu \"" << nama << "\" tidak ada\n ";
    }

    void tambahAnak(anak *);
    void cetakAnak();
};

void ibu::tambahAnak(anak *pAnak)
{
    daftar_anak.push_back(pAnak);
}

void ibu::cetakAnak()
{
    cout << "Daftar Anak dari Ibu \"" << this->nama << "\" :\n ";
        
    //     for (auto &a : daftar_anak)
    // {
    //     cout << a->nama << "\n";
    // }
    
    for (vector<anak*> ::size_type i = 0; i < daftar_anak.size(); i++) //saya mengubah int menjadi seperti d samping d d karenakan ad pesan Warning dan saya mendapat solusi tersebut dri forum stackoverflow
    {
        cout << daftar_anak[i]->nama << endl;
    }
    cout << endl;
}

#endif