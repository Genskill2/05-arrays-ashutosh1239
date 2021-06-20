/* Enter your solutions in this file */
/* Question No. 1 */

int max(int a[], int n) 
{
    int max = a[0];
    for(int i = 0; i < n; i++)
   {
     if (a[i] > max)
       max = a[i];
   }
    return max;
}

/* Question No. 2 */

int min(int a[], int n) 
{
    int min = a[0];
    for(int i = 0; i < n; i++)
   {
     if (a[i] < min)
       min = a[i];
   }
    return min;
}

/* Question No. 3 */

float average(int a[], int n)
{
   float sum = 0;
   for(int i = 0; i < n; i++)
 {
  sum = sum + a[i];
 }
 return(sum/n);
}
 
/* Question No. 4 */

int mode(int a[], int n)
{
  int max=a[0];
  for(int i=0;i<n;i++)
  {
    if(a[i]>max)
    {
      max=a[i];
    }
  }

  int count[max+1];

  int value,large;
  for(int i=0;i<=max;i++)
  {count[i]=0;}
  
  for(int i=0;i<=max;i++)
   for(int j=0;j<n;j++)
   {
     if(a[j]==i)
       count[i]=count[i]+1;                           
   }
  
  large=count[0];

  for(int i=0;i<=max;i++)
  {
    if(count[i]>large)
    {
     large=count[i];
     value=i;
    }
  }
  return value;
}

/* Question No. 5 */

int factors(int n, int a[])
{
  int flag,count=0, cpy=n;
  for(int i=2;i<=(n/2);i++)
  {
    if((a[i]%i)==0)
    {
      for(int j=2;j<=i;j++)
      {
        if((i%j)==0)
          flag=1;
        }
      if(flag==1)
      {
        while((n%i)==0)
        {
          a[count]=i;
          count++;
        }
      }
      flag=0;
    }
  }
  return count;
}


