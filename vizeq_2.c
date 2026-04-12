#include <stdio.h>

// N: Çarpanlarına ayrılacak sayı
// bolucu: Sayıyı bölmeyi deneyeceğimiz sayılar (başlangıçta 2'den başlar)

void asalCarpanBul(int N, int bolucu) {
    
    if(!(N%bolucu) && N!=1){
        printf("%d  ",bolucu);
        asalCarpanBul(N/bolucu,bolucu);
    }
    else if((N%bolucu) && N!=1){
        asalCarpanBul(N,bolucu+1);
    }else
        return;
}

int main() {
    int sayi = 145;
    printf("%d sayisinin asal carpanlari: ", sayi);
    // İlk bolucu her zaman en küçük asal sayı olan 2'dir.
    asalCarpanBul(sayi, 2); 
    printf("\n");
    
    return 0;
}