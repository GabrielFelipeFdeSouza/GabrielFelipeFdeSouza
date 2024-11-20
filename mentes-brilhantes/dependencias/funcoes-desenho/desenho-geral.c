//Função que desenhe na tela (qualquer) os seguintes itens padrões:
#include "../dependencias.h"

Rectangle criarBotao(Botao *botao, int x, int y, Color cor_fundo, char texto[], int tamanho_fonte, Color cor_texto)
{
    //Atribui as caracteristicas da criação:
    botao->cor_botao = cor_fundo;
    botao->cor_texto = cor_texto;
    botao->tamanho_fonte_texto = tamanho_fonte;
    strcpy(botao->texto, texto);

    // declaracao de variaveis
    float largura_fonte = 0.0f;

    // verifica o tamanho do texto
    largura_fonte = MeasureText(botao->texto, (int)botao->tamanho_fonte_texto);

    // define o botao com as proporcoes corretas
    Rectangle colisao_botao = {x, y, (int)largura_fonte + 14, (int)tamanho_fonte + 14};

    // retorna a caixa de colisao para ser checada depois
    return colisao_botao;
}

void desenharBotaoTxt(Botao botao)
{
    DrawRectangle(-4 + botao.colisao.x, -4 + botao.colisao.y, 8 +botao.colisao.width, 8 + botao.colisao.height, NOSSO_AMARELO);
    DrawRectangle(botao.colisao.x, botao.colisao.y, botao.colisao.width, botao.colisao.height, botao.cor_botao);
    DrawText(botao.texto, 7 + botao.colisao.x, 7 + botao.colisao.y, botao.tamanho_fonte_texto, botao.cor_texto);
    return;
}

void desenharBotaoNulo(BotaoNulo botao)
{
    DrawRectangle(-4 + botao.colisao.x, -4 + botao.colisao.y, 8 +botao.colisao.width, 8 + botao.colisao.height, NOSSO_AMARELO);
    DrawRectangle(botao.colisao.x, botao.colisao.y, botao.colisao.width, botao.colisao.height, botao.cor_botao);
    return;
}

void resaltaBotoes(Botao botoes[], int quantidade_botoes){
    for(int u = 0; u < quantidade_botoes; u++){
        if(CheckCollisionPointRec(posicao_mouse, botoes[u].colisao)){
            botoes[u].cor_botao = NOSSO_CIANO;
        } else{
            botoes[u].cor_botao = NOSSO_AZUL;
        }
    }
}

void resaltaBotoesNulo(Botao botoes[], int quantidade_botoes){
    for(int u = 0; u < quantidade_botoes; u++){
        if(CheckCollisionPointRec(posicao_mouse, botoes[u].colisao)){
            botoes[u].cor_botao = NOSSO_CIANO;
        } else{
            botoes[u].cor_botao = NOSSO_AZUL;
        }
    }
}