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
	
	while( getline( in, line ) ) // getline returns true if read successfully
		v.push_back( line ); // add the line to the end of v

	// add line numbers:
    int j = 0;
	for( int i = v.size(); i != 0; i-=1 ){

		cout << i << ": " << v[j] << endl;
        j += 1;
}
return 0;
}