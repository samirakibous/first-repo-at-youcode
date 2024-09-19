#include<stdio.h>
#include<stdlib.h>

typedef struct date{
    int jour,mois,annee;
}date;

date creer_date(int jr,int ms,int an){
    date date_nouvelle;
    date_nouvelle.jour=jr;
    date_nouvelle.mois=ms;
    date_nouvelle.annee=an;

    return date_nouvelle;
}

int main(){

    date date1=creer_date(5,3,2008);
    printf("la date est: %d/%d/%d",date1.jour,date1.mois,date1.annee);

    return 0;
}