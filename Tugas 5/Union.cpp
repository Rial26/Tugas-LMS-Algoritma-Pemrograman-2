#include <iostream>

using namespace std;

union orang{

int gaji;

int umur;

};

int main(){
union orang pegawai;

pegawai.gaji = 1500000;

pegawai.umur = 21;

cout <<"gaji pegawai = " << pegawai.gaji << endl;

cout <<"umur pegawai = " << pegawai.umur <<endl;

}
