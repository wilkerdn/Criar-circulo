#include"circulo.h"

typedef struct circulo Circulo;

int main(){
    Circulo crc;
    criar(&crc);
    area(&crc);
    diametro(&crc);
    ponto(&crc);
    return 0;
}
