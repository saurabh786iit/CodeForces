// https://codeforces.com/problemset/problem/281/A
// 281 A. Word Capitalization
// 16-Oct-2020

#include <iostream>
using namespace std;

string capitalize(string s){
  s[0]=toupper(s[0]);
  return s;
}

int main() {
  ios::sync_with_stdio(false);
  string s;
  cin>>s;
  cout<<capitalize(s);
}
