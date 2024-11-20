//Arquivo com todos os includes do game:
#ifndef DEPENDENCIAS_H
#define DEPENDENCIAS_H


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include "raylib.h"
#include "main.h"
#include "./dependencias/funcoes-controle/funcoes-controle-geral.h"
#include "./dependencias/funcoes-desenho/desenho-menu.h"
#include "./dependencias/funcoes-desenho/desenho-geral.h"
#include "./dependencias/funcoes-controle/structs-gerais.h"
#include "./dependencias/funcoes-controle/funcoes-menu.h"


//Definindo as cores - fora das padrões:
#define NOSSO_AZUL       CLITERAL(Color){ 33, 37, 87, 255 }
#define NOSSO_AMARELO    CLITERAL(Color){ 254, 232, 46, 255 }
#define NOSSO_CIANO      CLITERAL(Color){ 0, 105, 145, 255 }
#define NOSSO_CINZA      CLITERAL(Color){ 222, 243, 228, 255 }

#endif //DEPENDENCIAS_H