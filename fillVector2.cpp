#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> v;
	ifstream in( "code.cpp" );//1) First, make it read and print the lines of a file called "code.cpp".
	string line;
	
	while( getline( in, line ) ){ // getline returns true if read successfully
		v.push_back( line ); // add the line to the end of v
    }
string singleLine = "";
	for( int i = 0; i < v.size(); i++){
    
        singleLine += v[i];

}

cout << singleLine << endl;
return 0;
}
