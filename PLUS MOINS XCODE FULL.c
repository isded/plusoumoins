#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nombreMystere = 0, nombreEntre = 0, nombreCoup = 0, choixNiveau = 0, rejouer=1; //Variables

    while(rejouer == 1)
    {
    printf("--- Jeux  plus ou moins par Lorenz ---\n\n");
    printf("--- MENU CHOIX NIVEAU ---\n\n");
    printf("1. Entre 1 et 100\n");
    printf("2. Entre 1 et 1000\n");
    printf("3. Entre 1 et 10 000\n\n");
    printf("Entrez nombre entre 1 et 3 : ");    //Text indication jeu
    scanf("%d", &choixNiveau);
switch (choixNiveau)
{
        case 1:
{
    int MAX = 100, MIN = 1;
    srand((unsigned int)time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN; //Creation nombre random
    printf("\n\nTrouvez le nombre entre 1 et 100 : ");
}
    do
    {
    scanf("%d", &nombreEntre), nombreCoup++;
    if (nombreEntre < nombreMystere)
    printf("C'est plus\n");
    else if (nombreEntre > nombreMystere)
    printf("C'est moins\n");
    if (nombreEntre == nombreMystere)
    printf("\n\nC'est gagne !\n\nVous avez reussis en %d coups !\n\n", nombreCoup);
    }while (nombreEntre != nombreMystere);
    break;
        case 2:
{
    const int MAX = 1000, MIN = 1;
    srand((unsigned int)time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    printf("\n\nTrouvez le nombre entre 1 et 1000 : ");
}
    do
    {
        scanf("%d", &nombreEntre), nombreCoup++;
    if (nombreEntre < nombreMystere)
    printf("C'est plus\n");
    else if (nombreEntre > nombreMystere)
    printf("C'est moins\n");
    if (nombreEntre == nombreMystere)
    printf("\n\nC'est gagne !\n\nVous avez reussis en %d coups !\n\n", nombreCoup);
    }while (nombreEntre != nombreMystere);
    break;
        case 3:
{
    const int MAX = 10000, MIN = 1;
    srand((unsigned int)time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    printf("\n\nTrouvez le nombre entre 1 et 10 000 : ");
}
    do
    {
        scanf("%d", &nombreEntre), nombreCoup++;
    if (nombreEntre < nombreMystere)
    printf("C'est plus\n");
    else if (nombreEntre > nombreMystere)
    printf("C'est moins\n");
    if (nombreEntre == nombreMystere)
    printf("\n\nC'est gagne !\n\nVous avez reussis en %d coups !\n\n", nombreCoup);
    }while (nombreEntre != nombreMystere);
    break;
    }
        printf("Rejouer  1 = OUI autre = non : \n");
        scanf("%d", &rejouer);
    }
    return 0;
}

