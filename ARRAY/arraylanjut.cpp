//judul: array lanjut
// 21 november 2022
// Della Sabrina

#include <iostream>
using namespace std;

//kamus:
int TabUmur[5];
float ArrBeratBadan[5];
int x;
int y;
int muzakki;

//diskirpsi
int main()
{
    cout << "Menyisipkan Data Umur" << endl;
    TabUmur[0]=15;
    TabUmur[1]=20;
    TabUmur[2]=25;
    TabUmur[3]=35;
    TabUmur[4]=45;
    TabUmur[5]=55;

    //looping data umur
    x=0;
    do{
        cout << TabUmur[x] << endl;
        x=x+1;
    }
    while (x<5);


    cout << "Menyisipkan Data Berat Badan" << endl;
    ArrBeratBadan[0]=35.5;
    ArrBeratBadan[1]=40;
    ArrBeratBadan[2]=45.5;
    ArrBeratBadan[3]=50;
    ArrBeratBadan[4]=55.5;
    ArrBeratBadan[5]=60;

    //looping data berat badan
    y=0;
    do{
        cout << ArrBeratBadan[y] << endl;
        y=y+1;
    }
    while (y<5);



    cout << "Muzakki" << endl;
    //jumlah isi tabel (kurang tau maksut tablength)
    Sumini;
    y=1;
    do{
        cout << TabUmur[y] << endl;
        muzakki=muzakki+TabUmur[y];
        y=y+1;
    }
    while(x<5);

}
