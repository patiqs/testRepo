char **concat(char *t[], int s, int o){
    char **uj;
    int i,j, hossz;
    uj = (char **) malloc(s * sizeof(char *));

    for(i=0;i<s; i++){
        hossz= o;
        for(j=0;j < o; j++)
            hossz+=strlen(t[i*o + j]);
        uj[i]= (char *)malloc((hossz+1) * sizeof(char));

        for(j=0;j<o; j++){
            if(j==0){
                strcpy(uj[i],t[i*o + j]);
                }
            else{
                strcat(uj[i],t[i*o +j] );
            }
        }
    }
return uj;
}
