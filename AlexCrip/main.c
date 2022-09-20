#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
double p[1000][1000];
long int m=0;

typedef struct nod {
    char cuvant[255];
    struct nod *urm;
}NOD;

NOD *prim,*ultim;

int crip(char a[],double b[1000][1000]) {
    int l,k=0;
    l=strlen(a);

    if(l%2==0) {
        if(l==2) {
            char aux;
            aux=a[0];
            a[0]=a[1];
            a[1]=aux;
        }
        else {
            for(int i=0;i<l/2-1;i++){
                char aux;
                aux=a[i];
                a[i]=a[i+1];
                a[i+1]=aux;
            }
            for(int i=l/2;i<l-1;i++){
                char aux;
                aux=a[i];
                a[i]=a[i+1];
                a[i+1]=aux;
            }
        }
    }
    else {
        if(l==3){
            char aux;
            aux=a[l-1];
            a[l-1]=a[l/2];
            a[l/2]=aux;
        }
        if(l!=1) {
            for(int i=0;i<l/2-1;i++){
                char aux;
                aux=a[i];
                a[i]=a[i+1];
                a[i+1]=aux;
            }
            for(int i=l/2+1;i<l-1;i++){
                char aux;
                aux=a[i];
                a[i]=a[i+1];
                a[i+1]=aux;
            }
        }
    }

    for(int i=0;i<l;i++)
        b[i][k++]= (int)(a[i]);
    for(int i=0;i<l;i++){
        for(int j=i;j<k;j++)                            //TRANSFORMARE COD ASCII
            if(i==j)
                p[m++][10]=b[i][j];
    }
}

int creare(NOD *p,char *k){
    if(k!=0){
        strcpy(p->cuvant,k);
        printf("\n");
        return 1;
    }
    else return 0;
}

NOD *start(char *k) {
    extern NOD *prim,*ultim;
    NOD *p;
    int n;
    n=sizeof(NOD);
    p=(NOD*)malloc(n);
    if (p!=0 && (creare(p,k)==1)) {
        if(prim==0) {
            prim =ultim =p;
            p->urm=0;
        }
        else {
            p->urm=prim;
            prim=p;
        }
        return p;
    }
    if(p==0){
        printf("Eroare \n");
        exit(1);
    }
    free(p);
    return 0;
}
void s() {
    extern NOD *prim,*ultim;
    NOD *p;
    if(prim==0)
        return ;
    p=prim;
    prim=prim->urm;
    free(p);
    if(prim==0)
        ultim = 0;
}

void ames(char a[]) {
    int l;
    l = strlen(a);
    if (l % 2 == 0)
    {
        if (l == 2) {
            char aux;
            aux = a[0];
            a[0] = a[1];
            a[1] = aux;
        } else {
            for (int i = 0; i < l / 2 - 1; i++) {
                char aux;
                aux = a[i];
                a[i] = a[i + 1];
                a[i + 1] = aux;
            }
            for (int i = l / 2; i < l - 1; i++) {
                char aux;
                aux = a[i];
                a[i] = a[i + 1];
                a[i + 1] = aux;
            }
        }
    }
    else
    {
        if (l == 3) {
            char aux;
            aux = a[l - 1];
            a[l - 1] = a[l / 2];
            a[l / 2] = aux;
        }
        if (l != 1) {
            for (int i = 0; i < l / 2 - 1; i++) {
                char aux;
                aux = a[i];
                a[i] = a[i + 1];
                a[i + 1] = aux;
            }
            for (int i = l / 2 + 1; i < l - 1; i++) {
                char aux;
                aux = a[i];
                a[i] = a[i + 1];
                a[i + 1] = aux;
            }
        }
    }
}

void dcrip(double p[1000][1000],int m,char p1[1000]){
    char c[] = " aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ0123456789!@#$%^&*()_-+=|\\:;\"\',<.>/?";
    char *k;
    for (int i=m-1;i>=0;i--) {
        for(int j=0;j<strlen(c);j++){
            if((int)(p[i][10]) == (int)(c[j])){
                p1[i]=c[j];
            }
        }
    }
    k=strtok(p1," ");
    while(k!=NULL){     //pentru cuvinte care au lungimea mai mare de 5
        if(strlen(k)>5)
            for(int i=0;i<strlen(k)/2-1;i++)
                ames(k);
        else
            ames(k);
        printf("%s ",k);
        k=strtok(NULL," ");
    }
}

