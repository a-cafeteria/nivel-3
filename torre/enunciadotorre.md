# Torre - Nível 3
<font size="5">
Link do enunciado original: https://neps.academy/lesson/140
<br></br>
Dada uma matriz quadrada M de números naturais, o índice i de uma certa linha e o índice j de uma certa coluna, vamos definir o peso do cruzamento da linha i com a coluna j, como sendo a soma de todos os elementos que estejam na linha i ou na coluna j, mas não nas duas. Quer dizer, excluindo o elemento que está exatamente no cruzamento! Neste problema, você deve descobrir qual é o peso máximo entre todos os possíveis cruzamentos da matriz!
<br></br>
No jogo de xadrez, a torre é uma peça que pode se mover para qualquer outra posição do tabuleiro na linha ou na coluna da posição que ela ocupa. O professor Paulo está tentando inventar um novo tipo de jogo de xadrez onde todas as peças são torres, o tabuleiro também é quadrado mas pode ter qualquer dimensão e cada posição do tabuleiro é anotada com um número inteiro positivo, como na figura abaixo.
<br></br>
(Figura disponível no enunciado original)
<br></br>
Ele definiu o peso de uma posição (i,j)(i,j) como sendo a soma de todos os números que estejam na linha i com todos os números da coluna j, mas sem somar o número que está exatamente na posição (i,j)(i,j). Quer dizer, se uma torre estiver na posição (i,j)(i,j), o peso da posição é a soma de todas as posições que essa torre poderia atacar.
<br></br>
O professor Paulo está solicitando a sua ajuda para implementar um programa que determine qual é o peso máximo entre todas as posições do tabuleiro.
<br></br>
No exemplo da figura acima, com um tabuleiro de dimensão seis (ou seja, seis linhas por seis colunas), o peso máximo é 67, referente à posição (4,4)(4,4).
<br></br>
Entrada
<br></br>
A primeira linha da entrada contém um inteiro N, representando a dimensão do tabuleiro.
<br></br>
Cada uma das N linhas seguintes contém N inteiros positivos Xi, definindo os números em cada posição do tabuleiro.
<br></br>
Saída
<br></br>
Seu programa deve produzir uma única linha, contendo um único inteiro, o peso máximo entre todas as posições do tabuleiro.
<br></br>
Restrições
<br></br>
3<=N<=1000 e 0<=Xi<=100
<br></br>
Exemplos de entrada e saída:
</font>
<pre>
Entrada                     Saída
6                            67                          
4 1 3 8 4 5                     
9 2 8 9 2 7                     
5 5 4 3 2 5
8 2 9 1 9 8
7 1 3 2 1 2
5 1 2 9 3 8	
<br></br>


3                            20
5 1 1
5 2 1
8 5 5


</pre>
