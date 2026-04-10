#include<stdio.h>
int main(){

   // int n = 1;
    int numero = 7;
   /* for (int i = 0; i < 11; i+=n) {
        printf(" %d x %d = %d\n", i, numero, i  * numero);
    }*/
int i = 1;
    while( i <11){
        int tabuada = numero * i;
        printf(" %d x %d = %d\n", numero, i, tabuada);
        i++;

    }
        return 0;
}

