#include <stdlib.h>
#include <stdio.h>

int swap(int N, int Fdig, int Ldig, int newN, int pow) {
    if (N < 10 && pow == 1) {
        return N;
    } else if (N > 9) {
        return swap(N / 10, 0, Ldig + (N % 10) / pow, newN + (N % 10) * (pow / 10), pow * 10);
    } else {
        return (Ldig * pow) + (newN * 10) + N;
    }
}

int main(){
    int num = 74589;
    printf("%d\n", swap(num, 0, 0, 0, 1));
    return 0;
}


//vize 4. soru kod yazma