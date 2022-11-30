#include <iostream>
#include <cctype>
#include <string>
#include "funcs.h" 
#include <fstream>
using namespace std;
//deleting that ^^
string removeLeadingSpaces(string line){
    string newstring = "";
    bool seenchar = false;
    
    for(int i = 0; i < line.length(); i++){
        if(!isspace(line[i]) && !seenchar)
            seenchar = true;
        if(seenchar)
            newstring += line[i];
        if(line[i] == '\n')
            seenchar = false;
    }
    return newstring;
}

int countChar(string line, char c){
    int charcount = 0;

    for(int i = 0; i < line.length(); i++){
        if(line[i] == c)
            charcount++;
    }
    return charcount;
}

string addtabs(){
    string newline = "";
    string newstr = "";
    int counter = 0;

    ifstream badcode("badcode.cpp");
    while(getline(badcode, newline)){ 
        newline = removeLeadingSpaces(newline);
        if(newline[0] == '}')
            counter--;
        
        for(int i = 0; i < counter; i++)
            newstr += '\t';
    
        newstr = newstr + newline + '\n';
        counter += countChar(newline, '{');
    }
    badcode.close();
    return newstr;
}

string removetabs(){
    string result, line; 
    ifstream badcode("badcode.cpp");

        while(getline(badcode,line))
            result += removeLeadingSpaces(line) + "\n";
            
    badcode.close();
    return result;
}
