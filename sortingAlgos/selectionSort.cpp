#include<bits/stdc++.h>
using namespace std;

/*Selection Sort Basically divides the array into two,
where the first array is sorted and 2nd is unsorted,as the traversal moves ahead,we find the least
element and inserts it to the beginning of the 1st array*/

void swapp(int &a,int &b){
    if(a!=b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
}

void selectionSort(vector<int> &v){
    int size=v.size();
    for(int i=0;i<size-1;i++){
        int minIdx=i;
        for(int j=i+1;j<size;j++){
            if(v[j]<v[minIdx]){
                minIdx=j;
            }
        }
        swapp(v[minIdx],v[i]);
    }
}

int main(){
    vector<int> v{23,5,32,6,54,94,2,5,3,64,4};
    selectionSort(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


    return 0;
}
