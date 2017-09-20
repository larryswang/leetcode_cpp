#include<iostream>
using namespace std;

int partition(int* nums,int p,int r);
void quicksort(int* nums,int p,int r){
    if(p<r){
        int q=partition(nums,p,r);
        quicksort(nums,p,q-1);
        quicksort(nums,q+1,r);
    }
}

int partition(int* nums,int p,int r){
    int x=nums[r];
    int i=p-1;
    int temp=0;
    for(int j=p;j<r;j++){
        if(nums[j]<=x){
            i++;
            temp=nums[j];
            nums[j]=nums[i];
            nums[i]=temp;
        }
    temp=nums[i+1];
    nums[i+1]=nums[r];
    nums[r]=temp;
    }
    return (i+1);
}

int main(int argc, char* argv[]){
    int nums[]={2,5,1,3,4,7,12,14};
    int* pNums=nums;
    for(int i=0;i<8;i++){
        cout<<nums[i]<<endl;
    }
    cout<<endl;
    quicksort(pNums,0,7);
    for(int i=0;i<8;i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}
