void crazyCaps(string& str)
{
    for(size_t i = 0; i < str.size(); i++)
    {
        if(i%2==0)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = (str[i]+32);
            }
    }    
    else
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
           str[i] = (str[i]-32);
         }
                
    }
        
}
