#include <stdio.h>



int rakamSil(int N, int silinecekRakam, int sonuc, int carpan) {
    if((N%10 == silinecekRakam) && N!=0)
        return rakamSil(N/10,silinecekRakam,sonuc,carpan);
    else if(N>0)
        return rakamSil(N/10,silinecekRakam, sonuc + (N%10) * carpan,carpan*10);
    else
        return sonuc;
    
}

int main() {
    int sayi = 48056;//458
    int istenmeyen = 0;
    
    // İlk çağrı: sonuc=0 ve carpan=1 olarak başlar.
    printf("Yeni Sayi: %d\n", rakamSil(sayi, istenmeyen, 0, 1)); 
    return 0;
}