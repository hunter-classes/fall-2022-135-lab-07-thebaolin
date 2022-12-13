#include <iostream>
#include "funcs.h"
//#include "funcs.cpp"
#include <fstream>
using namespace std;

//adding this comment for the pull request lab!! ^^ if you see this, hope finals are going well :100:

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
