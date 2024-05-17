

bool canConstruct(char * ransomNote, char * magazine){
    int flag=0;
    int i,j,n1=strlen(ransomNote),n2=strlen(magazine);
  
    for(i=0;i<n1;i++)
    { for(j=0;j<n2;j++)
    { if(ransomNote[i]==magazine [j])
        {
          magazine[j]='0';
          flag=0;
          break;
        }
       else flag=1;
     }
      if(flag==1)
      return false;
    }
    return true;
}