/*  COMANDOS DE REDE AD HOC

    *Verifica se e possivel hospedar uma rede(Nao usado neste programa)
    *E necessario verificar manualmente se seu adptador wifi suporta.
    *Paramentro de retorno: [Hosted network supported: yes]
    NETSH WLAN show drivers

    *Configura o nome e a senha da rede
    NETSH WLAN set hostednetwork mode=allow ssid=NOMEDAREDE key=SENHA

    *Inicia a rede wifi
    NETSH WLAN start hostednetwork

    *Finaliza a rede wifi
    NETSH WLAN stop hostednetwork
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int opcao = 0;

    system("NETSH WLAN set hostednetwork mode=allow ssid=Rede_Ad_Hoc_Pc key=12344321");
    //system("cls"); //Limpa a janela

    printf(" ================== COMANDOS - REDE WIFI ==================\n");
    printf(" Autor: Guilherme Rodrigues :.: Codigo Aberto \n");
    printf(" Disponivel no GitHub :.: github.com/guilhermerodrigues680 \n");
    printf(" ==========================================================\n\n");

    do {
        printf(" Sua rede se chama \"Rede_Ad_Hoc_Pc\" e a senha e: \"12344321\" \n");
        printf(" Digite \n 0 -> Parar \n 1 -> Iniciar \n 2 -> Configurar \n Pressione 'ESC' para sair \n\t");
        //opcao = getche(); //Mostra o caracter digitado
        opcao = getch(); //Nao mostra o caracter digitado
        printf("Opcao %c \n", opcao); //Imprime a variavel 'opcao' como char '\c'

        if(opcao == 48){ //Numero 0 em ASCII
            printf("\tParando rede hospedada\n");
            system("NETSH WLAN stop hostednetwork");
        } else if (opcao == 49){ //Numero 1 em ASCII
            printf("\tIniciando rede hospedada\n");
            system("NETSH WLAN start hostednetwork");
        }
        else if(opcao == 50){ //Numero 2 em ASCII
            printf("\tAjustando rede hospedada \n\n");
            system("NETSH WLAN set hostednetwork mode=allow ssid=Rede_Ad_Hoc_Pc key=12344321");
            printf("\tE necessario pressionar 1 para iniciar a rede \n");
        }
        else if(opcao != 27){ //Testa se nao e ESC, O 'getche()' retorna 27 quando a tecla ESC e presionada
            printf("\tEsta opcao nao existe! Tente novamente ou \n\tpressione 'ESC' para sair \n");
        }
        printf(" ----------------------------------------------------------\n\n");
    } while(opcao != 27); //Se a condicao for falsa, para o loop

    return 0;
}
