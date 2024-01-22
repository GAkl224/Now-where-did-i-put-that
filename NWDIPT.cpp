#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>

using namespace std;

//global var
string lines;
string word;
char letter;

//string
int findString(string a, string str)
{
   
  int find = str.find(a);
  if(find != string::npos)
  {
    cout << "First found at" << find << endl;
  }
  else
  {
    cout << "\nNot Found";
  }
   return 0;
}

//character
int findString(char a, string str)
{
    int here = str.find(a);
    if (here != string::npos)
    {
        cout << "First found at " << here << endl;
    }
    else
  {
    cout << "\nNot Found";
  }

    return 0;
}


int main()
{
    int opt;
    
    
    cout << "Choose an option\n1. Find a string \n2. Find a character\n" << endl;
    cin >> opt;

    string line;
    cout << "\nEnter a string: " << endl;
    cin >> lines;

    //find a commom string
    if(opt == 1)
    {
        cout << "\nEnter a word to find: " << endl;
        cin >> word;
        
        findString(word, lines);
    }

    //find a common char
    if(opt == 2)
    {
        cout << "\nEnter a character to find: " << endl;
        cin >> letter;
        findString(letter, lines);
    }

    return 0;

}