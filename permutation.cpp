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
    
    int n;
	cin >> n;
	string s2[n]; 
    
     for(int i=0 ; i<n ; i++)
        s += int_to_s(i+1);
        
        
     
    
       
    per(s,0,s.size()-1) ;
 
    return 0;
}

void print1(char a[] , int size )
{
   for(int i=0 ; i<size ; i++)
   cout << a[i] << ' ';
   
   cout << endl;
}

void swap(char &a , char &b)
{
	char c;
	 c=a;
	 a=b;
	 b=c;
}

string int_to_s (int temp){
	 
	 static string ch ="";
	  ch = "";
	 if(temp != 0)
	   {	
	   int_to_s(temp/10);
	        ch += char((temp % 10) + 48);
	   }
	   	  return ch;
}
