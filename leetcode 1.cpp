#include<iostream>
using namespace std;
 int main(){

     int n;
     cin>>n;
     int a[n],i;
     for(i=0;i<n;i++){
        cin>>a[i];

    }
    cout<<"num: ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";

      }
      cout<<endl;
      int target;
      cout<<"target : ";

      cin>>target;

      int sum=0;

      for(i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
        if(a[i]+a[j]==target){
            cout<<i<<" "<<j;
        }
       }

        }








 return 0;
 }
