#include<stdio.h>
void cut(int a[],int n,int count);
int main(){
    int n;
    printf("Enter ele : ");
    scanf("%d",&n);
    int count = 0;
    int arr[n];
    printf("Enter the eles : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    cut(arr,n,count);
}
void cut(int a[],int n,int count)
{
    
    if (n ==1){
        printf("%d",count);
    }
    else{
        int h=n/2;
        int k[h];
        for(int i=0;i<h;i++){
            k[i]=a[i];
        }
        count++;
        cut(k,h,count);
    }
}