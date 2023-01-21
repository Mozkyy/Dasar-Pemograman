//judul : Array lanjutan
//MUHAMMAD ZAIM MUZAKKI
// mencari umur yg tertua dan mencari tau letak index suatu data

#include <iostream>
using namespace std;

//kamus
int tblUmur[5];
int posisi[5];
int Maximum, leght, sum, rata, x, y, z, caricari, banyak,w, m;
bool ketemu;

int main(int argc, char const *argv[])
{
    cout << "menyisipkan data umur\n";
    x=0;
    while (x < 5)
    {
        cin >> tblUmur[x];
        x++;
    }

    cout << "menampilkan data umur\n";
    x=0;
    while (x < 5)
    {
        y=x+1;
        cout << y << " . "<< tblUmur[x] << endl;
        x++;
    }

    // umur paling tua
    Maximum = tblUmur[0];
    z=0;
    while (z < 10)
    {
        if (tblUmur[z] > Maximum)
        {
            Maximum = tblUmur[z];
        }
        z++;
    }

    cout << "umur paling tua adalah = " << Maximum << endl;

    // pencarian array
    cout << "masukan yang ingin di cari = ";
    cin >> caricari;
    banyak=0;
    w=0;
    while (w<5)
    {
        if (tblUmur[w] == caricari)
        {
            ketemu = true;
            posisi[banyak] = w;
            banyak = banyak +1;
        }
        w++;
    }

    if (ketemu == true)
    {
        cout << "umur yang di cari " << caricari << " ditemukan sebanyak " << banyak << " di lokasi index ke ";
        m=0;
        while (m < banyak)
        {
            cout << posisi[m]<< ", ";
            m++;
        }

    } else {
        cout << "yang di cari gak ketemu ketemu";
    }



    return 0;
}
