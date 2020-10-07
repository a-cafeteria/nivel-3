// Torre
// problema disponível em https://neps.academy/lesson/140
#include <stdio.h>
#define MAX 1000

//Explicação das variáveis: tamanho -> é o tamanho da matriz
// maior -> salva a maior soma de valores
// casas -> matriz que guarda o valor de cada casa
// somasHorizontais-> vetor que salva a soma total de cada uma das linhas. Usando a imagem do enunciado como exemplo, somasHorizontais[0] seria igual a 25
// somasVerticais -> vetor que salva a soma total de cada uma das colunas. Usando a imagem como exemplo, somasVerticais[4] seria igual a 21
// somaAtual: salva a soma total para cada posição que pode ser ocupada pela torre. Na imagem do enunciado, as ///casas em azul representam a soma atual para somasVerticais[3] e somasHorizontais[3].
//OBS:como estou incrementando os elementos de somasVerticais e somasHorizontais, devo inicializar os vetores como zero. Caso isso não seja feito, valores aleatórios serão assumidos.

int main(int argc, char const *argv[]) {
  int tamanho, maior=0, casas[MAX][MAX], somasHorizontais[MAX],somasVerticais[MAX], somaAtual;
  scanf("%d",&tamanho);
  for(int i=0;i<tamanho;i++){//i representa as linhas
    for(int j=0;j<tamanho;j++){//j representa as colunas
      scanf("%d",&casas[i][j]);
      somasHorizontais[i]+=casas[i][j];//acumular a soma da linha i
      somasVerticais[j]+=casas[i][j];//acumular a soma da coluna j
    }
  }
    for(int i=0;i<tamanho;i++){//nesse for, faço todas combinações de somas horizontais e verticais possiveis
      for(int j=0;j<tamanho;j++){//a casa ocupada pela torre (que não será somada) é a casa que fica no cruzamento da linha e da coluna
        somaAtual=somasHorizontais[i]+somasVerticais[j]-2*(casas[i][j]);//como a casa é somada na linha e também coluna, retiro duas vezes
        if(somaAtual>maior)maior=somaAtual;//comparação para verificar se a somaAtual é a maior
      }
    }
    printf("%d",maior);
  return 0;
}
