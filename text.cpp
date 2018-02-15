#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   
   ofstream myfile ("abc.txt");
   if (myfile)
   {
	myfile<<a<<" "<<b<<" "<<c;//writing data to text file
	
    }
    else 
    cout<<"error opening abc.txt";
    myfile.close();  
 
   return 0;
}
