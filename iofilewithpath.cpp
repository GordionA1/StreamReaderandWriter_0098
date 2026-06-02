#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //deklarasi variabel baris dan NamaFile
    string baris, NamaFile;

    //membuat input untuk menangkap nama file
    cout << "Masukkan nama file : ";
    cin >> NamaFile;
    
    //membuat file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file dengan ekstensi txt
    outfile.open(NamaFile + ".txt", ios::out);

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //menutup file apabila telah selesai di tulis
    outfile.close();

    //membuka file dalam mode membaca
    ifstream infile;

    //menunjuk ke sebuah file dengan ekstensi .txt
    infile.open(NamaFile + ".txt", ios::in);
}
