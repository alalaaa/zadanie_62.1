#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
	int t;
	int max,min;
	fstream plik;
	ofstream plik1;
	plik.open("liczby1.txt");
	plik1.open("wyniki.txt");
	if( plik.good() == true )
	if( plik1.good() == true )
	
	
 while(plik>>t)
 {
  if(max<t)
  {
   max=t;
  }
  if(min>t)
  {
  	min=t;
  }
 }
 cout <<"MAX: "<<oct <<max<<endl;
 cout <<"MIN: "<<oct <<min;
 
 plik1<<oct<<max<<endl;
 plik1<<oct<<min;
 
	
	
	
	plik.close();
	plik1.close();
	return 0;
}
