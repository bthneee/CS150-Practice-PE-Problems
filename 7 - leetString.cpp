string strToLeet(string str, bool flag = true) 
{
    string result;
    char ch;
    for(size_t i = 0; i < str.size(); ++i)
    {
        ch = str[i];
        if(!flag) {result += ch;} 
        else if(ch == 'o') {result += "0";} 
        else if(ch == 'l') {result += "1";} 
        else if(ch == 'e') {result += "3";} 
        else if(ch == 'a') {result += "4";} 
        else if(ch == 't') {result += "7";} 
        else if(ch == 's' && (i == str.size()-1 || str[i+1] == ' ')) 
        {result += "z";} 
        else {result += ch;}
    }
    return result;
}
