#include <stdio.h>
#include <locale.h>

int main(){
    // Especificando o ídioma
    setlocale(LC_ALL, "Portuguese");
    
    // Declarando variáveis
    float largura, comprimento;
    float area;
    
    // Lendo valores
    printf("Largura (m): ");
    scanf("%f", &largura);
    
    printf("Comprimento (m): ");
    scanf("%f", &comprimento);
    
    // Calculando a área
    area = largura * comprimento;
    
    // Exibindo a área
    printf("A área de um terreno de %.1fx%.1f é %.1fm.", largura, comprimento, area);
    
    // Finalizando a execução
    return 0;
    
}
m
