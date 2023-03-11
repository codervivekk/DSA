#include<bits/stdc++.h>
using namespace std;

int ternarySearch(vector<int> &v,int l,int r,int key){
    if(l<=r){
        int mid1=(r-l)/3;
        int mid2=r-(r-l)/3;

        if(v[mid1]==key)
            return mid1;

        if(v[mid2]==key)
            return mid2;
        
        if(key<v[mid1]){
            return ternarySearch(v,l,mid1-1,key);
        }
        else if(key>v[mid2]){
            return ternarySearch(v,mid2+1,r,key);
        }
        else{
            return ternarySearch(v,mid1+1,mid2-1,key);
        }
    }
    return -1;
}

int main(){
    vector<int> v{10,32,43,54,1,54,65,25,56,44};
    sort(v.begin(),v.end());


    cout<<"The index of 44 is::"<<ternarySearch(v,0,v.size()-1,44);

    return 0;
}