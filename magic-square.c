#include<stdio.h>
int main(){
  int n;
  printf("Enter order of magic square: ");
  scanf("%d",&n);
  int i,j;
  int arr[n][n];
  for(i=0;i<n;i++){
    for (j=0;j<n;j++){
      arr[i][j]=-1;
    }
  }
  int c=1;
  int x,y;
  i=n/2;
  j=n-1;

  for(int num=1;num<=n*n;){
    if(i==-1&&j==n){
      i=0;
      j=n-2;
    }
    else{
      if(i<0){
        i=n-1;
      }
      if(j==n){
        j=0;
      }
    }
    if(arr[i][j]!=-1){
      j-=2;
      i++;
      continue;
    }
    else{
      arr[i][j]=num++;
    }
    i--;
    j++;
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d\t",arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
