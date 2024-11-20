BACKLOG DO MENTES BRILHANTES:

**14/11/24 - 20:50 - 23:00, Gabriel:**
Ajustei os arquivos em questão de dependencia, *deixando parte de imagens para teste posterior, além da função*
*de escala do game*;


**15/11/24 - 07:30 - 09:28, Gabriel:**
Fiz um teste bem sucedido com carregamento, redimensionamento e exibição de imagens. Ajustei o arquivo makefile
para pegar todos os arquivos e subpastas dentro de "mentes-brilhantes", e por fim, começei a organização das
funções nos seus arquivos especificos;


**15/11/24 - 10:00 - 12:00, Thiago:**
Mudei o nome e todas as referencias da ex funcao-menu para funcao-controle-geral, pois estava sendo usada apenas
para pegar as informacoes basicas. Criei um struct para botoes do menu e outros, na pasta desenho-menu.c. Criei
uma funcao para achar as dimensoes exatas do botao dado um ponto inicial, um texto e uma fonte.
criei uma funcao para desenhar o retangulo e o texto do botao dado uma variavel struct botao qualquer.


**15/11/24- 12:20 - 13:25 - Gabriel:**
Juntei as funções de ciar botão que retorna a caixa de colisao dela, coloquei o strict botao, num arquivo c para 
todas as structs, e agora as funções de criarbotao e desenharbotao, recebem o struct Botao, *ficou para o próximo,*
*desenhar o txt relativo ao botao na função de desenho do botao e dar uma organizadinha*;


**15/11/24 - 13:40 - 14:05 - Gustavo e Thiago:**
Desenhar o txt relativo ao botao na função de desenho do botao.


**15/11/24 - 14:30 - 15:20 - Gustavo e Thiago:**
Conseguimos colocar o efeito sonoro ao clicar no botao e precisa arrumar a musica.


**15/11/24 - 19:20 - 20:00 - Gabriel:**
Coloquei a musica para funcionar e tocar infinitamente dentro do while, quem precisar das funções de audio,
é só dar uma olahada na lista de comandos da raylib. Também, coloquei a flag para a tela não congelar mesmo se 
não estiver focada, mas descobri que isso não funciona  se voce minimizar pelo botão, se isso ocorrer o jogo, 
semre congelará. *Próximos passos, começar a organizar a estrutura de telas do jogo e variaveis de controle geral*;


**16/11/24 - 15:00 - 17:32 - Gabriel:**
Fiz com que em cada arquivo, apenas um include seja dado, ele é o include de dependencias.h que oinclui já todos,
os arquivos do jogo, mais as bibliotecas padrões para execução. Ainda também reorganizei a main.c e desloquei
alguns de seus conteudos para a função de controle do menu, afinal na main.c só ficará o switch com o caso base.
Ainda organizei mais alguns arquivos .h e .c para que estejam reultilizaveis perante todo o código, ex:
repassei as funções de botao para desenho-geral, para ser reultilizado, entre outras  alterações nessa parte.
Criei por fim o sistema de controle de audio facilitado que é apenas a função controleSons(), que gerencia *todos*
*os sons, agora sim creio que seja a hora de colocar a mão realmente na massa e fazer o contudo do game!*;


**19/11/24 - 20:40 - 22:00 - Thiago:**
Criei os botões do menu, com a paleta de cor do jogo, arrumei as funções do botão, para colocar bordas.
*Fica para tras colocar background na tela!*


**19/11/24 - 22:02 - 22:40 - Gabriel:**
Criei as funções que realçam botões (ambos os tipos), também adicioneis os botões Nulos que terão imagens,
sem txt, botei também o fundo para preto!