#include <stdio.h>

int main() {
    float pnumero, snumero, resultado;
    char operador;
    
    
    printf("\n Adição (+)\n subtração (-)\n Multiplicação (+)\n Divisao (/):\n Exponenciação (^) \n \n Qual operador:");
    scanf("%c", &operador);
    
    printf("Primeiro número: ");
    scanf("%f", &pnumero);
    
    printf("Segundo número: ");
    scanf("%f", &snumero);
    
    if (operador == '/' && snumero == 0) {
        printf("operação invalida 1");
    } else if (operador == '/' && pnumero == 0) {
        printf("operação invalida 2");
    } else {
    switch (operador) {
        case '+':
            resultado = pnumero + snumero;
            printf("\nResultado: %g", resultado);
            break;
        case '-':
            resultado = pnumero - snumero;
            printf("\nResultado: %g", resultado);
            break;
        case '*':
            resultado = pnumero * snumero;
            printf("\nResultado: %g", resultado);
            break;
        case '/':
            resultado = pnumero / snumero;
            printf("\nResultado: %g", resultado);
            break;
        case '^':
            resultado + 1;
		    for(int i = 1; 1 <= snumero; i++) {
		    resultado *= pnumero;
		    }
		    printf("\nResultado> /%g", resultado);
		    break;
        
        default:
            printf("resultado invalido");
    }
    }
    return 0;
}