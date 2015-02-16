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
  auto start = std::chrono::system_clock::now();

  switch(index){
  case 1:
  {
    string s, t;
    string str("aaaaaaaaaaaabc");
    re2::StringPiece input(str);
    re2::RE2 re("(?:(?:(?:a)*)*)*c");
    if(re2::RE2::FullMatch(input, re, &s, &t))
      cout << "s:" << s << " t:" << t << endl;
    else
      cout << "UnMatched." << endl;
    break;
  }
  case 2:{
    string s, t;
    string str("aaaaaaaaaaaaaaaaaaaaaaaaaabc");
    re2::StringPiece input(str);
    re2::RE2 re("a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?a?c");
    if(re2::RE2::FullMatch(input, re, &s, &t))
      cout << "s:" << s << " t:" << t << endl;
    else
      cout << "UnMatched." << endl;
    break;
  }
  case 3:{
    string s, t;
    string str("aaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbc");
    re2::StringPiece input(str);
    re2::RE2 re("a+a+a+a+a+a+a+a+a+a+a+a+a+a+c");
    if(re2::RE2::FullMatch(input, re, &s, &t))
      cout << "s:" << s << " t:" << t << endl;
    else
      cout << "UnMatched." << endl;
    break;
  }
  case 4:{
    string s, t;
    string str("aaaaaaaaaaaaaaaaaaaaaaabc");
    re2::StringPiece input(str);
    re2::RE2 re("(?:a+)+c");
    if(re2::RE2::FullMatch(input, re, &s, &t))
      cout << "s:" << s << " t:" << t << endl;
    else
      cout << "UnMatched." << endl;
    break;
  }
  case 5:{
    string s, t;
    string str("aaaaaaaaaaaaaaaaaaaaaaabc");
    re2::StringPiece input(str);
    re2::RE2 re("(?:(?:a)+)+c");
    if(re2::RE2::FullMatch(input, re, &s, &t))
      cout << "s:" << s << " t:" << t << endl;
    else
      cout << "UnMatched." << endl;
    break;
  }
  case 6:{
    string s, t;
    string str("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabc");
    re2::StringPiece input(str);
    re2::RE2 re("(?:(?:aa)+)+c");
    if(re2::RE2::FullMatch(input, re, &s, &t))
      cout << "s:" << s << " t:" << t << endl;
    else
      cout << "UnMatched." << endl;
    break;
  }
  case 7:{
    string s, t;
    string str("aaaaaaaaaaaaaaaaaaaaaaabc");
    re2::StringPiece input(str);
    re2::RE2 re("((a)+)+c");
    if(re2::RE2::FullMatch(input, re, &s, &t))
      cout << "s:" << s << " t:" << t << endl;
    else
      cout << "UnMatched." << endl;
    break;
  }
  case 8:{
    string s, t;
    string str("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaabc");
    re2::StringPiece input(str);
    re2::RE2 re("(?:(?:(?:aa)+)+)+c");
    if(re2::RE2::FullMatch(input, re, &s, &t))
      cout << "s:" << s << " t:" << t << endl;
    else
      cout << "UnMatched." << endl;
    break;
  }
  case 9:{
    string s, t;
    string str("aaaaaaaaaaaaaaaaaaaaaaaaaaaabc");
    re2::StringPiece input(str);
    re2::RE2 re("(((aa)+)+)+c");
    if(re2::RE2::FullMatch(input, re, &s, &t))
      cout << "s:" << s << " t:" << t << endl;
    else
      cout << "UnMatched." << endl;
    break;
  }
  case 10:{
    string s, t;
    string str("aaaaaaaaaaaaaaaaaaaaaaaaaabc");
    re2::StringPiece input(str);
    re2::RE2 re("(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)(?:a|a)c");
    if(re2::RE2::FullMatch(input, re, &s, &t))
      cout << "s:" << s << " t:" << t << endl;
    else
      cout << "UnMatched." << endl;
    break;
  }
  case 11:{
    string s, t;
    string str("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabc");
    re2::StringPiece input(str);
    re2::RE2 re("(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)(?:aa|a)c");
    if(re2::RE2::FullMatch(input, re, &s, &t))
      cout << "s:" << s << " t:" << t << endl;
    else
      cout << "UnMatched." << endl;
    break;
  }
  case 12:{
    string s, t;
    string str("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabc");
    re2::StringPiece input(str);
    re2::RE2 re("(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)(aa|a)c");
    if(re2::RE2::FullMatch(input, re, &s, &t))
      cout << "s:" << s << " t:" << t << endl;
    else
      cout << "UnMatched." << endl;
    break;
  }
  default:{
    string s, t;
    string str("nez");
    re2::StringPiece input(str);
    re2::RE2 re("...");
    if(re2::RE2::FullMatch(input, re, &s, &t))
      cout << "s:" << s << " t:" << t << endl;
    else
      cout << "UnMatched." << endl;
  }
  }

    auto end = std::chrono::system_clock::now();

    cout << "Time:" << std::chrono::duration_cast<chrono::microseconds>(end-start).count() << "[us]" << endl;

  return 0;
}
