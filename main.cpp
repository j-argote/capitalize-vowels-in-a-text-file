#include <iostream> 
#include <fstream>
#include <vector>
#include <cctype>
using namespace std;

int main(){
  ifstream inFS;
  ofstream outFS;
  string word, textFile;
  vector<char> vowels{'a', 'e', 'i', 'o', 'u'};

  //read in a string; which is the text file use want to open
  cin >> textFile;

  //open text file to read
  inFS.open(textFile);
  if(!inFS.is_open()){
    cout << "could not open read file." << endl;
    return 1;
  }
  //open text file for writing
  outFS.open("output.txt");
  if(!outFS.is_open()){
    cout << "could not open output file" << endl;
    return 1;
  }
  
  //read in a text file
  //capatalize all the vowels in the text
  //save text in new file call output.txt
  inFS >> word;
  while(!inFS.fail()){
    for(int i = 0; i < word.size(); i++){
      for(int j = 0; j < vowels.size(); j++)
        if(tolower(word.at(i)) == vowels.at(j)){
          word.at(i) = toupper(word.at(i));
        }
    }
    //write to output file
    outFS << word << " ";
    //get next word in text file
    inFS >> word;
  }

  //error check
  if(!inFS.eof()){
    cout  << "Input failed before reaching end of file" << endl;
  }

  //close read file and write file
  inFS.close();
  outFS.close();
  return 0;
}