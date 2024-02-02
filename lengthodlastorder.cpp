#include<iostream>
#include<array>
using namespace std;

int main(){
string s="ahmed mohamed";

int k=0,x=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ' && k==1)
            break;
            else if(s[i]!=' ')
            {
                k=1;
                x++;
            }
        }
       cout<<x;
    }


