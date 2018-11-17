#include<iostream>
#include<map>
/*Print all possible words from phone digits
0, 1 - NULL 2 – ABC, 3 – DEF, 4 – GHI, 5 – JKL, 6 – MNO, 7 – PQRS, 8 – TUV,
9 – WXYZ. We need to print all possible words with given number.
If 0 or 1 comes we need to break as there will no iteration for these digits.*/
using namespace std;
map<int,string>m;//store in map m
void rec(int index,string s,string h)
{//When we reach at the last character,
//we print the word with all possible characters for last digit and return
  if(index == s.length())
    {
     cout<<h<<endl; //print
     return ;
    }
    //loop for all charcters according to given digits
int digit = s[index] -'0';
    for(int i = 0 ; i < m[digit].length(); i++)
    {
            h += m[digit][i];

        rec(index+1,s,h);
         // Deletes all characters except h.size-1
        h.erase(h.size()-1);
    }
}
int main()
{
    string s;
    cin >> s;
    string h = "";
    //map<string,int> m;
    m[0] = "0";
    m[1] = "1";
    m[2] = "abc";
    m[3] = "def";
    m[4] = "ghi";
    m[5] = "jkl";
    m[6] = "mno";
    m[7] = "pqrs";
    m[8] = "tuv";
    m[9] = "wxyz";
    rec(0,s,h);
}
