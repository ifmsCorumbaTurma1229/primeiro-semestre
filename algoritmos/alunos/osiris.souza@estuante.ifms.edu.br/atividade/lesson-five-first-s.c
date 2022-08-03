#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

/* Escreva um algoritmo que receba a base e a altura de um retângulo e retorne as seguintes saídas:
  a)Perímetro | b)Área | c)Diagonal
*/

int main()
{
  // declaração de variável
  float height, width;

  printf("digite uma altura: \n");
  scanf("%f", &height);

  printf("digite uma base: \n");
  scanf("%f", &width);

  // Calculando Area
  float calcArea = height * width;

  // Calculo de Perimetro
  float calcPerimeter = (height * 2) + (width * 2);

  // Calculo Hipotenuza
  float hipo = sqrt(pow(height, 2) + pow(width, 2));

  // Retorno final
  printf("O valor da altura foi: %.2f \nO valor da base: %.2f \nO Calculo da area foi de: %.2f \nO Calculo do perimetro foi: %.2f \nO Calculo da Hipotenuza: %.2f",
         height,
         width,
         calcArea,
         calcPerimeter,
         hipo);
}