#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    
    setlocale(LC_ALL, "portuguese");
    
    int idade, resposta1, resposta2, perguntafinal1, perguntafinal2;
    char nome [50];
    char estado [40];
    char hobby [50];

    /*****************************************************************
     Um breve momento para contar a história deste código:

     Se você já tiver dado uma olhada no meu perfil, vai saber que eu
     sou uma estudante de Ciência da Computação no Insituto Federal do
     Ceará. Creio que qualquer estudante gosta da possibilidade de ter
     um horário vago entre as suas aulas. Um espaço para descansar,
     conversar, fazer algo que se goste. E de um horário AB vago, um
     pouco de tédio, e a vontade de criar algum programinha em C com as
     coisas que andei aprendendo na disciplina de Introdução a Programa-
     ção nasceu esse código aqui.
     Ele é quase uma piada para mim. Essa história da seita C-ísta foi
     algo que estava conversando com um amigo que também adora programação
     assim como eu. Apesar de eu não ter muitos conhecimentos ainda (ser
     basicamente um bebê na programação), eu quis fazer algo para me
     divertir. Também decidi ter orgulho do meu pequeno código. Ter
     orgulho da minha evolução até aqui.

     Quero fazer pequenos agradecimentos aqui a dois grandes amigos que
     a vida me deu, e que apesar da distância, estão sendo muito impor-
     tantes na minha jornada com a computação.

     Aos queridos: Kevin Marques (kevinmarquesp) && Idinaldo Rocha (Idinaldo).

     Obrigada a quem leu essa documentação até aqui!
     Forte abraço,
     Rebeca Rodrigues.
     
     *****************************************************************/

        printf("Vamos jogar um joguinho?\n");
        printf("'1' para continuar - '2' para parar: ");
        scanf("%d", &resposta1);
    
    do{
        
        if(resposta1==1){
            
            printf("Como é o seu nome?\n");
            printf("R: ");
            scanf("%s", nome);
            
            printf("Qual é a sua idade?\n");
            printf("R: ");
            scanf("%d", &idade);
            
            printf("Em qual estado você mora?\n");
            printf("R: ");
            scanf("%s", estado);
            
            printf("Qual é o seu hobby favorito?\n");
            printf("R: ");
            scanf("%s", hobby);
            
            printf("Está pronto para a pergunta final? - Responda com '1' para 'sim' ou '2' para 'não'\n");
            printf("R: ");
            scanf("%d", &perguntafinal1);
            
            if (perguntafinal1==1){
                printf("\n");
                printf("É ISSO AÍ! Gosto de gente bem decidida assim!\n");
                printf("A pergunta final é...\n");
                printf("Você gostaria de se unir à nossa seita de C-ístas?\n");
                printf("\n");
                printf("Disclaimer: C-ístas são aqueles que acreditam na supremacia da linguagem C como\na Suprema Mãe de todas as linguagens de programação atuais.\n");
                printf("\n");
                printf("Responda com '1' para 'sim' ou '2' para 'não'\n");
                printf("R: ");
                scanf("%d", &perguntafinal2);
                
                if(perguntafinal2 ==1){
                    printf("\n");
                    printf("PARÁBENS POR TER TOMADO ESSA DECISÃO TÃO IMPORTANTE!\n");
                    printf("Saiba, caro(a) %s que sempre estaremos ao seu lado nessa incrível jornada que é\n", nome);
                    printf("o aprendizado e uso da linguagem C. Lembre-se sempre do nosso lema:\n");
                    printf("'C abriu é porque roda'\n");
                    printf("Com carinho e devoção, a Suprema Líder da Comunidade C-ísta: Elizabeth R. Park\n");
                }
                
                else{
                    printf("\n");
                    printf("Que pena %s... Esperamos que um dia você possa se unir a nossa causa de\n", nome);
                    printf("de deixar a linguagem C cada dia mais forte! Aguardamos a sua mudança de ideia e\n");
                    printf("saiba que sempre estaremos lhe esperando de braços abertos!\n");
                    printf("\n");
                    printf("Com carinho, a Suprema Líder da Comunidade C-ísta: Elizabeth R. Park\n");
                }
            }
            
            else{
                printf("\n");
                printf("Bom, irei perguntar você estando pronto ou não...\n");
                printf("A pergunta final é...\n");
                printf("Você gostaria de se unir à nossa seita de C-ístas?\n");
                printf("\n");
                printf("Disclaimer: C-ístas são aqueles que acreditam na supremacia da linguagem C como\na Suprema Mãe de todas as linguagens de programação atuais.\n");
                printf("\n");
                printf("Responda com '1' para 'sim' ou '2' para 'não'\n");
                printf("R: ");
                scanf("%d", &perguntafinal2);

                if(perguntafinal2 ==1){
                    printf("\n");
                    printf("PARÁBENS POR TER TOMADO ESSA DECISÃO TÃO IMPORTANTE!\n");
                    printf("Saiba, caro(a) %s que sempre estaremos ao seu lado nessa incrível jornada que é\n", nome);
                    printf("o aprendizado e uso da linguagem C. Lembre-se sempre do nosso lema:\n");
                    printf("'C abriu é porque roda'\n");
                    printf("Com carinho e devoção, a Suprema Líder da Comunidade C-ísta: Elizabeth R. Park\n");
                }
                
                else{
                    printf("\n");
                    printf("Que pena %s... Esperamos que um dia você possa se unir a nossa causa de\n", nome);
                    printf("de deixar a linguagem C cada dia mais forte! Aguardamos a sua mudança de ideia e\n");
                    printf("saiba que sempre estaremos lhe esperando de braços abertos!\n");
                    printf("\n");
                    printf("Com carinho, a Suprema Líder da Comunidade C-ísta: Elizabeth R. Park\n");
                }
            }
        }
        
        else {
            printf("\n");
            printf("Mas que pena que você não quis passar um tempinho comigo...\n");
            printf("Fico muito triste com isso (T-T), mas não há nada que eu possa fazer...\n");
            printf("Mas se você ficou com pena de mim depois dessa mensagem triste...\n");
            }
        
        printf("\n");
        printf("Você quer começar de novo? :)\nResponda 1 para iniciar o programa de novo - 2 para parar o programa: ");
        scanf("%d", &resposta2);
    } while(resposta2 ==1);

    return 0;
}
