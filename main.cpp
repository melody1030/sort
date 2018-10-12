//
//  main.cpp
//  selection sort (test)
//
//  Created by Mac on 2018/10/12.
//  Copyright © 2018年 Mac. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num[10]={10,3,5,6,2,1,8,3,6,8};
    
    int minn=0;
    
    for(int i=0;i<10;i++){
        minn=i;
        for(int j=i+1;j<10;j++){
            if(num[minn]>num[j]){
                minn=j;
            }
        }
        
        swap(num[i],num[minn]);
    }
    
    for(int i=0;i<10;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;

}
