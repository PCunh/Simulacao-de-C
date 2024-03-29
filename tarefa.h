
#define TOTAL 1

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

Erro criar(Tarefa t[], int *pos);

Erro deletar(Tarefa t[], int *pos);
Erro listar(Tarefa t[], int pos);

Erro salvar(Tarefa t[], int pos, int tamanho);
Erro carregar(Tarefa t[], int *pos, int tamanho);

void printTarefa(Tarefa t, int pos);

void clearBuffer();