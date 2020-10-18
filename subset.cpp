#include <iostream>
#include <vector>
using namespace std;

void subset(int , int , char[]);

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
      
      
      char s[5];
      
      subset(0,0,s);
      
      cout << counter;
}


void subset(int k, int i, char s[])
{

	if(k==5)
	{
	   	for(int i=0 ; i<5 ; i++)
	   	 cout << s[i] << " ";
	   	 counter++;
	   	 cout << endl;
	}
	
	else
	{
		for(;i<str.size();i++)
		{
			s[k] = str[i] ;
			
			subset(k+1,i+1,s);
		}
	}
}
