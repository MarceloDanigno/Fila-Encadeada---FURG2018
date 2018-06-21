#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/* Tipo Node abstrai a estrutura do nodo */
typedef struct node Node;

/* Aloca e retorna um nodo vazio */
Node* Initialize();

/* Adiciona um nodo no final da fila */
Node* Add(Node *list, int value);

/* Retira o primeiro nodo da fila */
void Pop(Node **list);

/* Retira o primeiro nodo da fila e retorna true se conseguiu e false caso contrário */
bool PopBool(Node **list);

/* Retira o primeiro nodo da fila e o retorna o seu valor */
int Top(Node **list);

/* Mostra o primeiro nodo da fila na tela */
void Print(Node *list);

/* Desaloca a memória e destrói a fila */
Node* Destroy(Node *list);
