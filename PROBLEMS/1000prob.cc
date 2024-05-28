


int fusion(int t1[],int t2[],int n)
{
  int t3[2*n];
  int i=0,j=0,k=0;
  while (i<n)
  {
    while (j<n)
    {
      t3[k]=t1[j];
      k++;
      j++;
    }
    t3[k]=t2[i];
    k++;
    i++;
  
  }
  
}