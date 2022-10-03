int factorCount(int n,int& count)
{
    count = 1; 
    int largest = 1; 
    for (int i = 1; i < n - 1; ++i)
    {
        if(n % i == 0)
        {
            largest = i;
            count++;
        }
    }
    if(largest == 1) {return -1;}
    return largest; 
}
