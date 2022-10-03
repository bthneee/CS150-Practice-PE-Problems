string nameDiamond(const string& s)
{
   string name = "";
   for(size_t i = 0; i < s.size();i++)
   {
       for(size_t j=0;j <= i;j++)
       {
           name += s[j];
       }
       name += "\n";
   }
   for(size_t i=1;i<s.size();i++)
   {
       for(size_t j=0;j<s.size();j++)
       {
           if(j>=i)
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
