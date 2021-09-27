#include<stdio.h>

/******* EXERCICE 1 ********/
/*
int main() {
    int a = 0, b = 0;
    printf("Saisissez deux entiers\n");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("L'entier le plus grand est %d", a);
    }
    else if (a < b) {
        printf("L'entier le plus grand est %d", b);
    }
    else {
        printf("Les deux entiers sont égaux");
    }
    return 0;
}
*/
/******* EXERCICE 2 ********/

/*
 int main()
{
    int longueur = 0, largeur = 0, perimetre = 1, aire = 1;
    printf("Saisissez la largeur du rectangle\n");
    scanf("%d", &largeur);
    printf("Saisissez la longueur du rectangle\n");
    scanf(" %d", &longueur);
    perimetre *= 2 * (largeur + longueur);
    printf (" Le périmètre du rectangle est %d\n", perimetre);
    aire *= (longueur * largeur);
    printf (" L'aire du rectangle est %d\n", aire);
    return 0;
}
 */

/******* EXERCICE 3 ********/

/*
 int main()
{
    const trois = 3;
    int n = 0;
    printf("Saisissez un entier\n");
    scanf("%d", &n);
    if (n >= 10 && n % trois == 0)
    {
        printf("L'entier %d est plus grand ou égal à 10 et est divisible par %d\n", n, trois);
    }
    else
    {
        printf("L'entier %d n'est pas est plus grand ou égal à 10 ou n'est pas divisible par %d\n", n, trois);
    }
    return 0;
}
*/

/******* EXERCICE 4 ********/

/*
#define AGE_ENFANT 12
#define AGE_JEUNE 17
#define AGE_ETUDIANT 27
#define AGE_SENIOR 65
#define TARIF_ENFANT 4
#define TARIF_REDUIT 6
#define TARIF_NORMAL 9

int main()
{
    int age = 0, prix = 0;
    printf("Saisissez votre âge\n");
    scanf("%d", &age);
    if (age < AGE_ENFANT )
    {
        prix += TARIF_ENFANT;
    }
    else if (age >= AGE_ENFANT && age < AGE_JEUNE)
    {
        prix += TARIF_REDUIT ;
    }
    else if (age >= AGE_JEUNE && age < AGE_ETUDIANT)
    {
        int reponse = 0;
        printf("Etes vous étudiant (oui = 0, non = 1) ?\n");
        scanf("%d", &reponse);
        if ( reponse == 0)
        {
            prix += TARIF_REDUIT;
        }
        else
        {
            prix += TARIF_NORMAL;
        }
    }
    else if (age >= AGE_SENIOR)
    {
        prix += TARIF_REDUIT ;
    }
    else
    {
        prix += TARIF_NORMAL;
    }
    printf ("Votre tarif est : %d € \n", prix);
    return 0;
}
*/

/******* EXERCICE 5 ********/

/*
 int main()
{
    int n = 0;
    char un [] ="coca", deux [] ="eau", trois [] ="iceTea", dix [] ="cafe", onze [] ="the";
    printf("Entrez le numéro de votre boisson\n");
    scanf("%d", &n);
    if (n == 1)
    {
        printf ("Vous avez demandé : %s" , un);
    }
    else if (n == 2)
    {
        printf ("Vous avez demandé : %s" , deux);
    }
    else if (n == 3)
    {
        printf ("Vous avez demandé : %s" , trois);
    }
    else if (n == 10)
    {
        printf ("Vous avez demandé : %s" , dix);
    }
    else if (n == 11)
    {
        printf ("Vous avez demandé : %s" , onze);
    }
    else
    {
        printf("Erreur");
    }
    return 0;
}
*/

/******* EXERCICE 6 ********/


 int main()
{
    float note1 = 0, note2 = 0, note3 = 0, moyenne = 0;
    printf("Entrez la première note ente 0 et 20\n");
    scanf("%f", &note1);
    while (0 > note1 || note1 > 20) {
        printf("Erreur : rentrez une note entre 0 et 20\n");
        scanf("%f", &note1);
    }
    printf("Entrez la deuxième note ente 0 et 20\n");
    scanf(" %f", &note2);
    while (0 > note2 || note2 > 20) {
        printf("Erreur : rentrez une note entre 0 et 20\n");
        scanf("%f", &note2);
    }
    printf("Entrez la troisième note note ente 0 et 20:\n");
    scanf("%f", &note3);
    while (0 > note3 || note3 > 20) {
        printf("Erreur : rentrez une note entre 0 et 20\n");
        scanf("%f", &note3);
    }
    moyenne = ((note1 + note2 + note3) / (float) 3);
    printf("La moyenne est : %f", moyenne);
		return 0;
}


/******* EXERCICE 7 ********/

/*
 int main()
{
    int nbClasses = 0, nbEleves = 0, total = 0, i = 1;
    printf("Entrez le nombre de classes :\n");
    scanf("%d", &nbClasses);
    for (i = 1; i <= nbClasses; i++)
    {
        printf("Entrez le nombre d'élèves :\n");
        scanf("%d", &nbEleves);
        total += nbEleves;
        nbEleves = 0;
    }

    printf ("Le nombre total d'élèves est : %d\n", total);
    return 0;
}
*/

/******* EXERCICE 8 ********/

/*
 int main()
{
    int n = 0;
    printf("Entrez un entier\n");
    scanf("%d", &n);
    while( n % 2 != 0 || n % 7 != 0 )
    {
        printf("Entrez un entier\n");
        scanf("%d", &n);
    }
    printf("Okay!");
    return 0;
}
*/

/******* EXERCICE 9 ********/

/*
 int main()
{
    int nbPierres = 0, nbEtages = 0, i = 1, res = 1;
    printf("Combien de pierres avez-vous?\n");
    scanf("%d", &nbPierres);
    while (i < nbPierres + 1)
    {
        res += 1;
        i += res * res;
        nbEtages = res - 1;
    }
    printf("Vous pouvez construire %d étages\n", nbEtages);
    return 0;
}
*/

/******* EXERCICE 10 ********/

/*
 int main ()
{
    int n = 0, i = 0, somme = 0, nbElts = 0;
    float moyenne = 0;
    printf("Saisissez un entier positif");
    scanf(" %d", &n);
    somme += n;
    nbElts += 1;
    while (n >= 0)
    {
        printf("Saisissez un entier positif\n");
        scanf(" %d", &n);
        somme += n;
        nbElts += 1;
    }
    moyenne = ((float) (somme - n) / (float) (nbElts - 1));
    printf("La moyenne est %f \n", moyenne);
    return 0;
}
*/