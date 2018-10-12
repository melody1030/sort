//
//  main.cpp
//  counting sort
//
//  Created by Mac on 2018/10/12.
//  Copyright © 2018年 Mac. All rights reserved.
//

#include <iostream>
using namespace std;


void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

int main() {
    int arr[10]={0};
    int num[20]={2,6,1,6,7,0,3,2,4,5,3,8,4,5,7,1,9,7,3,0};
    int neww[20]={0};
    
    print(num,20);
    cout<<endl;
    
    for(int i=0;i<20;i++){
        arr[num[i]]++;
    }
    for(int i=0;i<10;i++){
        arr[i+1] += arr[i];
    }
    
    for(int i=0;i<20;i++){
        int index = arr[num[i]]-1;
        neww[index]=num[i];
        arr[num[i]]--;
    }
    
    print(neww,20);
    cout<<endl;
}
