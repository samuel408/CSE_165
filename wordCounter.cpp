#include <iostream>
//to be able to read a file
#include <fstream>

using namespace std;

int main (){
    ifstream myfile;

    myfile.open("words.txt");

    string line ;
    int count = 0;

    while(myfile >> line){

        count += 1;// counts the amount of words in file.
       
    }


        myfile.close();


    cout << "amount of words in file = " << count << endl;


    return 0;
}