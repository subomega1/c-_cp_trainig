#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n,l,r;
  cin>>n>>l>>r;
  vector<int> v;
  for(int i=0;i<n;i++) v.push_back(i+1);
  
  reverse(v.begin()+l-1, v.begin()+ r);
  
  for(int i=0;i<n;i++) cout<<v[i]<<" ";
  return 0;
}