//
//  main.c
//  exercicio3
//
//  Created by Mirelle Sine on 06/05/23.
//

#include <stdio.h>

float celsiusParaFahrenheit(float celsius) {
    float fahrenheit = (9 * celsius / 5) + 32;
    return fahrenheit;
}

float fahrenheitParaCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

float celsiusParaKelvin(float celsius) {
    float kelvin = celsius + 273.15;
    return kelvin;
}

float kelvinParaCelsius(float kelvin) {
    float celsius = kelvin - 273.15;
    return celsius;
}

float celsiusParaReaumur(float celsius) {
    float reaumur = celsius * 4 / 5;
    return reaumur;
}

float reaumurParaCelsius(float reaumur) {
    float celsius = reaumur * 5 / 4;
    return celsius;
}

float kelvinParaRankine(float kelvin) {
    float rankine = kelvin * 1.8;
    return rankine;
}

float rankineParaKelvin(float rankine) {
    float kelvin = rankine / 1.8;
    return kelvin;
}

int main() {
    int escolha;
    float temperatura, resultado;
    printf("Escolha a conversão de temperatura desejada:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("3 - Celsius para Kelvin\n");
    printf("4 - Kelvin para Celsius\n");
    printf("5 - Celsius para Réaumur\n");
    printf("6 - Réaumur para Celsius\n");
    printf("7 - Kelvin para Rankine\n");
    printf("8 - Rankine para Kelvin\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);
    printf("Digite a temperatura a ser convertida: ");
    scanf("%f", &temperatura);
    switch (escolha) {
        case 1:
            resultado = celsiusParaFahrenheit(temperatura);
            printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit\n", temperatura, resultado);
            break;
        case 2:
            resultado = fahrenheitParaCelsius(temperatura);
            printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius\n", temperatura, resultado);
            break;
        case 3:
            resultado = celsiusParaKelvin(temperatura);
            printf("%.2f graus Celsius correspondem a %.2f graus Kelvin\n", temperatura, resultado);
            break;
        case 4:
            resultado = kelvinParaCelsius(temperatura);
            printf("%.2f graus Kelvin correspondem a %.2f graus Celsius\n", temperatura, resultado);
            break;
        case 5:
            resultado = celsiusParaReaumur(temperatura);
            printf("%.2f graus Celsius correspondem a %.2f graus Réaumur\n", temperatura, resultado);
            break;
        case 6:
            resultado = reaumurParaCelsius(temperatura);
            printf("%.2f graus Réaumur correspondem a %.2f graus Celsius\n", temperatura, resultado);
            break;
        case 7:
            resultado = kelvinParaRankine(temperatura);
            printf("%.2f graus Kelvin correspondem a %.2f graus Rankine\n", temperatura, resultado);
            break;
        case 8:
            resultado = rankineParaKelvin(temperatura);
            printf("%.2f graus Rankine correspondem a %.2f graus Kelvin\n", temperatura, resultado);
            break;
        default:
            printf("Opção inválida! Escolha um número entre 1 e 8.\n");
    }
    return 0;

