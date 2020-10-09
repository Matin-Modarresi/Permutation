#include <iostream>
using namespace std;

void print(int [] , int);
void swap(int * , int *);
void permutation(int [] , int , int );



int main()
{
	int number;	
	cin >> number;
	int  array[number]; 
  
    
    
	for(int i=0 ; i<number ; i++)
	  array[i]=i+1;
	  

	
	
	  permutation(array , 0 , number-1 );
}

void print(int a[] , int size)
{
	for(int i=0 ; i<size; i++)
	  cout << a[i] << ' ';
	  cout << endl;
}

void swap(int *a , int *b)
{
	int c;
	 c = *a;
	 *a = *b;
	 *b = c;
}



void permutation(int a[] , int n , int last_index )
{
   int a2[last_index+1] ;
	
	if(n == last_index)
		  print(a,last_index+1);

	       
	
		   
		
	else
		for(int i=n ; i<=last_index ; i++ )
		{
			if(n!=i)
			for(int j=0 ; j<=last_index ; j++)
		       a[j]=a2[j] ;
		
			swap((a+i)	, (a+n)) ;
			
			//this is true too
	       /*	int c = a[i];  
			a[i] = a[n];
			a[n] = c;*/
			
		    for(int j=0 ; j<=last_index ; j++)
		        a2[j] = a[j];
			
			permutation(a,n+1,last_index);
		
		}
		
		 
}

