//Le caracteres do teclado e escreve um caractere por vez no arquivo

#include <stdio.h>

void main()
{
    FILE *arquivo;
    char letra;

    arquivo = fopen("arqtext.txt", "a");

    while ((letra=getche()) != 27){
        if(letra!=27)
        printf("%c",letra);

        if(letra==13){
            putc('\n',arquivo);
            printf("\n");
        }
        else
            if(letra==8)
                fseek(arquivo,ftell(arquivo)-1,0);
            else
                putc(letra,arquivo);
    }
    fclose(arquivo);
}
//Fim main
