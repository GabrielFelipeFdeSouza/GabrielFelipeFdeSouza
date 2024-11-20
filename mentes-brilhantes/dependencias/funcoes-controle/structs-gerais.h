#ifndef STRUCTS_GERAIS_H
#define STRUCTS_GERAIS_H

typedef struct
{
    // retangulo
    Rectangle colisao;
    Color cor_botao;
    // texto
    char texto[100];
    int tamanho_fonte_texto;
    Color cor_texto;
} Botao;

typedef struct
{
    // retangulo
    Rectangle colisao;
    Color cor_botao;
} BotaoNulo;

#endif // STRUCTS_GERAIS_H
