//Preprocessor Error
#include <stdio.h>
#include <limits.h>

#define MILLISECONDS(age) (age * 333 * 22 * 77 * 99 * 9999)

int main(){

   int age;

   #if INT_MAX < MILLISECONDS(12)
   #error Integer size tidak bisa menyimpan umur dalam miliseconds
   #endif

   age = MILLISECONDS(12);

   printf("Umur Anda Dalam Milisecond Adalah %d\n", age);

}
