#include "tarefa.h"
#include <stdio.h>

Erro criar(Tarefa t[], int *pos) {
  if (*pos >= TOTAL)
    return MAX_TAREFAS;

  printf("Entre cim uma prioridade: ");
  scanf("%d ", &t[*pos].prioridades);
  clearBuffer();

  printf("Entre com a descrição: ");
  fgets(t[*pos].descricao, 300, stdin);
  clearBuffer();

  scanf("%c", &c);
  printf("Entre com a categoria: ");
  fgets(t[*pos].categoria, 100, stdin);

  return Ok;
}
Erro deletar(Tarefa t[], int *pos) {
  if(*pos == 0)
    return SEM_TAREFAS;

  printf("Entre com a posição da tarefa: ");
  int pos_d;
  scanf("%d", &pos_d);
  pos_d--;
  if (pos_d >= *pos)
    return NAO_ENCOTRADO;

  for (int i = pos_d; i < *pos; i++){
    t[i].prioridades = t[i+1].prioridades;
    strcpy(t[i].categoria, t[i+1].categoria);
    strcpy(t[i].descricao, t[i+1].descricao);
  }

  *pos = *pos - 1;
  
  return Ok;
}
Erro listar(Tarefa t[], int pos) {
  if (pos == 0)
    return SEM_TAREFAS;

  for (int i = 0; i < pos; i++)
    printTarefa(t[i]);

  return Ok;
}
Erro salvar(Tarefa t[], int pos) {
  printf("Funcao salvar tarefa\n");
  return Ok;
}
Erro carregar(Tarefa t[], int pos) {
  printf("Funcao carregar tarefa\n");
  return Ok;

void printTarefa(Tarefa t) {
    printf("\nPosicao: %d\t", pos);
    printf("\nPrioridade: %d\t.categoria: %s", t.prioridades, t.categoria);
    printf("Descricao: %s\n", t.descricao);
  }
}

void clearBuffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF) {
  }
}