typedef struct lista Lista;

// Cria lista
Lista* cria_lista();

// Verifica se lista é vazia, recebe lista como argumento
int lista_vazia(Lista* l);

// Adiciona um elemento a lista, recebe lista e a informação a ser adicionada
Lista* adiciona_elemento_lista(Lista* l, int info);

// Retira um elemento a lista, recebe a lista e a informação a ser retirada
Lista* retira_elemento_lista(Lista* l, int info);

// Imprime um elemento da lista, recebe a lista e o elemento a ser impresso
void imprime_elemento_lista(Lista* l, int info);

// Imprime o bagulho todo
void imprime_lista(Lista* l);

// Libera a memoria da lista
void libera_lista(Lista* l);

// Retorna a quantidade de nós da lista com valores menores que x
int qtd_menores_lista(Lista* l, int x);

// Insere um valor num novo nó no fim de uma lista
Lista* insere_fim_lista(Lista* l, int x); 
