struct stack
{
    int top;
    int size;
    char *a;
};
char* removeStars(char* s) {
    struct stack *p=(struct stack *)malloc(sizeof(struct stack));
    p->top=-1;
    p->size=strlen(s)-1;
    p->a=(char *)malloc((p->size+2)*sizeof(char));

    int i=0;
    while(i<strlen(s))
    {
        if(s[i]!='*')
        {
            p->top++;
            p->a[p->top]=s[i];
        }
        else
        p->top--;
        i++;
    }
    p->top++;
    p->a[p->top]='\0';
    return p->a;
}