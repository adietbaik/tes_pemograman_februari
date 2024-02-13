#include <stdio.h>

int main() {
  
   
    //harga emas
    int rubby = 1000000;
    int topaz = 1250000;
    int permata = 3000000;
//jumlah emas
    int j_rubby = 5;
    int j_topaz = 3;
    int j_permata = 1;
    int total_pendapatan=0 ;
printf("TOKO ANTING KAWANLAMAJEWEL\n");
 printf("Total jenis emas rubby : %d\n", rubby * j_rubby);
  printf("Total jenis emas topaz : %d\n", topaz * j_topaz);
   printf("Total jenis emas rubby : %d\n", permata * j_permata);
    total_pendapatan = ( rubby * j_rubby) +(topaz * j_topaz) + (permata * j_permata);
 printf("Total maksimum pendapatan: %d\n", total_pendapatan);

    return total_pendapatan;
}
