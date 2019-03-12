#include<iostream>
#include<conio.h>
using namespace std;
main() {
cout<<endl;
cout<<"  Nama        : Handika Setianto "<<endl;
cout<<"  Kelas       : Informatika D "<<endl;
cout<<"  Mata Kuliah : Praktikum Struktur Data"<<endl;
cout<<endl;

int Nilai[20];
int i,N,angka,nilai;
cout<<"  Masukan Jumlah Nilai = ";cin>>N;

//membaca elemen array
for(i=0;i<N;i++){
cout<<"  Masukan Elemen Ke -"<<i<<" = ";cin>>Nilai[i]; }

//mencetak elemen arrray
cout<<"  Nilai Ujian       = ";
for(i=0;i<N;i++)
cout<<Nilai[i]<<" ";
cout<<endl<<endl;
cout<<"  Masukan Nilai Yang Dicari  = ";
cin>>nilai;
cout<<endl;

//melakukan pencarian
i=0;
do{
if(Nilai[i]==nilai)
angka=Nilai[i];
i++;}
while(i<N);
if(angka==nilai)
cout<<"  Nilai "<<nilai<<" Ditemukan";
else
cout<<"  Nilai "<<nilai<<" Tidak Ditemukan";
getch();
}
