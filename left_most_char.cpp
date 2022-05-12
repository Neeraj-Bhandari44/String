//left most non- repeating charater int the string
#include <iostream>
using namespace std;
const int CHAR =256;
 char nonrepeatingCharacter(string S)
    {
       int count[CHAR]={0};
       for(int i=0;i<S.length();i++){
           count[S[i]]++;
       }
       for(int i=0;i<S.length();i++)
       {
           if(count[S[i]]==1)
           return S[i];
       }
       return '$';
    }
int main()
{
    string s;
    cin>>s;
    char a=nonrepeatingCharacter(s);
    cout<<a<<endl;
    return 0;
}