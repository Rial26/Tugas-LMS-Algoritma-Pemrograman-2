#include <iostream>

using namespace std;

struct orang{

char nama[30];

int umur;

};

int main(){

struct orang pegawai = {"Rial",19};

struct orang *data;

data = &pegawai;

cout << data->nama <<endl << data->umur;

}
