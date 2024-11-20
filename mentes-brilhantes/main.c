/*ARQUIVO MAIN - INICIALIZAÇÕES DAS DEPENDENCIAS RAYLIB, AUDIO, IMAGENS E ETC,
MAIS AS DIRETIVAS BASES DE SAIDA E ENTRADA*/

#include "dependencias.h"

// Constantes
const int COMPRIMENTO_TELA = 1000;
const int ALTURA_TELA = 600;

// Variáveis globais
int tela = 0; // Sinalizador de tela que o usuário se encontra
Vector2 posicao_mouse; // Posição do mouse

int main(void)
{
    
    switch (tela)
    {
    case 1:
        /* code */
        break;
    
    default:
        InitAudioDevice(); //Inicia o dispositivo padrão de audio
        menu(); //Chama a tela de menu
        break;
    } //Switch relaciona qual tela o usuário se encontra

    return 0;
}


// Função para redimensionar a textura - dependencia raylib:
Texture2D ResizeTexture(Texture2D texture, int newWidth, int newHeight)
{
    Image image = LoadImageFromTexture(texture);        // Obter a imagem da textura
    ImageResize(&image, newWidth, newHeight);           // Redimensionar a imagem
    Texture2D newTexture = LoadTextureFromImage(image); // Criar uma nova textura a partir da imagem redimensionada
    UnloadImage(image);                                 // Liberar a imagem temporária
    return newTexture;
}
