#include <iostream>
using namespace::std;
double masukkan(string nilai){
double n;
cout<<"masukkan Nilai "<<nilai<<" : "; cin>>n;
return n;
}

void grade (double n){
if     (n>81)
    {cout<<" (A)";}
else if(n>61)
    {cout<<" (B)";}
else if(n>41)
    {cout<<" (C)";}
else if(n>21)
    {cout<<" (D)";}
else
    {cout<<"(E)";}
}

struct lihat_nilai{
double uts, uas, tugas, absen;};

main(){
float n;

lihat_nilai akhir;

akhir.uts = masukkan("UTS");
akhir.uas = masukkan("UAS");
akhir.tugas = masukkan("TUGAS");
akhir.absen = masukkan("KEHADIRAN");
n=(akhir.uts*20/100)+(akhir.uas*30/100)+(akhir.tugas*35/100)+(akhir.absen*15/100);
cout<<"Hasil Nilai Akhir : " <<n<<endl;
cout<<"Grade Kamu Adalah : ";grade(n);
}
