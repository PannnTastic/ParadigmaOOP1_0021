#include <iostream>
#include <string>

class mahasiswa {
    private : 
    const int id;
    string nama;
    float nilai;

    public :
        mahasiswa(int pid, string pnama, float pnilai) : id(pid), nama(pnama), nilai(pnilai){
            
        }
}