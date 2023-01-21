//Judul : Program Deteksi Penyakit
// Muhammad Za'im Muzakki
// 07 Oktober 2022

#include <iostream>
#include <string>
using namespace std;

//kamus

    int a,b,c,d,e;


    string pilih;
    string ulang;

//deskripsi

int main()
{
    do
    {

        cout<<"Program deteksi dini penyakit dengan c++"<<endl;
        cout<<" Berikut contoh gejala yang mungkin anda rasakan : "<<endl;
        cout<<"1. Batuk"<<endl;
        cout<<"2. Flu"<<endl;
        cout<<"3. Pusing"<<endl;
        cout<<"4. Cacar"<<endl;
        cout<<"5. Sakit perut"<<endl;

        cout<<""<<endl;
        cout<<"Input gejala penyakit yang anda alami sesuai dengan yang diatas : "<<endl;
        cout<<"---------------------------------------------------------------------------"<<endl;

        getline(cin,pilih);

         if(pilih=="Batuk")
        {
            cout<<"Jika anda batuk, "<<"kemungkinan diagnosanya adalah :"<<endl;
            cout<<"1. Batuk berdahak"<<endl;
            cout<<"2. Batuk kering"<<endl;
            cout<<"3. Covid-19"<<endl;

        }

        else    if(pilih=="Flu")
        {
            cout<<"Jika anda merasa flu, "<<"kemungkinan diagnosanya adalah :"<<endl;
            cout<<"1. FLu biasa"<<endl;
            cout<<"2. Flu burung"<<endl;
            cout<<"3. Flu ayam"<<endl;

        }

        else    if(pilih=="Pusing")
        {
            cout<<"Jika anda merasa pusing, "<<"kemungkinan diagnosanya adalah :"<<endl;
            cout<<"1. Migrain"<<endl;
            cout<<"2. Terlalu banyak pikiran"<<endl;
            cout<<"3. Kecapekan"<<endl;

        }

        else    if(pilih=="Cacar")
        {
            cout<<"Jika anda muncul cacar di kulit anda, "<<"kemungkinan diagnosanya adalah :"<<endl;
            cout<<"1. Cacar air"<<endl;
            cout<<"2. Cacar monyet"<<endl;
            cout<<"3. Cacar biasa"<<endl;

        }

             else    if(pilih=="Sakit perut")
        {
            cout<<"Jika perut anda sakit, "<<"kemungkinan diagnosanya adalah :"<<endl;
            cout<<"1. Ada masalah pada lambung"<<endl;
            cout<<"2. Ada masalah pada usus"<<endl;
            cout<<"3. Busung lapar"<<endl;

        }

            else
                {
                    cout<<"Anda salah input, tolong cek besar kecil hurufnya ya"<<endl;
                    cout<<"---------------------------------------------------------------------------"<<endl;
                }
        cout<<"Adakah gejala lain yang anda rasakan ? (y/t)"<<endl;
        getline(cin,ulang);
        cout<<"---------------------------------------------------------------------------"<<endl;
    }

        while(ulang!="t") ;

        cout<<"Selamat berobat"<<endl;
        cout<<"Semoga lekas sembuh :)"<<endl;
    return 0;
}
