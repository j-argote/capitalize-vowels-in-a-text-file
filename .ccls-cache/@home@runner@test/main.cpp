#include <iostream> 
#include <fstream>
#include <vector>
#include <cctype>
using namespace std;

int main(){
  ifstream inFS;
  ofstream outFS;
  string word;
  vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
  
  inFS.open("string4.txt");
  if(!inFS.is_open()){
    cout << "could not open read file." << endl;
    return 1;
  }
  outFS.open("output.txt");
  if(!outFS.is_open()){
    cout << "could not open output file" << endl;
    return 1;
  }
  
  //read in a text file
  //capatalize all the vowels in the text
  inFS >> word;
  while(!inFS.fail()){
    for(int i = 0; i < word.size(); i++){
      for(int j = 0; j < vowels.size(); j++)
        if(tolower(word.at(i)) == vowels.at(j)){
          word.at(i) = toupper(word.at(i));
        }
    }
    outFS << word << " ";
    inFS >> word;
  }
  
  if(!inFS.eof()){
    cout  << "Input failed before reaching end of file" << endl;
  }
  //capatalize all the vowels in the text
  //save text in new file call output.txt

  inFS.close();
  outFS.close();
  return 0;
}