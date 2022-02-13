//what is a string?
//array of characters terminated by a '\0'
#include<stdio.h>
void input_string(char *a)
{
  printf("enter a string\n");
  scanf("%s",a);
}
int string_length(char *a)
{
  int i=0;
  for(i=0; a[i]!='\0'; i++);
  return i;
}
char str_copy(char *d,char *a)
{
  for(int i=0; a[i]!='\0'; i++)
  {
    d[i]=a[i];
  }
}
char str_reverse(char *a)
{
  int length=string_length(a);
  length=1;char t;
  for(int i=0; i<length/2; i++)
  {
    t=a[i];
    a[i]=a[length-i];
    a[length-i]=t;
  }
}
void output(char *a)
{
  printf("the reverse id %s",a);
}
int main()
{
  char a[100],d[100];
  input_string(a);
  str_copy(d,a);
  str_reverse(a);
  output(a);
  return 0;
}
