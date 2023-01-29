#include <iostream>
#include <fstream> //to be able to read a file
#include <vector> //to be able to have a dynamic array.

using namespace std;

int occurance (vector<string> array, string word){
    int count = 0;
    for(int i = 0; i < array.size();i++){
        if (array[i] == word ){
            count += 1;
        }

     }

    return count ;
}

int main (){
    //initialize vector
    ifstream myfile;

    myfile.open("words.txt");

    string line ;

    vector<string> array;//empty vector 
    

    while(myfile >> line){//reads in words and stores them in a dynamic array

        array.push_back(line);  
    }

        myfile.close();
    
    //prompt user 
    string word;
    cout << "what word are we looking for?:";
    cin >> word;

    int count = occurance(array,word);// calls function to check for occurances and saves returned value


    cout << "occurances = " << count << endl;//result909o-

    return 0;
}