#include <iostream>
#include <string>
#include <re2/re2.h>
#include <cassert>
#include <chrono>

using namespace std;


int main(){
  int index = 0;
  cout << "num:" << endl;
  cin >> index;
  auto start = std::chrono::high_resolution_clock::now();

  switch(index){
  case 1:
  {
    for(int i = 0; i < 10000; ++i){
      if(re2::RE2::FullMatch("aaaaaaaaaaaac", "(?:(?:(?:a)*)*)*c"))
        cout << "Matched.";
      else
        cout << "UnMatched.";
    }
    break;
  }
  case 2:{
    for(int i = 0; i < 10000; ++i){
      if(re2::RE2::FullMatch("aaaaaaaaaaaaaaaaaaaaaaaaaac", "a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?c"))
        cout << "Matched.";
      else
        cout << "UnMatched.";
    }
    break;
  }
  case 3:{
    for(int i = 0; i < 10000; ++i){
      if(re2::RE2::FullMatch("aaaaaaaaaaaaaaaaaaaaaaaaaac", "a+a+a+a+a+a+a+a+a+a+a+a+a+a+c"))
        cout << "Matched.";
      else
        cout << "UnMatched.";
    }
    break;
  }
  case 4:{
    for(int i = 0; i < 10000; ++i){
      if(re2::RE2::FullMatch("aaaaaaaaaaaaaaaaaaaaaaac", "(?:a+)+c"))
        cout << "Matched.";
      else
        cout << "UnMatched.";
    }
    break;
  }
  case 5:{
    for(int i = 0; i < 10000; ++i){
      if(re2::RE2::FullMatch("aaaaaaaaaaaaaaaaaaaaaaac", "(?:(?:a)+)+c"))
        cout << "Matched.";
      else
        cout << "UnMatched.";
    }
    break;
  }
  case 6:{
    for(int i = 0; i < 10000; ++i){
      if(re2::RE2::FullMatch("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "(?:(?:aa)+)+c"))
        cout << "Matched.";
      else
        cout << "UnMatched.";
    }
    break;
  }
  case 7:{
    for(int i = 0; i < 10000; ++i){
      if(re2::RE2::FullMatch("aaaaaaaaaaaaaaaaaaaaaaac", "((a)+)+c"))
        cout << "Matched.";
      else
        cout << "UnMatched.";
    }
    break;
  }
  case 8:{
    for(int i = 0; i < 10000; ++i){
      if(re2::RE2::FullMatch("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "(?:(?:(?:aa)+)+)+c"))
        cout << "Matched.";
      else
        cout << "UnMatched.";
    }
    break;
  }
  case 9:{
    for(int i = 0; i < 10000; ++i){
      if(re2::RE2::FullMatch("aaaaaaaaaaaaaaaaaaaaaaaaaaaac", "(((aa)+)+)+c"))
        cout << "Matched.";
      else
        cout << "UnMatched.";
    }
    break;
  }
  case 10:{
    for(int i = 0; i < 10000; ++i){
      if(re2::RE2::FullMatch("aaaaaaaaaaaaaaaaaaaaaaaaaac", "(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)c"))
        cout << "Matched.";
      else
        cout << "UnMatched.";
    }
    break;
  }
  case 11:{
    for(int i = 0; i < 10000; ++i){
      if(re2::RE2::FullMatch("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac", "(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)c"))
        cout << "Matched.";
      else
        cout << "UnMatched.";
    }
    break;
  }
  case 12:{
    for(int i = 0; i < 10000; ++i){
      if(re2::RE2::FullMatch("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaac","(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)c"))
        cout << "Matched.";
        else
        cout << "UnMatched.";
    }
    break;
  }
  default:{
    for(int i = 0; i < 10000; ++i){
      if(re2::RE2::FullMatch("nez", ".*"))
        cout << "Matched.";
      else
        cout << "UnMatched.";
    }
  }
  }

  auto end = std::chrono::high_resolution_clock::now();

  cout << endl << "Time:" << std::chrono::duration_cast<std::chrono::microseconds>((end-start)/10000).count() << "[us]" << endl;

  return 0;
}
