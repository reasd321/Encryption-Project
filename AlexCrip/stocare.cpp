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