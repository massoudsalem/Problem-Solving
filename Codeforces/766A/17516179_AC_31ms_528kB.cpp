#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  cin.sync_with_stdio(0);cin.tie(0);cout.tie(0);
  string s1,s2;
  cin>>s1>>s2;
  if(s1==s2)cout<<-1<<endl;
  else cout<<max(s1.length(),s2.length())<<endl;
}
