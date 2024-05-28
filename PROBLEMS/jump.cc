#include<iostream>
int left_right(int x,int d)
{
  if (x%2==0)
  x-=d;
  else
  x+=d;
  return x;
}
int move(int x ,int j , int nbj)
{
  x=left_right(x,j++);
  if (nbj-1!=0)
  x=move(x,j+1,nbj-1);
  return x;

}
int main()
{
  int t,x,nbj;
  std::cout <<"give t\n";
  std::cin >> t;
  for (int i=0;i<t;i++)
  {
    std::cout<< "give x0\n";
    std::cin >> x;
    std::cout<< "give nbj\n";
    std::cin >> nbj;
    x=move(x,1,nbj);
    std::cout<<"x="<<x;
  }
  return 0;
}