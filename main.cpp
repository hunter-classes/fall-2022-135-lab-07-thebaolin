#include <iostream>
#include "funcs.h"
#include <fstream>
using namespace std;

//added random change
int main(){
    cout<<"removeLeadingSpaces (d     sdaint x = 1;\n  happy halloween!)"<<endl;
    cout << "\n-----------------------------"<<endl;
    cout<<"New Result: " << removeLeadingSpaces("d     sdaint x = 1;\n  happy halloween!")<<endl;
    cout << "\n-----------------------------"<<endl;

    cout<<"Count Char"<<endl;
    cout<<"EXAMPLE: (int main(){{{}, '{')"<<endl;
    cout<<"Char's Counted: " << countChar("int main(){{{}", '{')<<endl;
    cout << "\n-----------------------------"<<endl;
    cout<<"Unindent"<<endl;
    cout<<removetabs();
    cout << "\n-----------------------------"<<endl;
    cout<<"Indents"<<endl;
    cout<<addtabs();
}