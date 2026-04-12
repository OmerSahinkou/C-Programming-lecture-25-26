#include <stdio.h>

// solPtr: Dizinin en başını gösteren işaretçi (pointer)
// sagPtr: Dizinin en sonunu gösteren işaretçi (pointer)

void tekCiftAyir(int *solPtr, int *sagPtr) {
    if((*solPtr % 2 ) && !(solPtr >= sagPtr)){
        tekCiftAyir(solPtr+1,sagPtr);
    }
    else if(!(*sagPtr % 2 ) && !(solPtr >= sagPtr)){
        tekCiftAyir(solPtr,sagPtr-1);
    }
    else if(!(*solPtr % 2 ) && !(solPtr >= sagPtr) && ((*sagPtr % 2 ) && !(solPtr >= sagPtr))){
        *solPtr = *solPtr + *sagPtr;
        *sagPtr = *solPtr - *sagPtr;
        *solPtr = *solPtr - *sagPtr;
        tekCiftAyir(solPtr+1,sagPtr-1);
    }
}

// Diziyi yazdırmak için basit bir yardımcı fonksiyon (Buraya dokunma)
void diziYazdir(int *dizi, int boyut) {
    for(int i = 0; i < boyut; i++) {
        printf("%d ", *(dizi + i));
    }
    printf("\n");
}

int main() {
    int sayilar[] = {1, 2, 3, 4, 5, 6, 7, 8,10};
    int boyut = 9;
    
    printf("Once: ");
    diziYazdir(sayilar, boyut);
    
    // Başlangıçta sol pointer dizinin ilk elemanını, 
    // sağ pointer ise dizinin son elemanını gösterir.
    tekCiftAyir(sayilar, sayilar + boyut - 1);
    
    printf("Sonra: ");
    diziYazdir(sayilar, boyut); 
    // Beklenen Çıktı (Sıra değişebilir ama soldakiler çift, sağdakiler tek olmalı): 
    // Ornek: 8 2 6 4 5 3 7 1
    
    return 0;
}