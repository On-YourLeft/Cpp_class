#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class Solution {
    public:
        int romanToInt(string s) 
        {
            int x = s.length();
            vector <char> yep;
            yep = reversal(s);
            int final=0;
            for (int i=0;i<x;i++)
            {
                if (yep[i]=='I')
                {
                    if ((yep[i+1])=='V')
                    {
                        final+=4;
                    }
                    else if ((yep[i+1])=='X')
                    {
                        final+=9;
                    }
                    else
                    {
                        final+=1;
                    }
                }
                else if (yep[i]=='X')
                {
                    if ((yep[i+1])=='L')
                    {
                        final+=40;
                    }
                    else if ((yep[i+1])=='C')
                    {
                        final+=90;
                    }
                    else
                    {
                        final+=10;
                    }
                }
                else if (yep[i]=='C')
                {
                    if ((yep[i+1])=='D')
                    {
                        final+=400;
                    }
                    else if ((yep[i+1])=='M')
                    {
                        final+=900;
                    }
                    else
                    {
                        final+=100;
                    }
                }
                else
                {
                    switch (yep[i])
                    {
                        case 'V':
                        final+=5;
                        break;
    
                        case 'L':
                        final+=50;
                        break;
    
                        case 'D':
                        final+=500;
                        break;
    
                        case 'M':
                        final+=1000;
                        break;
                    }
                }
            }
            return final;
        }
    
        char letter(string s)
        {
            return s.front();
        }
    
        vector<char> reversal(string s)
        {
            vector <char> v;
            int x = s.length();
            for (int i=0;i<x;i++)
            {
                v.push_back(letter(s));
                s.erase(i);
            }
            return v;
        }
    };
    
int main()
{
    string s = "MCMXCIV";
    Solution sol;
    cout<<sol.romanToInt(s);
}