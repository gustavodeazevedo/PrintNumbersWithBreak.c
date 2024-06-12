#include <stdio.h>
A linha acima inclui a biblioteca padrão de entrada e saída do C, stdio.h, que permite o uso da função printf para imprimir na tela.

int main(void) {
    int i;
A função main é o ponto de entrada do programa. Dentro dela, declaramos uma variável inteira i que será usada como contador no loop.

for(i = 1; i <= 100; i++) {
Este é o início de um loop for que:
Inicializa i com 1.
Continua a execução enquanto i for menor ou igual a 100.
Incrementa i em 1 a cada iteração.

if(i == 80) {
    break;
}
Dentro do loop, há uma condição if que verifica se i é igual a 80. Se for, a instrução break é executada, interrompendo o loop imediatamente. Isso significa que os números de 80 a 100 não serão impressos.

printf("\nI = %d", i);
Se a condição if não for satisfeita, o valor atual de i é impresso na tela. O \n no início da string move o cursor para uma nova linha antes de imprimir o número.

return 0;
Finalmente, a função main retorna 0, indicando que o programa terminou com sucesso.
