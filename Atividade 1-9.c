// Faça um programa em Linguagem C que receba o número de horas trabalhadas 
//e o valor do salário mínimo. 
//Calcule e mostre o salário a receber seguindo as regras abaixo: 
// a. A hora trabalhada vale a metade do salário mínimo; 
//b. O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada; 
//c. O imposto equivale a 3% do salário bruto; 
//d. O salário a receber equivale ao salário bruto menos o imposto. 
#include <stdio.h>

int main() {
    float horas_trabalhadas, salario_minimo, valor_hora, salario_bruto, imposto, salario_liquido;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);

    valor_hora = salario_minimo /2;
    salario_bruto = horas_trabalhadas * valor_hora;
    imposto = salario_bruto * 0.03;
    salario_liquido = salario_bruto - imposto;

    printf("O valor da hora trabalhada e R$ %.2f\n", valor_hora);
    printf("O salario bruto e R$ %.2f\n", salario_bruto);
    printf("O imposto a ser pago e R$ %.2f\n", imposto);
    printf("O salário liquido e R$ %.2f\n", salario_liquido);

    return 0;
}

