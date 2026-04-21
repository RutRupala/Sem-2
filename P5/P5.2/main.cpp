#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file("input.txt");
    if(!file){
        cerr << "Error opening file!" << endl;
        return 1;
    }
    string line;
    int lineCount = 0;
    int wordCount = 0;
    int charCount = 0;
    while(getline(file, line)){
        cout << line << endl;
        lineCount++;
        for (int i = 0; i < line.size(); i++)
        {
            if (line[i] == ' ' || line[i] == '\t')
            {
                wordCount++;
            }
            if (line[i] != ' ' && line[i] != '\t')
            {
                charCount++;
            }
            
            
        }
        
    }
    wordCount++; 
    cout << "Total lines: " << lineCount << endl;
    cout << "Total words: " << wordCount << endl;
    cout << "Total characters: " << charCount << endl;
    file.close();
    return 0;
}