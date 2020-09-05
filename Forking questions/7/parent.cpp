#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include<string>
using namespace std;
bool flag=false;
int main(int argc, char *argv[])
{   
  int n;n= stoi(argv[1]);
  int key=stoi(argv[2]);
  int a[100];int j=0;
  for(int i=3;j<n;i++)
  {
    a[j]= stoi(argv[i]);
    j++;
  }
  int beg=0;
  int end=n/2;
  while(beg<=end)
  {
  int mid=(beg+end)/2;
  if(a[mid]==key)
  {
    flag=true;
    break;
  }
  else if(a[mid]<key)
  {
    beg=mid+1;
  }
  else
    end=mid-1;
  }
  if(flag==true)
  {
  printf("Found in first half\n");
  }
  pid_t p=fork();
  if(p==0){
  wait(NULL);
  if(flag==false){
  
  char *args[n+3];
  args[0]=argv[1];
  args[1]=argv[2];
  for(int i=2;i<n+2;i++)
  {
    args[i]=argv[i+1];
  }
  args[n+2]=NULL;
  execv("./child",args);
  
}
}


return 0;}




