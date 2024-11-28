#include<iostream>
#include<cctype>
#include<string>

using namespace std;

bool isPalindrome(string s){
  string Cleaned = "";

  for( char c : s){
    if(isalnum(c)){
      Cleaned+=tolower(c);
    }
  }

  int i=0, j=Cleaned.size()-1;

  while(i<j){
    if(Cleaned[i]!=Cleaned[j])
    return false;

    i++;
    j--;
  }
  return true;
}

int main(){
  string s;
  cout<<"Enter phrase : ";
  getline(cin, s);
  if(isPalindrome(s)){
    cout<<"The phrase is a palindrome."<<endl;
  }
  else{
    cout<<"The phrase is not a palindrome."<<endl;
  }
  return 0;
}