#ifndef MAIN_H
#define MAIN_H

#include "raylib.h"

// Constantes
extern const int COMPRIMENTO_TELA;
extern const int ALTURA_TELA;

// Variáveis globais
extern int tela; // Sinalizador de tela que o usuário se encontra
extern Vector2 posicao_mouse; // Posição do mouse

// Funções
Texture2D ResizeTexture(Texture2D texture, int newWidth, int newHeight);

#endif //MAIN_H
