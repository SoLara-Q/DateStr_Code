#include<bits/stdc++.h>
using namespace std;
#define InitSize 10
typedef struct{
    int *data;
    int MaxSize;
    int length;
}SeqList;

//初始化动态顺序表
void InitList(SeqList &L){
    L.data = (int *)malloc(InitSize*sizeof(int));
    // L.data = new int [InitSize];    
    L.length = 0;
    L.MaxSize = InitSize;
}

//增加动态数组的长度
void IncreaseSize(SeqList &L, int len){
    int *p = L.data;
    L.data = (int *)malloc((L.MaxSize+len)*sizeof(int));
    for(int i = 0; i<L.length; i++){
        L.data[i]=p[i];
    }
    L.MaxSize = L.MaxSize + len;
    free(p);
}

//打印数据
void PrintfList(SeqList L){
    cout<<"========= start ========"<<endl;
    for(int i = 0; i<L.MaxSize; i++){
        cout<<"data["<<i+1<<"] = "<<L.data[i]<<endl;
    }
    cout<<"========= end ========"<<endl;
}

//增加顺序表
bool ListInsert(SeqList &L, int i, int e){
    if(i<0) return false;
    i--;
    if(i>=L.MaxSize ||L.length+1>=L.MaxSize){
        IncreaseSize(L,L.MaxSize*2);
    } 
    for(int j = L.length; j > i; j--){
        L.data[j] = L.data[j-1];
    }
    L.data[i] = e;
    L.length++;
    cout<<L.data[i]<<"  "<<L.length<<endl;
    return true;
}

//删除


int main(){
    SeqList L;
    InitList(L);
    // IncreaseSize(L, 10);
    cout<<L.MaxSize<<" "<<L.length<<endl;
    for(int i = 1; i<=10; i++){
        int num=0;
        cin>>num;
        ListInsert(L,i,num);
    }
    cout<<L.MaxSize<<" "<<L.length<<endl;

    ListInsert(L,20,11);
    PrintfList(L);
    return 0;
}