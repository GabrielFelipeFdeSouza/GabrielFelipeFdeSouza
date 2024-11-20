// FUNÇÕES DE DESENHO PARA A TELA DE MENU GERAL

#include "../../dependencias.h"

extern Vector2 posicao_mouse; // Chamada da variavel global posicao_mouse

void desenhoMenu(Botao botoes[], int quantidade_botoes, BotaoNulo botao)
{
    BeginDrawing();
    ClearBackground(BLACK);

    for(int t = 0; t < quantidade_botoes; t++){
    desenharBotaoTxt(botoes[t]);
    } //Desenha todos os botões

    desenharBotaoNulo(botao);

    DrawText(TextFormat("Posição do mouse: (%.2f,%.2f)", posicao_mouse.x, posicao_mouse.y), 1, 1, 20, BLACK);
    EndDrawing();
}


