#include<vector>
#include<algorithm>
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


int fusion(int t1[],int t2[],int n)
{
  int t3[2*n];
  int k=2*n-1,n1=n;
  
  while (t1!=nullptr)
  {
    while (t2!=nullptr)
    {
      t3[k]=t2[0];
      k--;
      supp(t2,n);
      
    }
    t3[k]=t1[0];
    k--;
    supp(t1,n1);
  
  }
  
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
