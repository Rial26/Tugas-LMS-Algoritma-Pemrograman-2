#include <iostream>
//deklarasi struct
struct mhs { //deklarasi tipe struct

char nama[30];
long long telp ;
float tgl_lahir;

} ;
void display(struct mhs *st)
{
	
std::cout << "-----------------" ;
std::cout << "\nData Tersimpan : " ;
std::cout << "\n-----------------" ;
std::cout << "\nNo. Telp : " << st->telp ;
std::cout << "\nNama : " << st->nama ;
std::cout << "\nTanggal Lahir : " << st->tgl_lahir ;

}
int main()
{

mhs data_mahasiswa;
std::cout <<"No. Telp : "; std::cin>>data_mahasiswa.telp;
std::cout <<"Nama : "; std::cin>>data_mahasiswa.nama;
std::cout <<"Tanggal Lahir : ";std::cin>>data_mahasiswa.tgl_lahir;
display(&data_mahasiswa);
return 0;

}
