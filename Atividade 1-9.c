// Fa�a um programa em Linguagem C que receba o n�mero de horas trabalhadas 
//e o valor do sal�rio m�nimo. 
//Calcule e mostre o sal�rio a receber seguindo as regras abaixo: 
// a. A hora trabalhada vale a metade do sal�rio m�nimo; 
//b. O sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da hora trabalhada; 
//c. O imposto equivale a 3% do sal�rio bruto; 
//d. O sal�rio a receber equivale ao sal�rio bruto menos o imposto. 
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
    printf("O sal�rio liquido e R$ %.2f\n", salario_liquido);

    return 0;
}

