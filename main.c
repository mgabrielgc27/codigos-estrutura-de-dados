#include <stdio.h>
#include <stdlib.h>
#include "tad-lista.h"

struct lista {
	int info;
	Lista* p;
};

int main(int argc, char *argv[]) {
	
	Lista* l = cria_lista();
	l = adiciona_elemento_lista(l, 1);
	l = adiciona_elemento_lista(l, 2);
	l = adiciona_elemento_lista(l, 3);
	l = adiciona_elemento_lista(l, 4);
	l = adiciona_elemento_lista(l, 5);
	
	printf("Imprimindo primeira vez: ");
	imprime_lista(l);
	printf("\n");
	
	l = retira_elemento_lista(l, 4);
	imprime_elemento_lista(l, 2);
	printf("Imprimindo segunda vez: ");
	imprime_lista(l);
	printf("\n");
	
	libera_lista(l);
	
	l = cria_lista();
	l = adiciona_elemento_lista(l, 10);
	printf("Imprimindo terceira vez: ");
	imprime_lista(l);
	printf("\n");
	
	system("PAUSE");
	return 0;
	
}
