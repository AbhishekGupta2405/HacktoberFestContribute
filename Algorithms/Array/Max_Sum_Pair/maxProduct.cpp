#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of the array ";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int first = 0, second = 0;
    for(int i=0; i<n; i++){
        if(v[i] > first){
            second = first;
            first = v[i];
        }
        else if(v[i] > second){
            second=v[i];
        } 
    }
    cout<<"The pair of elements with maximum product is "<<first<<" and "<<second<<endl;
    cout<<"And their product is "<<first*second;
}