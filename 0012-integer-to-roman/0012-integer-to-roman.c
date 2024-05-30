char* intToRoman(int nums) {
    char *r=(char *)malloc(20*sizeof(char));
    int i=0;
    memset (r, 0, sizeof(char)*20);
    while(nums!=0)
    {
        if(nums>=1000)
        {
            nums-=1000;
            r[i++]='M';
        }
        else if(nums>=900)
        {
            nums-=900;
            r[i++]='C';
            r[i++]='M';
        }
        else if(nums>=500)
        {
            nums-=500;
            r[i++]='D';
        }
        else if(nums>=400)
        {
            nums-=400;
            r[i++]='C';
            r[i++]='D';
        }
        else if(nums>=100)
        {
            nums-=100;
            r[i++]='C';
        }
        else if(nums>=90)
        {
            nums-=90;
            r[i++]='X';
            r[i++]='C';
        }
        else if(nums>=50)
        {
            nums-=50;
            r[i++]='L';
        }
        else if(nums>=40)
        {
            nums-=40;
            r[i++]='X';
            r[i++]='L';
        }
        else if(nums>=10)
        {
            nums-=10;
            r[i++]='X';
        }
        else if(nums==9)
        {
            nums-=9;
            r[i++]='I';
            r[i++]='X';
        }
        else if(nums>=5)
        {
            nums-=5;
            r[i++]='V';
        }
        else if(nums==4)
        {
            nums-=4;
            r[i++]='I';
            r[i++]='V';
        }
        else if(nums>=1)
        {
            nums-=1;
            r[i++]='I';
        }
    }
    return r;
}