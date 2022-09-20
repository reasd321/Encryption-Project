
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