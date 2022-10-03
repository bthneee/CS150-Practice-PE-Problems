void crazyCaps(string& str)
{
    // run through each char in string
    for(size_t i = 0; i < str.size(); i++)
    {
        // if position is even
        if(i % 2 == 0)
        {
            // if char is uppercase
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                // make lowercase
                str[i] = (str[i] + 32);
            }
        }   
        // if position is odd
        else
        {
            // if char is lowercase
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                // make uppercase
                str[i] = (str[i] - 32);
            }          
        }       
    }

}
