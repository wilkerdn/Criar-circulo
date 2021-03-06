#include <stdio.h>
#include <math.h>
#define PI 3.1416

typedef struct circulo{
	int raio;
	int centro;
}Circulo;

void criar(Circulo *crc);
void area(Circulo *crc);
void diametro(Circulo *crc);
void ponto(Circulo *crc);
