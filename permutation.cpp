#include <iostream>
#include <string>
using namespace std;

string int_to_s (int);

void per(string s,int k,int n)
{
    if(k==n)
    {
    	cout << s << endl;
    }
    else
    {
        for(int i=k;i<=n;i++)
        {
          char c = s[i];
          s[i]=s[k];
          s[k] = c;
           per(s,k+1,n);
        }
    }
}
int main(void)
{
    string s;
    cin >> s;     
       
    per(s,0,s.size()-1) ;
 
    return 0;
}

void print1(char a[] , int size )
{
   for(int i=0 ; i<size ; i++)
   cout << a[i] << ' ';
   
   cout << endl;
}


