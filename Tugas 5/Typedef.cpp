#include <iostream>

using namespace std;

struct orang {

int a;

int b;

};

typedef struct orang pegawai;

int main(){

pegawai negeri = {100,135};

cout << "nilai a = " << negeri.a << endl;

cout << "nilai b = " << negeri.b <<endl;

}
