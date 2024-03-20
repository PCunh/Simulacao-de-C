typedef struct Tarefa {
  int prioridades;
  char categoria[100];
  char descricao[300];
} Tarefa;

typedef enum Erro {
  Ok,
  ABRIR,
  FECHAR,
  LER,
  ESCREVER,
  MAX_TAREFAS,
  SEM_TAREFAS,
  NAO_ENCOTRADO
} Erro;