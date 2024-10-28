#include <stdio.h>

int main() {
    char texto[100];
    int i = 0;      

    printf("Digite uma sequência de caracteres (pressione Enter para terminar): ");

    while (1) {
        char c = getchar(); 

        if (c == '\n') {    
            break;
        }

        texto[i] = c;     
        i++;              
    }

    texto[i] = '\0';      

    printf("Os caracteres digitados foram: %s\n", texto);
    printf("Quantidade de caracteres: %d\n", i);

    return 0;
}
