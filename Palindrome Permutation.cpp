/*Question : Given a string s, return true if a permutation of the string could form a palindrome and false otherwise.
Example 1:
Input: s = "code"
Output: false
  
Example 2:
Input: s = "aab"
Output: true
  
Example 3:
Input: s = "carerac"
Output: true
  
Constraints:
1 <= s.length <= 5000
s consists of only lowercase English letters.

Solution : #easy-peasy
I observed that if any permutation of string need to be a palindrome, then frequency of each character must be even except 1 charcater i.e ATMOST one character can have odd occurance and that will come in middle.
Hence Just count oddcount and if oddcount <= 1 return true else false. */

Code :
#include<bits/stdc++.h>
using namespace std;


bool func1(string &s){
  vector<int> cnt(26);
  for(char &c : s){
    cnt[c - 'a']++;
  }
  int oddcount = 0;
  for(int x : cnt){
    if(x %2 != 0) oddcount++;
  }
  return oddcount <= 1;
}
int main(){
  string s;
  cin>>s;
  bool ans = func1(s);
  if(ans) cout<< "true" <<endl;
  else cout<<"False" <<endl;
  return 0;
}
