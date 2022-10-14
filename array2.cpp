#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>//for sort fxn
using namespace std;
//swapping 
/*void swapping(int arr[],int n){

for(int i=0;i<n;i+=2){
    if( i+1<n){
swap(arr[i],arr[i+1]);
}
}}
int main(){
    int n1=5;
  
int array[]={2,3,4,5,9};
swapping(array,n1);
for(int i=0;i<n1;i++)
{cout<<array[i];
}cout<<endl;
return 0;
}*/
//sort()function
/*int main(){
    int arr[]={1,22,3,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;}


}*/
/*int rep(int arr[],int n){
   int i;
   if(i== n){
    return -1; 
   }
for (int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
         return i;   
        }
 
    }
}}
int main(){
    int array[]={1,2,5,4,5,4};
    int len=sizeof(array)/sizeof(array[0]);
    cout<<rep(array,len)<<endl;
}*/

//PRINTING ALL SUBARRAYS USING BRUTE APPROACH
/*int main(){
    int n=4;
    int arr[]={1,2,3,4};
for(int s=0;s<n;s++){
      for(int e=s;e<n;e++){
        for(int i=s;i<=e;i++){
        cout<<arr[i]<<" "; 
    }cout<<endl;
}
}
}*/
/*
void subarr(int arr[],int s,int e){
    int len=3;
    if(e==len){
return;
    }else if(s>e){
        subarr(arr,0,e+1);
    } 
    else{
    for(int i=s;i<e;i++){
        cout<<arr[i];
       cout<<arr[e]<<endl;
        subarr(arr,s+1,e);
    }
    }
    return;
}
int main(){
   int arr[] ={1,2,3};
   subarr(arr,0,0);
   return 0;
}
//sum of subarrays to equals S
/*int main(){
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int  i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,j=0,st=0,e=0, sum=0;
while(j<n && sum+a[j]<=s)
{
    sum+=a[j];
    j++;
}//this loop ends when sum becomes equal or greater  than s
//now two cases 1.sum=s
if(sum==s){//this is the case when starting index is found at start
    //so we should not increment j 
    //n=4 s=4 arr 2 2 4 6 i=0 j=2(after j++)
    //to get right position of j we -1 from j
    cout<<"i="<<i<<" "<<"j="<<j-1<<endl;
    return 0;//return back don't go to next line
}
while(j<n)
{//2.when sum>s

    sum+=a[j];//add a[j] to sum which was not added in 1st loop when sum>s;
    while(sum>s){
        sum-=a[i];
        i++;
    }
    if(sum==s){
        i=i;
        j=j;
        break;
    }//j++ to avoid infinite loop
     j++;
}
cout<<"start index"<<i<<" "<<"end"<<j<<endl;
}*/
//PRINT MISSING ELEMENT
int main(){
    int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int r=1e2;//10^2 bcz we r taking -ve/+ve both no. in array
bool substitute[r];//making substite arr to store vale of array
for(int i=0;i<r;i++){
    substitute[i]=false;
}
for(int i=0;i<n;i++){
  if(arr[i]>=0){
substitute[arr[i]]=true;//place arr[i] in arr[i] of substitute array
  }
} int ans=0;
for(int i=0;i<r;i++){
    if(substitute[i]==false){
        ans=i;
        break;
    }
    }
    cout<<ans<<endl;
    return 0;
}

