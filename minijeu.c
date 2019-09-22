#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int MIN = 1;

int main(void)
{
    int nombreMystere;
    int results;
    int pdv;
    int pdv2;
    int MAX;
    int lvl;
    int BOT;
    int mode;
    char pseudo1;
    char pseudo2;

void    solo()
{
        while (lvl <= 0 || lvl > 4 || !lvl)
    {
        printf("- Ton lvl de difficulte - \n\n");
        printf("1. Facile.\n");
        printf("2. Moyen.\n");
        printf("3. Difficile.\n");
        printf("4. Impossible.\n");
        scanf("%d", &lvl);
        switch (lvl)
        {
            case 1:
                MAX = 100;
                pdv = 5;
                break;
            case 2:
                MAX = 500;
                pdv = 5;
                break;
            case 3:
                MAX = 1000;
                pdv = 3;
                break;
            case 4: 
                MAX = 10000;
                pdv = 1;
                break;
        }
    }
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    while (results != nombreMystere && pdv != 0)
    {    
        printf("Quel est le nombre ?\n");
        scanf("%d", &results);   
        if (nombreMystere < results)
        {
            printf("C moins !\n");
            pdv = pdv - 1;
            printf("Il te reste %d essais\n\n", pdv);
            BOT = (rand() % (MAX - MIN + 1)) + MIN;
            printf("Ton ennemi a trouve %d\n\n", BOT);
        }
        else if (nombreMystere > results)
        {
            printf("C plus !\n");
            pdv = pdv - 1;
            printf("Il te reste %d essais\n\n", pdv);
            BOT = (rand() % (MAX - MIN + 1)) + MIN;
            printf("Ton ennemi a trouve %d\n\n", BOT);
        }
        else
            printf("Cool.\n");

    }
    if (results != nombreMystere && pdv == 0)
        printf("\nNoob la reponse c\'etait %d\n", nombreMystere);

}

void    multijoueur()


{
      while (lvl <= 0 || lvl > 4 || !lvl)
    {
        printf("- Votre niveau de difficulte - \n\n");
        printf("1. Facile.\n");
        printf("2. Moyen.\n");
        printf("3. Difficile.\n");
        printf("4. Impossible.\n");
        scanf("%d", &lvl);
        switch (lvl)

        {
            case 1:
                MAX = 100;
                pdv = 5;
                pdv2 = 5;
                break;
            case 2:
                MAX = 500;
                pdv = 5;
                pdv2 = 5;
                break;
            case 3:
                MAX = 1000;
                pdv = 3;
                pdv2 = 3;
                break;
            case 4: 
                MAX = 10000;
                pdv = 1;
                pdv2 = 1;
                break;
        }

    }


    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    while (results != nombreMystere && pdv != 0 && pdv2 != 0)

    {    

        printf("Quel est le nombre du Joueur 1?\n");
        scanf("%d", &results);   
    if (nombreMystere < results)
        {
            printf("C'est moins !\n");
            pdv--;
            printf("Il te reste %d essais Joueur 1.\n\n\n", pdv);
            
        }
        else if (nombreMystere > results)
        {
            printf("C'est plus !\n");
            pdv--;
            printf("Il te reste %d essais Joueur 1.\n\n\n", pdv);
        }

          else
        {
            printf("Cool. Le Joueur 1 a gagne !\n");
            break;
        }

        printf("Quel est le nombre du Joueur 2 ?\n");
        scanf("%d", &results);   
        if (nombreMystere < results)
        {
            printf("C'est moins !\n");
            pdv2--;
            printf("Il te reste %d essais Joueur 2.\n\n\n", pdv2);
            
        }
        else if (nombreMystere > results)
        {
            printf("C'est plus !\n");
            pdv2--;
            printf("Il te reste %d essais Joueur 2.\n\n\n", pdv2);
        
        }
        else
        {
            printf("Cool. Le Joueur 2 a gagne !\n");
            break;
        }
    }
    if (results != nombreMystere && pdv == 0 && pdv2 == 0)
        printf("\nNoob la reponse c\'etait %d\n", nombreMystere);


}

    while(mode <= 0 || mode > 2 || !mode)
{
        printf(" Voulez vous jouer seul ou a plusieurs ? \n");
        printf(" 1. Solo vie.\n");
        printf(" 2. Multijoueur.\n");
        scanf("%d", &mode);
        switch(mode)
        {
            case 1:
                solo();
                break;

            case 2:

                multijoueur();
                break;

            case 3:
                printf("Tu plaisantes ?\n\n\n");
                break;
        }

}
    scanf("%d",&lvl);
    return 0;
}

/*

    char demanderpseudo()
{
    printf("Quel est le pseudo du Joueur 1 ?\n");
    scanf("%s",pseudo1);
    printf("Quel est le pseudo du Joueur 2 ?\n");
    scanf("%s",pseudo2);
}

*/