#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <regex>
#include <iostream>
#include <list>
#include <sstream>
#include <typeinfo>
#include <iterator>
#include <vector>
using namespace std;

map<string, string> tokens_map;
vector<string> tokens;
vector<string> definition;


void lexer(string input){

  string token ="";
  int len = input.length();
  
  for (auto i=0; i<len; i++){
    if (input[i] == ' '){
      cout<<"TOkens: "<<token<<endl;
      tokens.push_back(token);
      token="";
    }
    else{
      token+=input[i];
    }
  }
  cout<<"TOkens: "<<token<<endl;
  tokens.push_back(token);
  return;
}

int main(){
  
  string line;
  while (!cin.eof())
{
    
    getline(cin, line);

    if (cin.fail())
    {
        //error
        break;
    }
}
    for (auto x : line){
    if (x == ' '){
      cout<<"Word: "<<token<<endl;
      if (token == "LET" || token == "PRINT" || token == "PRINTLN"){
        tokens.push_back(token);
        // order[token]= "KEYWORD";
        cout<<token<<" is a keyword"<<endl;
      }
      else if (token == "A" || token == "B" || token == "C"){
        // order[token] = "Variable";
        tokens.push_back(token);
        cout<<token<<" is a variable"<<endl;
      }
      else if (token == "=" || token == "+" || token == "-" || token == "/"
               || token == "*"){
        tokens.push_back(token);
        cout<<token<<" is an operator"<<endl;
               }
        else if(token == "5" || token == "7" || token == "10"){
          // order[token] = "INTEGER";
          tokens.push_back(token);
          cout<<token<<" is an integer"<<endl;
        }
      // cout<<"Type: "<<typeid(token).name()<<endl;
      token="";
    }
    else{
      token+=x;
    }
  }
  cout<<"Shabd: "<<token<<endl;
  tokens.push_back(token);
  if (token == "LET" || token == "PRINT" || token == "PRINTLN"){
    // order[token]= "KEYWORD";
    cout<<token<<" is a keyword"<<endl;
  }
  else if (token == "A" || token == "B" || token == "C"){
    // order[token] = "Variable";
    cout<<token<<" is a variable"<<endl;
  }
  else if(token == "5" || token == "7" || token == "10"){
    // order[token] = "INTEGER";
    cout<<token<<" is an integer"<<endl;
  }
  char* tokens[100] = [];
  list<string> tokens;
  int i = 0;
  string token = "";
  for (auto x : line){
    if (x == ' '){
      tokens.push_back(token);
      token=' ';
      i++;
    }
    else{
      token+=x;
    }
  }
  tokens.push_back(token);

  
  
  
  
  lexer(input); 

  vector<string> iterator
  for (auto i = tokens.begin(); i != tokens.end(); i++){
    cout<<i<<endl;
  }
}