#include <stdio.h>
#include <string.h>

// str: Kontrol edilecek kelime
// sol: Soldaki harfin indeksi
// sag: Sağdaki harfin indeksi

int palindromMu(char *str, int sol, int sag) {
    
    if((*(str + sol) == *(str + sag)) && !(sol == sag || sol +1 == sag))
        return palindromMu(str,sol+1,sag-1);
    else if(sol == sag || sol +1 == sag)
        return 1;
    else
        return 0;
    
}

int main() {
    char kelime[] = "RADAR";
    // Başlangıçta sol en baştan (0), sağ ise en sondan (uzunluk - 1) başlar.
    int sonuc = palindromMu(kelime, 0, strlen(kelime) - 1);
    
    if(sonuc == 1)
        printf("%s bir palindromdur!\n", kelime);
    else
        printf("%s bir palindrom DEGILDIR!\n", kelime);
        
    return 0;
}