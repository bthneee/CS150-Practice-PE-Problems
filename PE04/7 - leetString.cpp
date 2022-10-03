string strToLeet(string str, bool flag = true) 
{
    string result;
    char ch;
    // run through string
    for(size_t i = 0; i < str.size(); ++i)
    {
        ch = str[i];
        // return char
        if(!flag) {result += ch;}
        // add "0"
        else if(ch == 'o') {result += "0";} 
        // add "1"
        else if(ch == 'l') {result += "1";} 
        // add "3"
        else if(ch == 'e') {result += "3";} 
        // add "4"
        else if(ch == 'a') {result += "4";} 
        // add "7"
        else if(ch == 't') {result += "7";} 
        // add "z" if last char of word is 's'
        else if(ch == 's' && (i == str.size()-1 || str[i+1] == ' ')) 
        {result += "z";} 
        // return char
        else {result += ch;}
    }
    return result;
}
