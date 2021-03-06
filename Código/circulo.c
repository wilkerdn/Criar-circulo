#include"circulo.h"

void criar(Circulo *crc){
	printf("Digite o valor do raio:\n");
	scanf("%d",&crc->raio);
	printf("Digite o valor do centro:\n");
	scanf("%d",&crc->centro);
}

void area(Circulo *crc){
	float clc_area;
	clc_area = (PI*((crc->raio)*(crc->raio)));
	printf("Valor da area = %.2f\n",clc_area);
}

void diametro(Circulo *crc){
	int clc_diametro=0;
	clc_diametro = 2*(crc->raio);
	printf("Valor do diametro = %d\n",clc_diametro);
}

void ponto(Circulo *crc){
	float pnt=0;
	printf("Digite um ponto:\n");
    scanf("%f",&pnt);
    if(pnt==crc->raio||pnt<crc->raio){
        printf("Este ponto faz parte do circulo\n");
    }else{
        printf("Este ponto nao faz parte do circulo\n");
    }
}
