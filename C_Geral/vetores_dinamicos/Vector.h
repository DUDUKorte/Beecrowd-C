typedef short dado; // definição do tipo de dado no vetor

typedef struct {
    unsigned size; // Tamanho do vetor
    dado *data; // ponteiro para os dados alocados na memória
} Vector;

/*************************
 * Funções da Biblioteca *
 *************************/

// Função de inicialização (Aloca o vetor com tamanho size)
short initVector(Vector *V, unsigned size);

// Função para desalocar o Vector
void freeVector(Vector *V);

// Função que imprime um Vector
void printVector(Vector V);

// Função que lê um Vector
void scanVector(Vector *V);
