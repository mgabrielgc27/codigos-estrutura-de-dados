#include "tad-lista.h"
#include <stdio.h>
#include <stdlib.h>

struct lista {
	int info;
	Lista* p;
};

Lista* cria_lista(){
	Lista* laux = NULL;
	return laux;
}

int lista_vazia(Lista*l){
	return l == NULL;
}

Lista* adiciona_elemento_lista(Lista* l, int info){
	Lista* laux = (Lista*)malloc(sizeof(Lista));
	if(laux == NULL){
		printf("Memoria insuficiente\n");
		exit(1);
	}
	laux->info = info;
	laux->p = l;
	return laux;
}

void imprime_elemento_lista(Lista* l, int info){
	if(lista_vazia(l)){
		printf("Lista vazia\n");
		exit(1);
	}
	Lista* laux = l;
	while(laux != NULL){
		if(laux->info == info){
			printf("Elemento %d = %d\n", info, laux->info);
			return;
		}
		laux = laux->p;
	}
	printf("Elemento nao ta na lista\n");
}

void imprime_lista(Lista* l){
	if(lista_vazia(l)){
		printf("Lista vazia\n");
		exit(1);
	}
	Lista* laux = l;
	while(laux != NULL){
		printf("%d - ", laux->info);
		laux = laux->p;
	}
}

Lista* retira_elemento_lista(Lista* l, int info){
	if(lista_vazia(l)){
		printf("Lista vazia\n");
		exit(1);
	}
	Lista* lant = NULL;
	Lista* laux = l;
	while(laux != NULL){
		if(laux->info == info){
			if(lant == NULL){
				l = laux->p;
				free(laux);
				return l;
			}
			if(laux->p == NULL){
				lant->p = laux->p;
				free(laux);
				return l;
			}
			lant->p = laux->p;
			free(laux);
			return l;
		}else{
			lant = laux;
			laux = laux->p;
		}
	}
}

void libera_lista(Lista* l){
	if(l!= NULL){
		Lista* lprox;
		while(l != NULL){
			lprox = l->p;
			free(l);
			l = lprox;
		}
	}
}
