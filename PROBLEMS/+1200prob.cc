#include<map>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#include<iostream>

int min_pic(std::string s)
{
  int n=s.length(),i=0;
  std::string k;
  std::vector<std::string> nbbianary;
  std::string result(n, '1');
  std::string result1(n, '0');
 if (n==1 || result==s || result1==s)
 return 1;
 if (n%2!=0)
 {
  nbbianary.push_back(s.substr(n - 1, 1));
  s.pop_back();
  i++;
 }
nbbianary.push_back(s.substr(0,2));
s=s.erase(0,2);
i++;
while(!s.empty())
{
    k=s.substr(0,2);
    if (k=="10")
    k="01";
    if(std::find(nbbianary.begin(),nbbianary.end(), k)!=nbbianary.end() || k == nbbianary.back())
    s=s.erase(0,2);
    else
    nbbianary.push_back(k);
    i++;
    s=s.erase(0,2);
    
}
return nbbianary.size();

}
int main()
{
  int t,nbb ;
  std::string s;
  std::cout <<"give t\n";
  std::cin >> t;
  for (int i=0;i<t;i++)
  {
    std::cout<<"give s\n";
    std::cin >> s;
    nbb=min_pic(s);
    std::cout<<"minimum binary used is "<<nbb;
  }

}