// FUNÇÕES PARA AS FUNÇÕES DE CONTROLE - SEM SER PARTE DE DESENHO:

#include "../../dependencias.h"

extern Vector2 posicao_mouse; // Chamada da variavel global posicao_mouse

void leMouse(Botao botoes[], int quantidade_botoes)
{
    posicao_mouse.x = GetMouseX();
    posicao_mouse.y = GetMouseY(); //Retorna para a variavel global de posições o X e o Y atual


    for(int y = 0; y < quantidade_botoes; y++){
        if(CheckCollisionPointRec(posicao_mouse, botoes[y].colisao)){
            SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
            return;
        } else {
            SetMouseCursor(MOUSE_CURSOR_DEFAULT);
        }
    } //Retorna o ponteiro de mão clicavel se estiver sobre algum botão

    return;
} //Função de leitura da posição do cursor em relação à janela aberta

bool checarClique(Rectangle *botao)
{
    if (IsMouseButtonPressed(0) && CheckCollisionPointRec(posicao_mouse, *botao))
    {
        return true;
    }
    else
    {
        return false;
    }
} //Função que checa clique do mouse em um botão, além da colisão

void controleSons(int controle, Music musica, Sound som){
    switch (controle)
    {
    case 1:
        PlaySound(som); // Toca apenas uma vez o som
        break;

    case 2:
        SetMusicVolume(musica, 0); //Tira o som da musica
        break;

    case 3:
        SetMusicVolume(musica, 1); //Recoloca o som do jogo
        break;
    
    default:
        UpdateMusicStream(musica); // Mantem a musica tocando
        break;
    }
    return;
} //Função que controla as musicas e sons ao ser chamada