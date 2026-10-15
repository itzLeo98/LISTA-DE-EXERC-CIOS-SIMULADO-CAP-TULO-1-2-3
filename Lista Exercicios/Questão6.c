Questão 06. Escopo de Bloco e Comandos de Desvio (break e continue) (Cap. 3) — Analise o
programa abaixo que calcula a soma acumulada de quadrados dentro de um laço for contendo um
comando de desvio e controle de escopo interno:

#include <stdio.h>
#include <stdlib.h>
int main() {
int i;
for (i = 1; i <= 10; i++) {
if (i == 5) continue;
if (i == 8) break;
int soma = 0;
soma += i * i;
}
printf("Soma final = %d\n", soma);
system("PAUSE");
return 0;
}

a) O compilador vai chiar porque a variável soma foi declarada dentro do bloco do for, então o escopo dela morre ali dentro. 
Quando o printf tenta chamá-la lá embaixo, ela tecnicamente já não existe para o programa.



b) O continue pula o resto da volta do loop quando $i$ for igual a $5$. O break para tudo e encerra o laço de vez quando $i$ chega em $8$.
 As iterações que rodam de fato vão de $1$ até $7$ (com o $5$ sendo ignorado no meio).   

 
 
 c) Para corrigir, basta declarar a variável soma antes do laço for começar. O resultado impresso no console será a soma dos quadrados de $1$ até $7$ 
 (exceto o $5$), ou seja: $1^2 + 2^2 + 3^2 + 4^2 + 6^2 + 7^2 = 1 + 4 + 9 + 16 + 36 + 49 = 115$.   


