#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    char nm[20];
    char alm[100];
    char tmplhr[30];
    char tgllhr[30];
    char npm[40];
    char jrs[30];
    char jk[40];
    char nh[40];
    char rr[40];
    {
    cout<<"\tPROGRAM DATA DIRI MAHASISWA "<<endl;
    cout<<"*****************************"<<endl;
    cout <<" Nama Lengkap\t\t : ";
    cin.getline(nm, sizeof(nm));
    cout <<" Alamat\t\t : ";
    cin.getline(alm, sizeof(alm));
     cout <<" Tempat Lahir\t : ";
    cin.getline(tmplhr, sizeof(tmplhr));
    cout <<" Tanggal Lahir\t : ";
    cin.getline(tgllhr, sizeof(tgllhr));
    cout <<" NIM\t\t : ";
    cin.getline(npm, sizeof(npm));
    cout <<" Jurusan\t : ";
    cin.getline(jrs, sizeof(jrs));
    cout <<" Jenis Kelamin\t : ";
    cin.getline(jk, sizeof(jk));
    cout <<" Nilai Harian\t : ";
    cin.getline(nh, sizeof(nh));
    cout <<" Rata-Rata \t\t : ";
    cin.getline(rr, sizeof(rr));

    cout<<endl;
    cout<<"***************************************"<<endl;
    cout<<" Data Pribadi Saya"<< endl;
    cout <<" Nama Anda\t\t : "<< nm << endl;
    cout <<" Alamat Anda\t\t : "<< alm << endl;
    cout <<" Tempat Lahir Anda\t : "<< tmplhr << endl;
    cout <<" Tanggal Lahir Anda\t : "<< tgllhr << endl;
    cout <<" NIM Anda\t\t : "<< npm << endl;
    cout <<" Jurusan\t\t : "<< jrs << endl;
    cout <<" Jenis Kelmin Anda\t : "<< jk << endl;
    cout <<" Nilai Harian\t\t : "<< nh << endl;
    cout <<" Rata-Rata\t\t : "<< rr << endl;

    }
}
    getch();
}
