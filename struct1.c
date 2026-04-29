#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_ISIM_UZUNLUGU 20

typedef struct 
{
    int id;
    char sensor_ismi[MAX_ISIM_UZUNLUGU]; // DÜZELTME 1: Köşeli parantezler ismin yanına geldi.
    float deger;
} SensorVerisi;

// DÜZELTME 2: Fonksiyon artık verileri tek tek değil, "SensorVerisi" paketini bütün olarak alıyor.
void bilgiYazdir(SensorVerisi s) 
{
    // DÜZELTME 3: &d yerine %d yapıldı ve struct içindeki verilere "." ile ulaşıldı.
    printf("id=%d\nisim=%s\ndeger=%.2f\n", s.id, s.sensor_ismi, s.deger); 
}

int main(){

    SensorVerisi Sensor;
    Sensor.id = 1458;
    strcpy(Sensor.sensor_ismi, "LOADCELL");
    Sensor.deger = 4.8;
    
    // Sadece tek bir değişken göndererek tertemiz bir kullanım!
    bilgiYazdir(Sensor); 
    
    printf("\n");   
    return 0;
}