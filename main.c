#include <stdio.h>
#include <stdlib.h>

//Question 1.2
// prototype de la function Affiche

typedef struct Coureur Coureur;

struct Coureur{
        int NCoureur;
        int Chrono;
        };

void affiche(Coureur *T,int indice,int n);

int main()
{
    //Question 1.1 debut
    //typedef struct Coureur Coureur;
    //    struct Coureur{
    //        int NCoureur;
    //        int Chrono;
    //    };
    //Question 1.1 fin
    int indice =0;
    int n =0;
    Coureur T[4];
    //Question 1.2 debut
    int i;
    for(i = 0; i<4; i++){
       printf("entrer le numero d'un coureur : ");
       scanf("%d",&T[i].NCoureur);
       printf("son chrono : ");
       scanf("%d",&T[i].Chrono);
       ++n;
    }
    //Question 1.2 fin
    //Question 1.4 debut
    printf("Affichage des donnees : \n");
    affiche(T, indice, n);
    //Question 1.4 fin
    return 0;
}

//Question 1.3 debut

void affiche(Coureur *T,int indice,int n){
    if(indice==(n-1)){
        printf("coureur %d : ", T[3].NCoureur);
        printf("%d secondes\n", T[3].Chrono);
    }
    else{
        printf("coureur %d : ", T[indice].NCoureur);
        printf("%d secondes\n", T[indice].Chrono);
        affiche(T,++indice,n);
    }

}
//Question 1.3 fin
