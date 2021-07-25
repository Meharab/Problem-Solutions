#include<stdio.h>
int maxmin(int a[],int left,int right, int &max,int &min){
  int max1,min1,mid;
  if(left==right) max=min=a[left];
  else if(left==right-1) {
    if(a[left]>a[right]) {
      max=a[left]; min=a[right];
    }else{
      max=a[right]; min=a[left];
    }
  }else{
      mid=(left+right)/2;
      maxmin(a,left,mid,max,min);
      maxmin(a,mid+1,right,max1,min1);
      if(max1>max)  max=max1;
      if(min1<min)  min=min1;
    }
  return 0;
}
int main(){
    int a[20],i,n,max,min;
    printf("Enter how many number: ");
    scanf("%d",&n);
    printf("Enter one after another....\n");
    for(i=0;i<n;i++){
        printf("%d. ",i);
        scanf("%d",&a[i]);
    }
    maxmin(a,0,n-1,max,min);
    printf("\nMaximum=%d",max);
    printf("\nMinimum=%d",min);
    return 0;
}
