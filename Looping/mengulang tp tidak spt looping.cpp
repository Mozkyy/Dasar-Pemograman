// judul : contoh mengulang seperti loop
// tapi bukan loop
// penerapan kasus bertanya y/t yoporak
// memo : Muhammad Za'im Muzakki 2 okt 2022
// kamus
#include <iostream>
using namespace std;
char yt;
//diskripsi
int main()
{

     awal:
     cout << "uji coba ulang Ya atau Tidak" << endl;
     cout<<endl<<endl;
     cout<<"Data Lagi? ketik (y/t) ";
     cin>>yt;
     cout<<endl;
     if(yt=='Y'||yt=='y')
     {
     goto awal;
     }
     // ----------------------

     if(yt=='T'||yt=='t')
     {
     goto akhir;
     }
     akhir:
     return 0;
}

