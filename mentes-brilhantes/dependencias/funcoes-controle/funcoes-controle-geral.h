#ifndef FUNCOES_CONTROLE_GERAL_H
#define FUNCOES_CONTROLE_GERAL_H

#include "raylib.h"

// Declaração das funções
void leMouse();
bool checarClique(Rectangle *botao);
void controleSons(int controle, Music musica, Sound som);

#endif
