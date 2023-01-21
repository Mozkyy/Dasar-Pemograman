//Judul : Input 5 Bilangan Serta Urutkan Dari Terbesar ke Terkecil
//Author : Muhammad Za'im Muzakki
//07 Oktober 2022

#include <iostream>
using namespace std;

//kamus
int a, b, c, d, e;


//deskripsi
main()
{
    cout << " A. Input Angka Pertama = ";
    cin >> a;
    cout << " B. Input Angka Kedua = ";
    cin >> b;
    cout << " C. Input Angka Ketiga = ";
    cin >> c;
    cout << " D. Input Angka Keempat = ";
    cin >> d;
    cout << " E. Input Angka Kelima = ";
    cin >> e;
    cout << " ====================================================" << endl;

    //1
    if (a>b && b>c && c>d && d>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, b, c, d, e";
    }
    else
    //2
    if (a>b && b>c && c>e && e>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, b, c, e, d";
    }
    else
    //3
    if (a>b && b>d && d>c && c>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, b, d, c, e";
    }
    else
    //4
    if (a>b && b>d && d>e && e>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, b, d, e, c";
    }
    else
    //5
    if (a>b && b>e && e>c && c>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, b, e, c, d";
    }
    else
    //6
    if (a>b && b>e && e>d && d>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, b, e, d, c";
    }
    else
    //7
    if (a>c && c>b && b>d && d>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, b, c, e, d";
    }
    else
    //8
    if (a>c && c>b && b>e && e>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, c, b, e, d";
    }
    else
    //9
    if (a>c && c>d && d>b && b>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, c, d, b, e";
    }
    else
    //10
    if (a>b && b>c && c>e && e>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, b, c, e, d";
    }
    else
    //11
    if (a>c && c>e && e>b && b>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, c, e, b, d";
    }
    else
    //12
    if (a>c && c>e && e>d && d>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, c, e, d, b";
    }
    else
    //13
    if (a>d && d>b && b>c && c>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, d, b, c, e";
    }
    else
    //14
    if (a>d && d>b && b>e && e>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, d, b, e, c";
    }
    else
    //15
    if (a>d && d>c && c>b && b>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, d, c, b, e";
    }
    else
    //16
    if (a>d && d>c && c>e && e>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, d, c, e, b";
    }
    else
    //17
    if (a>d && d>e && e>b && b>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, d, e, b, c";
    }
    else
    //18
    if (a>d && d>e && e>c && c>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, d, e, c, b";
    }
    else
    //19
    if (a>e && e>b && b>c && c>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, e, b, c, d";
    }
    else
    //20
    if (a>e && e>b && b>d && d>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, e, b, d, c";
    }
    else
    //21
    if (a>e && e>c && c>b && b>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, e, c, b, d";
    }
    else
    //22
    if (a>e && e>c && c>d && d>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, e, c, d, b";
    }
    else
    //23
    if (a>e && e>d && d>b && b>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, e, d, b, c";
    }
    else
    //24
    if (a>e && e>d && d>c && c>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " a, e, d, c, b";
    }
    else
    //25
    if (b>a && a>c && c>d && d>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, a, c, d, e";
    }
    else
    //26
    if (b>a && a>c && c>e && e>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, a, c, e, d";
    }
    else
    //27
    if (b>a && a>d && d>c && c>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, a, d, c, e";
    }
    else
    //28
    if (b>a && a>d && d>e && e>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, a, d, e, c";
    }
    else
    //29
    if (b>a && a>e && e>c && c>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, a, e, c, d";
    }
    else
    //30
    if (b>a && a>e && e>d && d>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, a, e, d, c";
    }
    else
    //31
    if (b>c && c>a && a>d && d>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, c, a, d, e";
    }
    else
    //32
    if (b>c && c>a && a>e && e>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, c, a, e, d";
    }
    else
    //33
    if (b>c && c>d && d>a && a>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, c, d, a, e";
    }
    else
    //34
    if (b>c && c>d && d>e && e>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, c, d, e, a";
    }
    else
    //35
    if (b>c && c>e && e>a && a>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, c, e, a, d";
    }
    else
    //36
    if (b>c && c>e && e>d && d>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, c, e, d, a";
    }
    else
    //37
    if (b>d && d>a && a>c && c>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, d, a, c, e";
    }
    else
    //38
    if (b>d && d>a && a>e && e>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, d, a, e, c";
    }
    else
    //39
    if (b>d && d>c && c>a && a>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, d, c, a, e";
    }
    else
    //40
    if (b>d && d>c && c>e && e>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, d, c, e, a";
    }
    else
    //41
    if (b>d && d>e && e>a && a>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, d, e, a, c";
    }
    else
    //42
    if (b>d && d>e && e>c && c>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, d, e, c, a";
    }
    else
    //43
    if (b>e && e>a && a>c && c>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, e, a, c, d";
    }
    else
    //44
    if (b>e && e>a && a>d && d>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, e, a, d, c";
    }
    else
    //45
    if (b>e && e>c && c>a && a>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, e, c, a, d";
    }
    else
    //46
    if (b>e && e>c && c>d && d>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, e, c, d, a";
    }
    else
    //47
    if (b>e && e>d && d>a && a>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, e, d, a, c";
    }
    else
    //48
    if (b>e && e>d && d>c && c>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " b, e, d, c, a";
    }
    else
    //49
    if (c>a && a>b && b>d && d>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, a, b, d, e";
    }
    else
    //50
    if (c>a && a>b && b>e && e>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, a, b, e, d";
    }
    else
    //51
    if (c>a && a>d && d>b && b>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, a, d, b, e";
    }
    else
    //52
    if (c>a && a>d && d>e && e>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, a, d, e, p ";
    }
    else
    //53
    if (c>a && a>e && e>b && b>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, a, e, b, d";
    }
    else
    //54
    if (c>a && a>e && e>d && d>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, a, e, d, b";
    }
    else
    //55
    if (c>b && b>a && a>d && d>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, b, a, d, e";
    }
    else
    //56
    if (c>b && b>a && a>e && e>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, b, a, e, d";
    }
    else
    //57
    if (c>b && b>d && d>a && a>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, b, d, a, e";
    }
    else
    //58
    if (c>b && b>d && d>e && e>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, b, d, e, a";
    }
    else
    //59
    if (c>b && b>e && e>a && a>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, b, e, a, d";
    }
    else
    //60
    if (c>b && b>e && e>d && d>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, b, e, d, a";
    }
    else
    //61
    if (c>d && d>a && a>b && b>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, d, b, a, e";
    }
    else
    //62
    if (c>d && d>a && a>b && b>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, d, a, b, e";
    }
    else
    //63
    if (c>d && d>b && b>a && a>e)
    {
        cout << "Maka urutan dari yang Terbesar Adalah " << " c, d, b, a, e";
    }
    else
    //64
    if (c>d && d>b && b>e && e>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, d, b, e, a";
    }
    else
    //65
    if (c>d && d>e && e>a && a>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, d, e, a, b";
    }
    else
    //66
    if (c>d && d>e && e>b && b>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, d, e, b, a";
    }
    else
    //67
    if (c>e && e>a && a>b && b>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, e, a, b, d";
    }
    else
    //68
    if (c>e && e>a && a>d && d>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, e, a, d, b";
    }
    else
    //69
    if (c>e && e>b && b>a && a>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, e, b, a, d";
    }
    else
    //70
    if (c>e && e>b && b>d && d>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, e, b, d, a";
    }
    else
    //71
    if (c>e && e>d && d>a && a>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, e, d, a, b";
    }
    else
    //72
    if (c>e && e>d && d>b && b>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " c, e, d, b, a";
    }
    else
    //73
    if (d>a && a>b && b>c && c>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, a, b, c, e";
    }
    else
    //74
    if (d>a && a>b && b>e && e>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, a, b, e, c";
    }
    else
    //75
    if (d>a && a>c && c>b && b>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, a, c, b, e";
    }
    else
    //76
    if (d>a && a>c && c>e && e>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, a, c, e, b";
    }
    else
    //77
    if (d>a && a>e && e>b && b>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, a, e, b, c";
    }
    else
    //78
    if (d>a && a>e && e>c && c>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, a, e, c, b";
    }
    else
    //79
    if (d>b && b>a && a>c && c>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, b, a, c, e";
    }
    else
    //80
    if (d>b && b>a && a>e && e>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, b, a, e, c";
    }
    else
    //81
    if (d>b && b>c && c>a && a>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, b, c, a, e";
    }
    else
    //82
    if (d>b && b>c && c>e && e>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, b, c, e, a";
    }
    else
    //83
    if (d>b && b>e && e>a && a>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, b, e, a, c";
    }
    else
    //84
    if (d>b && b>e && e>c && c>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, b, e, c, a";
    }
    else
    //85
    if (d>c && c>a && a>b && b>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, c, a, b, e";
    }
    else
    //86
    if (d>c && c>a && a>e && e>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, c, a, e, b";
    }
    else
    //87
    if (d>c && c>b && b>a && a>e)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, c, b, a, e";
    }
    else
    //88
    if (d>c && c>b && b>e && e>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, c, b, e, a";
    }
    else
    //89
    if (d>c && c>e && e>a && a>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, c, e, a, b";
    }
    else
    //90
    if (d>c && c>e && e>b && b>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, c, e, b, a";
    }
    else
    //91
    if (d>e && e>a && a>b && b>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, e, a, b, c";
    }
    else
    //92
    if (d>e && e>a && a>c && c>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, e, a, c, b";
    }
    else
    //93
    if (d>e && e>b && b>a && a>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, e, b, a, c";
    }
    else
    //94
    if (d>e && e>b && b>c && c>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, e, b, c, a";
    }
    else
    //95
    if (d>e && e>c && c>a && a>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, e, c, a, b";
    }
    else
    //96
    if (d>e && e>c && c>b && b>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " d, e, c, b, a";
    }
    else
    //97
    if (e>a && a>b && b>c && c>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, a, b, c, d";
    }
    else
    //98
    if (e>a && a>b && b>d && d>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, a, b, d, c";
    }
    else
    //99
    if (e>a && a>c && c>b && b>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, a, c, b, d";
    }
    else
    //100
    if (e>a && a>c && c>d && d>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, a, c, d, b";
    }
    else
    //101
    if (e>a && a>d && d>b && b>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, a, d, b, c";
    }
    else
    //102
    if (e>a && a>d && d>c && c>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, a, d, c, b";
    }
    else
    //103
    if (e>b && b>a && a>c && c>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, b, a, c, d";
    }
    else
    //104
    if (e>b && b>a && a>d && d>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, b, a, d, c";
    }
    else
    //105
    if (e>b && b>c && c>a && a>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, b, c, a, d";
    }
    else
    //106
    if (e>b && b>c && c>d && d>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, b, c, d, a";
    }
    else
    //107
    if (e>b && b>d && d>a && a>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, b, d, a, c";
    }
    else
    //108
    if (e>b && b>d && d>c && c>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, b, d, c, a";
    }
    else
    //109
    if (e>c && c>a && a>b && b>d)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, c, a, b, d";
    }
    else
    //110
    if (e>c && c>a && a>d && d>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, c, a, d, b";
    }
    else
    //111
    if (e>c && c>b && b>a && a>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, c, b, a, d";
    }
    else
    //112
    if (e>c && c>b && b>d && d>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, c, b, d, a";
    }
    else
    //113
    if (e>c && c>d && d>a && a>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, c, d, a, b";
    }
    else
    //114
    if (e>c && c>d && d>b && b>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, c, d, b, a";
    }
    else
    //115
    if (e>d && d>a && a>b && b>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, d, a, b, c";
    }
    else
    //116
    if (e>d && d>a && a>c && c>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, d, a, c, b";
    }
    else
    //117
    if (e>d && d>b && b>a && a>c)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, d, b, a, c";
    }
    else
    //118
    if (e>d && d>b && b>c && c>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, d, b, c, a";
    }
    else
    //119
    if (e>d && d>c && c>a && a>b)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, d, c, a, b";
    }
    else
    //120
    if (e>d && d>c && c>b && b>a)
    {
        cout << " Maka urutan dari yang Terbesar Adalah " << " e, d, c, b, a";
    }
    return 0;
}
