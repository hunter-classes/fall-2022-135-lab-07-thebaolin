#include <iostream>
#include <cctype>
using namespace std;

string removeLeadingSpaces(string line){
    string newstring = "";
    char character;
    bool removespaces;
    for(int i = 0; i < line.length(); i++){
        character = line[i];

        if(line[i] == "\n")
            removespaces = true;
        else if(!line[i] == "\n")
            removespaces = false;

        if(!isspace(character) || line[i] != '\n' || !removespaces)
                newstring += line.substr(i,1);
        }
    return newstring;
}

int countChar(string line, char c){
    int opencount = 0, closedcount = 0, charcount = 0;

    for(int i = 0; i < line.length(); i++){
        if(line[i] == '{'){
            opencount++;
            if(line[i])
        }
        if(line[i] == '}'){
            closedcount++;
        }
        if(line[i] == c){
            charcount++;
        }
    }

    return charcount;
}