int main() {
    char parola[]="1",p1[1000],*k,prl[20];
    char a[200][20],ok[1];                  //Exemplu pentru a doua metoda:1178311611032101114979811097116111114100329711532105118971103297991189711697110
    int nr=0;                               //(Sunt nerabdator sa vina vacanta)
    prim=ultim=0;                           //Un alt exemplu: 1101021111147310911610599979732115101101116329711610910110597114321099710132114101102112101971169711432101100329799100110329710932116115117105
                                            //(Informatica este materia mea preferata de cand ma stiu)
    printf(""
           " __          __         _                                         _           \n"
           " \\ \\        / /        | |                                       | |          \n"
           "  \\ \\  /\\  / /    ___  | |   ___    ___    _ __ ___     ___      | |_    ___  \n"
           "   \\ \\/  \\/ /    / _ \\ | |  / __|  / _ \\  | '_ ` _ \\   / _ \\     | __|  / _ \\ \n"
           "    \\  /\\  /    |  __/ | | | (__  | (_) | | | | | | | |  __/     | |_  | (_) |\n"
           "     \\/  \\/      \\___| |_|  \\___|  \\___/  |_| |_| |_|  \\___|      \\__|  \\___/ \n"
           "                                                                              \n"
           "                                                                              \n");
    printf(""
           "             _                  _____          _         \n"
           "     /\\     | |                / ____|        (_)        \n"
           "    /  \\    | |   ___  __  __ | |       _ __   _   _ __  \n"
           "   / /\\ \\   | |  / _ \\ \\ \\/ / | |      | '__| | | | '_ \\ \n"
           "  / ____ \\  | | |  __/  >  <  | |____  | |    | | | |_) |\n"
           " /_/    \\_\\ |_|  \\___| /_/\\_\\  \\_____| |_|    |_| | .__/ \n"
           "                                                  | |    \n"
           "                                                  |_|    \n");
    printf("\n \nDoriti sa criptati un mesaj(1) sau doriti sa decriptati un mesaj (2) ? (1/2) ");
    gets(ok);
    if(strcmp(ok,"1")==0){
        printf("Pentru criptarea mesajelor introduceti cheia :");
        gets(prl);
        if(strcmp(parola,prl)==0) {
            //CITIRE MESAJ
            printf("\nIntroduceti mesajul : ");
            gets(p1);
            k = strtok(p1," ");
            while(k!=NULL) {
                strcpy(a[nr++],k);
                start(k);                         //stocarea in stiva
                k = strtok(NULL," ");
            }
            for(int i=0;i<nr;i++) {
                crip(a[i],p);
                printf("Cuvantul nr.%d: %s \n",i+1,a[i]);
                if(i!=nr-1)
                    p[m++][10]=32;
            }
            printf("\n");
            printf("Mesajul in cod ascii este: \n");
            for(int i=0;i<m;i++){
                if(p[i][10]==32){
                    printf("\n");
                    continue;
                }
                printf("%g ",p[i][10]);
            }
            printf("\n");
            printf("*** Codul rezultat este:");
            for (int i = 0; i < m; i++)
                printf("%g", p[i][10]);
            printf("\n");
            printf("Mesajul din cod ascii in alphanumerice este: \n");
            dcrip(p,m,p1);
            for(int i=0;i<nr;i++)
                s();
        }
        else{
            printf("\n");
            printf("Parola introdusa gresit. Reporniti programul.");
        }
    }
    else if(strcmp(ok,"2")==0) {
        printf("\nPentru decriptarea mesajului introduceti cheia :");
        gets(prl);
        if(strcmp(parola,prl)==0) {
            printf("\nIntroduceti mesajul criptat(inclusiv codul ascii al spatiului): ");
            gets(p1);
            for (int i=0;i<strlen(p1);i++){
                if(p1[i]!='1'){
                    p[m][10]=(p1[i]-'0')*10 + (p1[i+1]-'0');
                    m++;
                    i++;
                }
                else {
                    p[m][10]=(p1[i]-'0')*100 + (p1[i+1]-'0')*10 + (p1[i+2]-'0');
                    m++;
                    i+=2;
                }
            }
            memset(p1,0,strlen(p1));            //golesc p1
            dcrip(p,m,p1);
        }
    }
    return 0;
}