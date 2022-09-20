
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