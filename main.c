#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  Node *list = NULL;
  bool sucess = false;
  int value = NULL;
  bool continua = true;
  unsigned short int selecao = 0;
  
  do
  {
    
    printf("Escolha a Operacao desejada:\n");
    printf("0 - Sair\n");
    printf("1 - Inicializa Fila\n");
    printf("2 - Adicionar Nodo\n");
    printf("3 - Retirar Nodo\n");
    printf("4 - Retirar Nodo e retornar se a operacao for concluida\n");
    printf("5 - Escreve na tela o valor do primeiro nodo\n");
    printf("6 - Retorna o valor do primeiro nodo e o retira da fila\n");
    printf("7 - Destroi Fila\n");
    printf("Digite sua opcao: ");
    scanf("%hu",&selecao);
    switch(selecao) //deixar mais bonitos os prints
    {
      case 0:
      list = Destroy(list);
      continua = false;
      break;

      case 1:
      list = Destroy(list);
      list = Initialize();
      break;

      case 2:
      printf("Digite o valor a adicionar: ");
      scanf("%d",&value);
      printf("\n");
      list = Add(list, value);
      break;

      case 3:
      Pop(&list);
      break;

      case 4:
      sucess = PopBool(&list);
      if(sucess == true){printf("Nodo retirado com sucesso!\n");}
      else{printf("Erro ao retirar nodo!\n");}
      break;

      case 5:
      Print(list);
      break;

      case 6:
      value = Top(&list);
      printf("O valor retirado foi: %d.\n",value);
      break;

      case 7:
      list = Destroy(list);
      break;

      default:
      printf("Numero invalido!!!");
      break;
    }


  }while(continua == true);
  
  /*
  list = Initialize();

  Print(list);

  int count = 2;
  while(count < 19){
    list = Add(list, count);
  count++;
  }

  Print(list);

  count = 0;
  while(count < 2){
    sucess = PopBool(&list);
    printf("%d\n", sucess);
  count++;
  }

  Print(list);

  Pop(&list);

  Print(list);

  Pop(&list);

  Print(list);

  list = Destroy(list);
  list = Destroy(list);

  Print(list);

  value = Top(&list);
  printf("%d\n", value);
  */
}