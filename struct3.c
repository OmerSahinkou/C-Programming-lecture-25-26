#include <stdio.h>

typedef struct {
    int sensor_id;
    float agirlik_degeri;
    int veri_gecerli_mi; // 1 ise geçerli, 0 ise bozuk veri (filtreleme için)
} LoadCellVerisi;

// Fonksiyon prototipi
float enYuksekUcOrtalamasi(LoadCellVerisi *dizi, int boyut);

int main() {
    // Test sistemi için 6 adet yük hücresi verisi (Atamaları ben yaptım)
    LoadCellVerisi sensorler[6] = {
        {1, 450.5, 1},
        {2, -50.0, 1},   // Hatalı veri (ağırlık negatif olamaz)!
        {3, 890.2, 1},
        {4, 1500.0, 1},  // Hatalı veri (Kapasite max 1000 olmalı)!
        {5, 750.4, 1},
        {6, 620.1, 1}
    };

    float sonuc = enYuksekUcOrtalamasi(sensorler, 6);
    printf("En yuksek gecerli verilerin ortalamasi: %.2f\n", sonuc);

    return 0;
}

float enYuksekUcOrtalamasi(LoadCellVerisi *dizi, int boyut) {
    
    /* =========================================================================
       GÖREV 1: GEÇERSİZ VERİLERİ İŞARETLE (Filtreleme)
       Diziyi dolaş. Eğer 'agirlik_degeri' 0'dan küçük veya 1000'den büyükse,
       o struct'ın "veri_gecerli_mi" bayrağını 0 yap.
       ========================================================================= */
    for(int i=0; i<boyut ; dizi[i].veri_gecerli_mi = ( (dizi[i].agirlik_degeri < 0 ) || (dizi[i].agirlik_degeri > 1000)) ? 0 : 1 , i++ );


    /* =========================================================================
       GÖREV 2: GEÇERLİ VERİLERİ BÜYÜKTEN KÜÇÜĞE SIRALA (Sorting)
       Sadece geçerli olan (veri_gecerli_mi == 1) değerleri kendi aralarında
       büyükten küçüğe doğru sırala. Sıralama algoritmasını (örneğin Bubble Sort 
       veya Selection Sort) kendin yazmalısın. 
       İpucu: Struct'ların yerini değiştirirken geçici (temp) bir struct 
       kullanman gerekecek! (LoadCellVerisi temp;)
       ========================================================================= */
    LoadCellVerisi temp ;
    for(int i=0 ; i< boyut ; i++ )
    {
        for(int j=0 ; j < boyut-i ;j++)
        {
            if(dizi[j].agirlik_degeri > dizi[j+1].agirlik_degeri)
            {
                temp= dizi[j];
                dizi[j]= dizi[j+1];
                dizi[j+1]= temp;
            }
        }
    }

    float sum = 0;
    int j = 1 ;
    /* =========================================================================
       GÖREV 3: EN YÜKSEK 3 DEĞERİN ORTALAMASI
       Sıralanmış dizideki en yüksek 3 *geçerli* değeri topla ve ortalamasını 
       hesaplayıp return et. 
       Dikkat Etmen Gereken Tuzak: Ya dizide 3'ten daha az geçerli veri kaldıysa? 
       O zaman sadece elinde kalan geçerli verilerin ortalamasını almalısın.
       ========================================================================= */
    for(int i = 0 ; i < boyut ; i++)
    {
        if(dizi[i].veri_gecerli_mi && j<3)
        {
            j++;
        }
    } 
    if(j < 3)
    {
        for(int i = 0 ; i < boyut ; i++)
        {
            if(dizi[i].veri_gecerli_mi && j<3)
            {
                sum += dizi[i].agirlik_degeri;
            }
        } 
        return sum /  j;
    } else if (j >= 3 )
    {
        for(int i = 0 ; i < boyut ; i++)
        {
            if(dizi[i].veri_gecerli_mi && j<3)
            {
                sum += dizi[i].agirlik_degeri;
            }
        } 
        return sum / boyut ;
    }

}