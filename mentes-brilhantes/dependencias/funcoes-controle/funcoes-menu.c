// FUNÇÕES PARA A TELA DE MENU - SEM SER PARTE DE DESENHO

#include "../dependencias.h"

//Função de declaração do menu:
void menu(){
    //Variaveis:
    // bool som_ativo = false; //Variavel de controle de som da musica - começa em ativo

    // Configuração de janela:
    InitWindow(COMPRIMENTO_TELA, ALTURA_TELA, "Mentes Brilhantes"); // Inicialização da tela inicial
    SetWindowState(FLAG_WINDOW_RESIZABLE | FLAG_WINDOW_UNFOCUSED);  // Seta a tela para rodar, mesmo se não focada, mas se minimizada pelo botão, congela
    SetTargetFPS(60); // Setando o framerate da raylib para 60
    ShowCursor(); // Habilita a raylib para desenhar o cursor do S.O
    
    //Configurações das musicas:
    Music musica;
    musica = LoadMusicStream("./sounds/sla.mp3");
    PlayMusicStream(musica);
    Sound som;
    som = LoadSound("./sounds/badum.mp3");

    // Definindo os botões do menu:
    Botao botoes_menu[5]; //Declara todos os botões da tela de mennu
    BotaoNulo botao_menu_som[1];
    botoes_menu[0].colisao = criarBotao(&botoes_menu[0], 42, 525, NOSSO_AZUL, "SAIR", 30, NOSSO_CINZA); 
    botoes_menu[1].colisao = criarBotao(&botoes_menu[1], 42, 450, NOSSO_AZUL, "Créditos", 30, NOSSO_CINZA);
    botoes_menu[2].colisao = criarBotao(&botoes_menu[2], 42, 375, NOSSO_AZUL, "Gerenciar cartas", 30, NOSSO_CINZA);
    botoes_menu[3].colisao = criarBotao(&botoes_menu[3], 42, 300, NOSSO_AZUL, "Singleplayer", 30, NOSSO_CINZA);
    botoes_menu[4].colisao = criarBotao(&botoes_menu[4], 42, 225, NOSSO_AZUL, "Multiplayer", 30, NOSSO_CINZA);

    botao_menu_som[0].colisao = (Rectangle){916, 525,50,50};
    botao_menu_som[0].cor_botao = NOSSO_AZUL;


    // Carregando as imagens:
    //Texture2D imagemteste = LoadTexture("img/polvo-pequeno.png"); //Carrega a imagem de teste
    //Texture2D imagemRedimensionada = ResizeTexture(imagemteste, 200, 300); //Redimensiona a imagem uma única vez
        
    //Condição de tela:    
    while (!WindowShouldClose() && tela == 0){
        
        leMouse(botoes_menu, 5); //Chama a função global de leitura de mouse
        desenhoMenu(botoes_menu, 5, botao_menu_som); //Chama a função de desenho objetos do menu
        controleSons(0, musica, som); //Função de controle geral sons - mantem musica tocando
        resaltaBotoes(botoes_menu, 5);
        resaltaBotoesNulo(botao_menu_som, 1);

        // // Verifica clique no botão:
        // if (checarClique(&botoes_menu[0].colisao))
        //     controleSons(1, musica, som); //Função de controle geral sons - toca som
        

        if(checarClique(&botoes_menu[0].colisao)){
            CloseWindow();
        } //Se o botão de sair for clicado fecha a tela e libera as funções de memória

    }

return;
}