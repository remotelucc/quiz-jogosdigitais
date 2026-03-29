#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
setlocale(LC_ALL, "Portuguese");
system("color 0A");

int opcao;

printf(" -----------------------------------------------");
printf("\n Seja bem-vindo à última pergunta do nosso Quiz!\n");
printf(" -----------------------------------------------\n");

printf("\n Qual desses jogos (todos escritos em linguagem C, assim como esse arquivo) é um FPS 3D?\n");
printf("  1.  Doom\n");
printf("  2.  Tomb Raider\n");
printf("  3.  Quake\n");
printf("  4.  Soul Reaver\n");
printf("\nDigite o número da sua resposta\n");
scanf("%i", &opcao);

switch(opcao){
case(1):{printf("\nFoi quase! Doom é FPS, mas é considerado um jogo 2.5D, pois apenas cria a ilusão de um ambiente tridimensional, apesar de não ser.\n");
        printf("\nParabéns! Você concluiu o nosso Quiz! Espero que tenha gostado. Desenvolvido por Lucca Mazzucatto Lino e Gustavo Simões Druziani");
}
break;
case(3):{printf("\nVocê acertou! Quake é um dos primeiros FPS que se tornaram populares, lançado em 1996, e foi um dos primeiros a trazer a tri-\ndimensão para o gênero!\n");
        printf("\nParabéns! Você concluiu o nosso Quiz! Espero que tenha gostado. Desenvolvido por Lucca Mazzucatto Lino e Gustavo Simões Druziani");
}
break;
case(2):{printf("\nEita, essa passou longe!! A resposta certa era 3.  Quake\n");
        printf("\nParabéns! Você concluiu o nosso Quiz! Espero que tenha gostado. Desenvolvido por Lucca Mazzucatto Lino e Gustavo Simões Druziani");
}
break;
case(4):{printf("\nEita, essa passou longe!! A resposta certa era 3.  Quake\n");
        printf("\nParabéns! Você concluiu o nosso Quiz! Espero que tenha gostado. Desenvolvido por Lucca Mazzucatto Lino e Gustavo Simões Druziani");
}
break;
default:{printf("\nEsse número não é de nenhuma das respostas. Execute o arquivo de novo para responder seriamente\n");}
}

printf("\n\n\nPressione Enter para sair...");
fflush(stdin); // Tenta limpar o buffer (funciona bem no Windows/CodeBlocks)
getchar();     // Espera o primeiro caractere
getchar();     // Garante a parada caso o primeiro leia um 'Enter' residual
return 0;
}
