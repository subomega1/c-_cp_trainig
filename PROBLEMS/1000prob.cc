#include<vector>
#include<algorithm>
#include<iostream>
int supp(int t[],int n)
{
  int aux=t[0];
  t[0]=t[n-1];
  t[n-1]=aux;
  n--;
  if (n==0)
  t=nullptr;
  return 0;
}


int fusion(int t1[],int t2[],int n,int t3[])
{
  int k = 2 * n - 1, n1 = n;

  while (n > 0) // Change loop condition to check n
  {
    if (n1 > 0) // Add condition to check n1
    {
      t3[k] = t1[n1 - 1]; // Correct indexing
      k--;
      n1--;
    }
    if (n > 0) // Add condition to check n
    {
      t3[k] = t2[n - 1]; // Correct indexing
      k--;
      n--;
    }
  }
  return *t3; // This might need to be changed depending on the desired return value
}
int nb_oc(int t[],int n, int x)
{
  int nboc=0;
  for (int i=0;i<n;i++)
  {
    if (t[i]==x)
    nboc++;
  }
  return nboc;
}
int lenth_sub(int t[], int n)
{
  std::vector<int> nb_list;
  for (int i = 0; i < n; i++)
  {
    nb_list.push_back(nb_oc(t, n, t[i]));
  }
  return *std::max_element(nb_list.begin(), nb_list.end());
}

int main()
{
  int t1[50],t2[50],n,t,t3[100],l;
  std::cout <<"give t";
  std::cin >> t;
  for(int i=0;i<t;i++)
  {
    std::cout <<"give n";
    std::cin >>n;
    for(int j=0;j<n;j++)
    {
        std::cout <<"give t2["<<j<<"]";
        std::cin >> t2[j];
        std::cout <<"give t1["<<j<<"]";
        std::cin >> t1[j];
    }
   fusion(t1,t2,n,t3);
   l=lenth_sub(t3,2*n);
   std::cout<<"the maximum lenth of subarrays is:"<<l;
  }
}
