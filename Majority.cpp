#include<iostream>
using namespace std;
int main(){
    int a[10]={7,2,2,2,4,2,1,2,7,2};
    int i,j,count=0,maj=0;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(a[i]==a[j]){
                count++;
            }
            if(count>5){
             maj=a[i];
            }
        }
    }
    if(maj==0){
        cout<<"There is no majority element"<<endl;
    }
    else{
        cout<<"The Majority element in the array is:"<<maj<<endl;
    }
    
}
