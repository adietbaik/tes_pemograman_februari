#include <stdio.h>
int main() {
    int J = 4;
    int K = 5;
    int hasil = 0;
    int i = 0;

  
    while (i < K) {
        hasil += J;
        i++;
    }

 
    printf("Hasil perkalian: %d\n", hasil);

    return hasil;
}
