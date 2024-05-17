bool isPerfectSquare(long int num) {
   long int i=1;

    while((i*i)<=num)
    {
        if((i*i)==num)
        {
            return true;
            break;
        }
        else
        {i++;} 
    }
    return false;
}