#include <stdio.h>

int main() {
    // Dizinin sonundaki -1, döngüyü bitirmek için kullandığımız bir tuzak
    int fb[] = {1, 4, 3, 8, -1}; 
    int *p = fb;
    int i, sonuc = 0;

    // Kemerleri bağla: Döngü artırım kısmında ternary operatörü var!
    for (i = 1; *p != -1; i++, p += (*p % 2 == 0 ? 1 : 0)) {
        
        sonuc += (i % 2 != 0) ? (*p)++ : ++*p;
        
    }
    
    printf("%d %d %d %d | Sonuc: %d\n", fb[0], fb[1], fb[2], fb[3], sonuc);
    
    return 0;
}