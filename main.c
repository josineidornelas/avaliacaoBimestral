/*Progrma situação do aluno.c - verifica a situação do *aluno após 4 bimestres.
*Autor: Josinei
*Data: março/2021 - versão 1.0 */

#include <stdio.h>

//Obtenção das notas dos 4 bimestres.
float entradaDados(int numeroEntrada) {
  float nota;
  printf("\n Entre com a nota do %dº bimestre: ", numeroEntrada);
  scanf("%f",&nota);
  return nota;
}

int main(void){

  //declaração das variáveis utilizadas.
  float n1, n2, n3, n4, media;

  //chamada da função para obter as notas
  n1 = entradaDados(1);
  n2 = entradaDados(2);
  n3 = entradaDados(3);
  n4 = entradaDados(4);

  //cálculo da média
  media = (n1 + n2 + n3 + n4) / 4;

//exibição do resultado do aluno.
if (media >= 7.0){
  printf("Aluno APROVADO com media %f : ", media);
}else {
  printf("Aluno REPROVADO com media %f : ", media);
}
return 0;
}