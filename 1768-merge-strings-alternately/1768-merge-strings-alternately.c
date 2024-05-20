

char * mergeAlternately(char * s1, char * s2){
     char *p=(char *)malloc(202*sizeof(char));

     int i=0,j=0,k=0;

    while(s1[i]!='\0' || s2[j]!='\0')
    {
        if(s1[i]!='\0')
        {
            p[k]=s1[i];
            i++;
            k++;
        }
        if(s2[j]!='\0')
        {
            p[k]=s2[j];
            j++;
            k++;
        }
    }
    p[k]='\0';
    return p;

}