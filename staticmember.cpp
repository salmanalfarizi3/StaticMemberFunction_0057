#include <iostream>
using namespace std;

class Mahasiswa { //membuat class mahasiswa
public:
    static int nim; //deklarasi variabel static yaitu variabel nim
    //deklarasi variabel member
    int id;
    string nama;

    //deklarasi prosedur setID() dan printAll()
    void setID();
    void printAll();

    //pembuatan constructor Mahasiswa dengan parameter pnama
    Mahasiswa(string pnama) : nama(pnama) {
        setID();
    }
};

// Inisialisasi variabel static (di luar class)
int Mahasiswa::nim = 0;

void Mahasiswa::setID() {
    id = ++nim;
}

void Mahasiswa::printAll() {
    cout << "ID    = " << id << endl;
    cout << "Nama  = " << nama << endl;
    cout << endl;
}
