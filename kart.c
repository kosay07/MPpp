#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  TAILLE_MAX 100

typedef struct{
    int id;
    char nom[50];
}categorie;

typedef struct{
    int id;
    char nom[50];
    int idcategorie;
}kart;

typedef struct{
    int id;
    char nom[50];
    char prenom[50];
    int niveau;
}pilote;

typedef struct{
    int id;
    char nom[50];
}course;

categorie tabcategories[TAILLE_MAX];
int nbcategories =0;
int prochainIdcategorie =1;

kart tabcarts[TAILLE_MAX];
int nbkarts = 0;
int prochainIdkart= 1;
pilote tabpilotes[TAILLE_MAX];
int nbpilotes =0;
int prochainIdpilote =1;
course tabcourse[TAILLE_MAX];
int nbcourses =0;
int prochainIdcourse =1;


void ajoutercategorie(){
    categorie c;
    c.id=prochainIdcategorie++;
    printf("nom de la categorie :");
    scanf("%s",&c.nom);
    tabcategories[nbcategorie]=c;
    nbcategories++,
    printf("categorie ajoutee avec succes !")
}

void affichercategories(){
    printf("\n----LISTES DES CATEGORIES----\n");
    for(i=0 ;i<nbcategories;i++){
        printf("ID: %d |nom: %s \n",tabcategories[i].id,tabcategories[i].nom);
    }
}


void ajouterkart(){
    kart k;
    k.id=prochainIdkart++;
    printf("nom du kart :");
    scanf("%s",&k.nom);
    printf("choisissez une categorie existante:\n");
    for (i=0;i< nbcategories;i++){
        printf("%d.%s (ID:%d)\n",i+1,tabcategories[i].nom,tabcategories[i].id);
    }
    int choix;
        printf("votre choix :");
        scanf("%d",&choix);
        k.idcategorie = tabcategories[choix-1].id;
        tabkarts[nbcartes]=k;
        nbcarts++;
        printf("kart ajoute avec succes !\n");

}