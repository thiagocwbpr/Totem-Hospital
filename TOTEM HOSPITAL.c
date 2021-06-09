#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>                                               // * ALUNO = THIAGO DA SILVA MENEZES
                                                                  // * RA =  21001298-5   
 main(){                                                          // * CURSO = ENGENHARIA DE SOFTWARE 
  																  // * DISCIPLINA = ALGORITMOS E LOGICA DE PROGRAMACAO II - 52/2021 
  																  
  	setlocale(LC_ALL, "Portuguese");      /*Utiliza��o da fun��o setlocale da biblioteca <locale.h> para acentua��o de linguagem. */                      
                                                                                    
    char cpf[30];
    int idade;
    char sexo[20];          /* <--- Declara��o de vari�veis */
    char nome[100];
    char quest = 's';
    int pontuacao = 0;

    FILE *dados_paciente;
    char palavra[20];                       /* <--- Cria��o do ponteiro para manipula��o do arquivo de dados do paciente */
    dados_paciente = fopen("Paciente_Dados.txt", "w");

        printf("\t\t|===================================================|\n\n");
        printf("\t\t|       *****    HOSPITAL SCALA VITA   *****        |\n\n");
        printf("\t\t|===================================================|\n\n");
        printf("\t\t|   INFORME SEUS DADOS PARA INICIARMOS A TRIAGEM :  |\n\n");
        
            printf("\t\tCPF: ");
                gets(cpf);
                fprintf(dados_paciente, "CPF: %s\n", cpf);
                    fflush(stdin);

             printf("\n\t\tNOME COMPLETO: ");                                   /* <--- Menu de solicita��o de dados do paciente*/
                gets(nome);
                    fprintf(dados_paciente, "NOME: %s\n", nome);              
                    fflush(stdin);                                              
            printf("\n\t\tSEXO (M ou F): ");                                    
                scanf("%s", sexo);
                    fprintf(dados_paciente, "SEXO: %s\n", sexo);            /* <--- Utiliza��o de fprintf para armazenar os dados do paciente no arquivo. */
                    getchar();
                        fflush(stdin);
                
            printf("\n\t\tIDADE : ");
                scanf(" %d", &idade);
                    fprintf(dados_paciente, "IDADE: %d\n", idade);
                    getchar();
                        fflush(stdin);
    system("cls");

        printf("\t\t|======================================================|\n\n");
        printf("\t\t|        *****    HOSPITAL SCALA VITA   *****          |\n\n");
        printf("\t\t|======================================================|\n\n");
        printf("\t\t|   ATEN��O: RESPONDA O QUESTION�RIO COM [S] OU [N] :  |\n\n");

            printf("\t\tTem Febre? : ");                                /* <--- In�cio do menu de question�rio sobre sintomas do paciente. */
                scanf("%c", &quest);
                    if (quest != 'n' && quest != 'N')               
                        pontuacao = pontuacao + 5;
                            getchar();
                                fflush(stdin);

            printf("\t\tTem dor de cabe�a? : ");
                scanf("%c", &quest);
                    if (quest != 'n' && quest != 'N')
                        pontuacao = pontuacao + 1;
                            getchar();
                                fflush(stdin);
    
            printf("\t\tTem secre��o nasal ou espirros? : ");
                scanf("%c", &quest);
                    if (quest != 'n' && quest != 'N')
                        pontuacao = pontuacao + 1;
                            getchar();
                                fflush(stdin);

            printf("\t\tTem dor/irrita��o na garganta? : ");
                scanf("%c", &quest);
                    if (quest != 'n' && quest != 'N')
                        pontuacao = pontuacao + 1;
                            getchar();
                                fflush(stdin);

            printf("\t\tTem tosse seca? : ");
                scanf("%c", &quest);
                    if (quest != 'n' && quest != 'N')
                        pontuacao = pontuacao + 3;
                            getchar();
                                fflush(stdin);

            printf("\t\tTem dificuldades respirat�ria? : ");
                scanf("%c", &quest);
                    if (quest != 'n' && quest != 'N')
                        pontuacao = pontuacao + 10;
                            getchar();
                                fflush(stdin);

            printf("\t\tTem dores no corpo ? : ");
                scanf("%c", &quest);
                    if (quest != 'n' && quest != 'N')
                        pontuacao = pontuacao + 1;
                            getchar();
                                fflush(stdin);

            printf("\t\tTem diarr�ia? : ");
                scanf("%c", &quest);
                    if (quest != 'n' && quest != 'N')
                        pontuacao = pontuacao + 1;
                            getchar();
                                fflush(stdin);

            printf("\t\tEsteve em contato nos �ltimos 14 dias, com um caso diagnosticado com COVID-19? : ");
                scanf("%c", &quest);
                    if (quest != 'n' && quest != 'N')
                        pontuacao = pontuacao + 10;
                            getchar();
                                fflush(stdin);

            printf("\t\tEsteve em locais com grande aglomera��o? : ");
                scanf("%c", &quest);
                    if (quest != 'n' && quest != 'N')
                        pontuacao = pontuacao + 3;
                            getchar();
                                fflush(stdin);     
        system("cls");

                    if (pontuacao <= 9){
					
                            printf("\n\n\n\t\tATEN��O! DIRIJA-SE A ALA DE RISCO BAIXO.\n\n\n");
                		}
                    if (pontuacao >= 10 && pontuacao <= 19){
					
                            printf("\n\n\n\t\tATEN��O! DIRIJA-SE A ALA DE RISCO M�DIO.\n\n\n");         /* < ---  Condi��es que definem para qual ala o paciente deve ir */
                    }
                    if (pontuacao >= 20){

                            printf("\n\n\n\t\tATEN��O! DIRIJA-SE A ALA DE RISCO ALTO.\n\n\n");    
					}
        fprintf(dados_paciente, "PONTUA��O SINTOMAS: %d\n", pontuacao);     /* <--- Finaliza��o da coleta de dados do paciente, obtendo a pontua��o final da triagem. */
        
        getchar();
   return 0;
}
