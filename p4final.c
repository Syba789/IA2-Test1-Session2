#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the array size\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("enter the composite numbers\n");
  for(int i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  } 
}
int is_composite(int n)
{
  int i,composite;
  for(i=1; i<n/2; i++)
  {
    if (n%i==0)
    {
      composite=1;
    }
  }
  return composite;
}
int sum_composite_numbers(int n,int a[n])
{
  int sum=0;
  for(int i=1; i<n; i++)
  {
    if(is_composite(a[i]))
    {
      sum=sum+a[i];
    }
  }
  return sum;
}
void output(int sum)
{
  printf("sum is %d",sum);
}
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  output(sum);
  return 0;
}