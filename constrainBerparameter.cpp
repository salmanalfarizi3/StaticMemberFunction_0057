#include <iostream>
#include <string>
using namespace std;
class mahasiswa{
    public:
    //Construktor dengan parameter
    mahasiswa(int nim, string nama);

};
//definisi Construktor dg parameter

mahasiswa::mahasiswa(int nim, string nama){
    cout<< "Construktor Dengan Parameter Terpanggil"<< endl;
    cout << "NIM :"<< nim << endl;
    cout << "Nama : "<<nama<<endl;

}
