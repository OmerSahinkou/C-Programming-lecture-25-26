#include <stdio.h>

typedef struct {
    int kanal_no;
    float gerilim;
} AdcVerisi;

float ortalamaHesapla(AdcVerisi *adc_dizisi, int boyut);

int main() {
    AdcVerisi kanallar[4];

    kanallar[0].kanal_no = 1; kanallar[0].gerilim = 2.5;
    kanallar[1].kanal_no = 2; kanallar[1].gerilim = 3.1;
    kanallar[2].kanal_no = 3; kanallar[2].gerilim = 1.8;
    kanallar[3].kanal_no = 4; kanallar[3].gerilim = 2.9;

    /* GÖREV 1: ortalamaHesapla fonksiyonunu çağır ve dönen değeri sakla. */
    float ort = ortalamaHesapla(kanallar,4);

    /* GÖREV 2: Hesaplanan ortalamayı ekrana yazdır. */

    printf("Ortalama = %f\n",ort);
    /* GÖREV 3: Eğer ortalama 2.0 ile 3.0 (dahil) arasındaysa ekrana "Sistem Başarılı", değilse "Sistem Başarısız" yazdır. */
    (ort >= 2 && ort <= 3) ? printf("Sistem Basarili") : printf("Sistem Basarisiz");

    return 0;
}

float ortalamaHesapla(AdcVerisi *adc_dizisi, int boyut) {
    float ort = 0 ;
    /* GÖREV 4: Döngü kurarak gerilim değerlerini topla. */
    for(int i = 0 ; i < boyut ; ort += adc_dizisi->gerilim , adc_dizisi++ , i++ );

    /* GÖREV 5: Ortalamayı hesapla ve geri döndür. */
    return ort / boyut ;
}