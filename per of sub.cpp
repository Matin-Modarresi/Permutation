#include <iostream>
#include <vector>
#define sub 4
using namespace std;

void subset(int , int , char[]);
void permutation(string, int , int );

int counter = 0;

vector<char>str;
vector<char>::reverse_iterator itr;


int main()
{


	
	char ch;

    do
	 {	
	    bool flag = 1;
	 	cin >> ch;
	 
	 	
	 	for( itr= str.rbegin() ; itr != str.rend() ; itr++)
	 	   if(ch==*itr) 
	 	     { 
	 	        flag = 0;
	 	        break;
			 }
	 	
	 	   if(flag)
	 	     str.push_back(ch);
	 	
	 }while(cin.get()!='\n');
      
      
      char s[sub];
      
      subset(sub,0,s);
      
      

      cout << counter;
}


void subset(int k, int i, char s[])
{

	if(k==0)
	{
		string str = "";
	   	for(int i=0 ; i<sub ; i++)
	   	  str+=  s[i]  ;
	   	 
	   	 cout << "Subset is:\t" << str << "\n";
	   	 
	   	 cout << "Permutations is:\n";
	   	 permutation(str,0,str.size()-1);
	   	 cout << "\n-------------------------\n";
	   	 
	   	 
	   	 counter++;
	}
	
	else
	{
		for(;i<str.size();i++)
		{
			s[k-1] = str[i] ;
			
			subset(k-1,i+1,s);
		}
	}
}



void permutation(string s,int k,int n)
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
           permutation(s,k+1,n);
        }
    }
}
