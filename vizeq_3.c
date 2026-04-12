#include <stdio.h>

// N: Üzerinde işlem yaptığımız sayı
// anlikToplam: O ana kadar topladığımız rakamların biriktiği yer

int dijitalKok(int N, int anlikToplam) {
    if(N > 0)
        return dijitalKok(N/10,anlikToplam+N%10); //
    else if(anlikToplam > 9)
        return dijitalKok(anlikToplam,0);
    else
        return anlikToplam;

}

int main() {
    int sayi = 987;
    //9+8+7 = 24 => 2 + 4 = 6 
    // İlk çağrıda sayıyı ve başlangıç toplamı olan 0'ı gönderiyoruz.
    printf("Sayisal Kok: %d\n", dijitalKok(sayi, 0)); 
    
    return 0;
}