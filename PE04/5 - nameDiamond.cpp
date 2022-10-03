string nameDiamond(const string& s)
{
   string name = "";
   
   // run through each char in string
   for(size_t i = 0; i < s.size();i++)
   {
       for(size_t j = 0;j <= i; j++)
       {
          //print letters in name one at a time
           name += s[j];
       }
       // new line
       name += "\n";
   }
   
   for(size_t i = 1;i < s.size(); i++)
   {
       for(size_t j = 0;j < s.size(); j++)
       {
           if(j >= i)
           {
               name += s[j];
           }
           else
           {
               name += " ";
           }
       }
       name += "\n";
   }
   return name;
}
