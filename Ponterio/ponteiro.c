#include <stdlib.h>
#include <stdio.h>

int main()
{

    int valor = 100;
    int *ponteiro;

    // ponteiros apenas recebem enderecos de memoria, para isso utiliza-se o &(e comercial)
    // para atribuir ao ponteiro o endereco de memoria de uma variavel
    ponteiro = &valor;

    printf("Valor : %i \n", &valor);
    printf("*Ponteiro %i \n", &*ponteiro);
    printf("ponterio %i \n", &ponteiro);

    valor = 40;
    printf("valor recebeu 40\n");
    printf("Valor : %d \n", valor);
    printf("*Ponteiro %x \n", *ponteiro);
    printf("ponterio %x \n", ponteiro);
    //%x e mostrar o valor em hexadecimal


	int * ptr;
	int ** pptr;

	int vlr = 10;

	ptr = &vlr;
	pptr = &ptr;

	printf("Endereço de ptr = %x\n", &ptr);
	printf("Endereço de pptr = %x \n", &pptr);

    printf("Endereço de vlr = %x \n", &vlr);

	printf("Valor ptr = %d \n", *ptr);
	printf("Valor pptr = %d \n", **pptr);


    return 0;
}