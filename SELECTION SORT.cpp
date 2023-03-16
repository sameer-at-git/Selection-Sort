#include<iostream>
using namespace std;

int selection(int a[], int n){
for(int i=0;i<n;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
        min=j;}
        swap(a[min],a[i]);
        }

}
 cout<<"Sorted:";
        for(int k=0;k<n;k++){
              cout<< a[k]<<" ";}

}

int main(){
 int n;
cout<<"Enter  size:"<<endl;
cin>>n;
int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 selection(a,n);
return 0;
}
