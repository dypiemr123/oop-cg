#include<iostream>
#include<fstream>
using namespace std;

int main(){
  ofstream outputFile("sam.txt");

  outputFile<<"my name is sam."<<endl;
  outputFile<<"l am living in pune."<<endl;

  outputFile.close();
 ifstream inputFile("sam.txt");

  string line;
    while (getline(inputFile, line)) {
        cout << line <<endl;
    }
 return 0;
}