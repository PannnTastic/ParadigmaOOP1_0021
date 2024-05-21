#ifndef MANUSIA_H
#define MANUSIA_H

using namespace std;

class Manusia {
    public : 
    string nama;
    jantung varjantung;

    Manusia(string pnama) : nama (pnama){
        cout << nama << " hidup\n";
    }
    ~Manusia(){
        cout << nama << " mati\n"
    }
};

#endif