//Judul : Membuat Aplikasi Sistem Penilaian KRS KHS
//Author: Muhammad Za'im Muzakki
// Jumat 14 Oktober 2022
// Dasar Pemrograman


#include <iostream>

using namespace std;

//kamus
float getScore(float mid, float uas, float tugas)
{
    return mid + uas + tugas;
}

string getNHuruf(float score)
//diskripsi
{
    string nh;
    if (score > 85)
    {
        nh = "A";
    }
    else if (score > 80)
    {
        nh = "AB";
    }
    else if (score > 70)
    {
        nh = "B";
    }
    else if (score > 65)
    {
        nh = "BC";
    }
    else if (score > 60)
    {
        nh = "C";
    }
    else if (score > 50)
    {
        nh = "D";
    }
    else
    {
        nh = "E";
    }

    return nh;
}
//kamus
int main()
{
    string nama, nim, prodi;
    float mid1, uas1, tugas1, mid2, uas2, tugas2, mid3, uas3, tugas3, mid4, uas4, tugas4, mid5, uas5, tugas5, mid6, uas6, tugas6, mid7, uas7, tugas7, score1, score2, score3, score4, score5, score6, score7, ips;
    string nHuruf1, nHuruf2, nHuruf3, nHuruf4, nHuruf5, nHuruf6, nHuruf7;
    char ada;
//diskripsi
    while (true)
    {
        cout << "NIM\t:";
        cin >> nim;
        getchar();
        cout << "NAMA\t:";
        getline(cin, nama);

        if (nim == "A11")
        {
            prodi = "Teknik Informatika";
        }
        else if (nim == "A12")
        {
            prodi = "Sistem Informatika";
        }
        else if (nim == "B11")
        {
            prodi = "Manajemen";
        }
        else if (nim == "B12")
        {
            prodi = "Akutansi";
        }
        else
        {
            prodi = "Bukan Mahasiswa Fakultas Ilmu Komputer";
        }

        cout << "Nilai Mid 1\t: ";
        cin >> mid1;
        cout << "Nilai UAS 1\t: ";
        cin >> uas1;
        cout << "Nilai Tugas 1\t: ";
        cin >> tugas1;

        cout << "Nilai Mid 2\t: ";
        cin >> mid2;
        cout << "Nilai UAS 2\t: ";
        cin >> uas2;
        cout << "Nilai Tugas 2\t: ";
        cin >> tugas2;

        cout << "Nilai Mid 3\t: ";
        cin >> mid3;
        cout << "Nilai UAS 3\t: ";
        cin >> uas3;
        cout << "Nilai Tugas 3\t: ";
        cin >> tugas3;

        cout << "Nilai Mid 4\t: ";
        cin >> mid4;
        cout << "Nilai UAS 4\t: ";
        cin >> uas4;
        cout << "Nilai Tugas 4\t: ";
        cin >> tugas4;

        cout << "Nilai Mid 5\t: ";
        cin >> mid5;
        cout << "Nilai UAS 5\t: ";
        cin >> uas5;
        cout << "Nilai Tugas 5\t: ";
        cin >> tugas5;

        cout << "Nilai Mid 6\t: ";
        cin >> mid6;
        cout << "Nilai UAS 6\t: ";
        cin >> uas6;
        cout << "Nilai Tugas 6\t: ";
        cin >> tugas6;

        cout << "Nilai Mid 7\t: ";
        cin >> mid7;
        cout << "Nilai UAS 7\t: ";
        cin >> uas7;
        cout << "Nilai Tugas 7\t: ";
        cin >> tugas7;

        mid1 *= 0.3;
        uas1 *= 0.4;
        tugas1 *= 0.3;
        mid2 *= 0.3;
        uas2 *= 0.4;
        tugas2 *= 0.3;
        mid3 *= 0.3;
        uas3 *= 0.4;
        tugas3 *= 0.3;
        mid4 *= 0.3;
        uas4 *= 0.4;
        tugas4 *= 0.3;
        mid5 *= 0.3;
        uas5 *= 0.4;
        tugas5 *= 0.3;
        mid6 *= 0.3;
        uas6 *= 0.4;
        tugas6 *= 0.3;
        mid7 *= 0.3;
        uas7 *= 0.4;
        tugas7 *= 0.3;

        score1 = getScore(mid1, uas1, tugas1);
        score2 = getScore(mid2, uas2, tugas2);
        score3 = getScore(mid3, uas3, tugas3);
        score4 = getScore(mid4, uas4, tugas4);
        score5 = getScore(mid5, uas5, tugas5);
        score6 = getScore(mid6, uas6, tugas6);
        score7 = getScore(mid7, uas7, tugas7);

        nHuruf1 = getNHuruf(score1);
        nHuruf2 = getNHuruf(score2);
        nHuruf3 = getNHuruf(score3);
        nHuruf4 = getNHuruf(score4);
        nHuruf5 = getNHuruf(score5);
        nHuruf6 = getNHuruf(score6);
        nHuruf7 = getNHuruf(score7);

        ips = (score1 + score2 + score3 + score4 + score5 + score6 + score7) / 7;

        cout << "=========================SISTEM PENILAIAN===============================" << endl;
        cout << "====================UNIVERSITAS DIAN NUSWANTORO====================" << endl;

        cout << "NIM\t: " << nim << "\t\tPRODI : " << prodi << endl;
        cout << "NAMA\t: " << nama << endl;

        cout << "================================================================================" << endl;

        cout << "1. Matkul 1 : N. Mid : " << mid1 << " N. UAS : " << uas1 << " N. Tugas : " << tugas1 << " Score : " << score1 << " NHuruf : " << nHuruf1 << endl;
        cout << "2. Matkul 2 : N. Mid : " << mid2 << " N. UAS : " << uas2 << " N. Tugas : " << tugas2 << " Score : " << score2 << " NHuruf : " << nHuruf2 << endl;
        cout << "3. Matkul 3 : N. Mid : " << mid3 << " N. UAS : " << uas3 << " N. Tugas : " << tugas3 << " Score : " << score3 << " NHuruf : " << nHuruf3 << endl;
        cout << "4. Matkul 4 : N. Mid : " << mid4 << " N. UAS : " << uas4 << " N. Tugas : " << tugas4 << " Score : " << score4 << " NHuruf : " << nHuruf4 << endl;
        cout << "5. Matkul 5 : N. Mid : " << mid5 << " N. UAS : " << uas5 << " N. Tugas : " << tugas5 << " Score : " << score5 << " NHuruf : " << nHuruf5 << endl;
        cout << "6. Matkul 6 : N. Mid : " << mid6 << " N. UAS : " << uas6 << " N. Tugas : " << tugas6 << " Score : " << score6 << " NHuruf : " << nHuruf6 << endl;
        cout << "7. Matkul 7 : N. Mid : " << mid7 << " N. UAS : " << uas7 << " N. Tugas : " << tugas7 << " Score : " << score7 << " NHuruf : " << nHuruf7 << endl;
        cout << "===================================================================================================================" << endl;
        cout << "Index Prestasi Semester = " << ips << endl;
        cout << "Nilai A  = 85 - 100" << endl;
        cout << "Nilai AB = 80 - 84" << endl;
        cout << "Nilai B  = 70 - 79" << endl;
        cout << "Nilai BC = 65 - 69" << endl;
        cout << "Nilai C  = 60 - 64" << endl;
        cout << "Nilai D  = 50 - 59" << endl;
        cout << "Nilai E  = 0 - 49" << endl;
        cout << "===========================================Dosen Wali============================================" << endl;
        cout << "=================================YWILDANIL GHOZI M.Kom============================================" << endl;
        cout << "\n[cetak] preview hasil inputan --->" << endl;
        cout << "\n\n\nada mahasiswa lainnya [y/t] : ";
        cin >> ada;

        if (ada == 't')
        {
            break;
        }
    }

    return 0;
}
