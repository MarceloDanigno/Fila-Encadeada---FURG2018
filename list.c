#include "list.h"

// Define a estrutura a ser utilizada
struct node{
  int value;
  struct node *next;
};
//Inicializa a lista com o "endereço" = NULL
Node* Initialize(){
  return NULL;
}

//Função para adicionar um nodo na fila
Node* Add(Node *list, int value){//Adiciona novo nodo
  if(list == NULL){//Testa se a lista está vazia
    list = (Node *)malloc(sizeof(Node));//Aloca memória
    list->value = value;
    list->next = NULL;
  }else{ 
    bool continua = true;
    Node *node = list;
    while(continua){ //vai para o ultimo nodo da fila
      if(node->next == NULL){
        continua = false;
      }else{
        node = node->next;
      }
    }
    Node *new = NULL; //cria um novo nodo
    new = (Node *) malloc(sizeof(Node));
    new->value = value;
    new->next = NULL;
    node->next = new; // define o proximo da fila, sendo o nodo criado
  }
  return list;
}

//Função para tirar o primeiro nodo da fila, sem retornar nada.
void Pop(Node **list){//ponteiro de ponteiro para poder modifica-lo sem retornar a propria fila
  if(*list != NULL){
    Node *aux = *list;
    *list = (*list)->next; // retira o primeiro nodo da fila
    free(aux); //desaloca da memória
  }else{
    printf("Empty List\n");
  }
}

//Função que retorna true se foi completada a operação com sucesso e false se não.
bool PopBool(Node **list){
  if(*list != NULL){
    Node *aux = *list;
    *list = (*list)->next;
    free(aux);
    return true;
  }else{
    printf("Empty List\n");
    return false;
  }
}

//Função que retorna o valor do primeiro nodo da fila e a retira
int Top(Node **list){
  int value = NULL;
  if(*list != NULL){
    Node *aux = *list;
    value = aux->value; //salva o valor do primeiro nodo em uma variavel
    *list = (*list)->next;
    free(aux);
  }else{
    printf("Empty List\n");
  }
  return value; // retorna a variavel, retorna NULL se lista vazia
}

//Mostra na tela o valor do primeiro nodo, sem retiralo
void Print(Node *list){
  if(list != NULL){
    printf("Valor do primeiro nodo: %d\n", list->value);
  }else{
    printf("Empty List\n");
  }
}

//Desaloca toda fila
Node* Destroy(Node *list){
  if(list != NULL){
    bool continua = true;
    while(continua){ //percorre toda a fila até o ultimo nodo
      if(list->next == NULL){
        continua = false;
      }
      Node *aux = list;
      list = list->next;
      free(aux);  //desaloca nodo por nodo
    }
  }else{
    printf("Empty List\n");
  }
  return list;
}