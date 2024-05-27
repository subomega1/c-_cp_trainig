#include<vector>
#include<iostream>

std::vector<int> even_numbers(int w)
{
  std::vector<int> even_div;
  int i=2;
  while(i<w)
  {
  even_div.push_back(i);
  i+=2;
  }
  return even_div;
  
}
int main()
{
  int w;
  std::vector<int> evn_div;
  std::cin >> w;
  evn_div=even_numbers(w);
 if (w%2!=0)
 {
  std::cout << "No";
 }
  
  else
  {
  std::cout << "yes" << "\n";
  int f=0;
  int end=evn_div.size()-1;
  while (f!=end)
  {
    std::cout << evn_div[f] << "," << evn_div[end];
    std::cout << "\n";
    f++;
    end--;

  }
  std::cout << evn_div[f] << "," << evn_div[f];
  

  }
}