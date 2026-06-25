#include<bits/stdc++.h>
using namespace std;

#define MaxSize 10

//静态顺序表
typedef struct{
    int data[MaxSize];
    int length;
}SqList;

//初始化顺序表
void InitList(SqList &L){
    for(int i = 0; i<MaxSize; i++){
        L.data[i] = 0;
    }
    L.length = 0;
}

//插入顺序表
bool ListInsert(SqList &L, int i, int e){
    i--;
    if(L.length==MaxSize || i<0 || i>=MaxSize) return false;
    for(int j = L.length ; j > i; j--){
        L.data[j]=L.data[j-1];

    }
    L.data[i] = e;
    L.length++;
    return true;
}

//删除顺序表
bool ListDelect(SqList &L, int i){
    i--;
    if(i<0 || i>L.length) return false;
    for(int j = i; j<L.length-1; j++){
        L.data[j]=L.data[j+1];
    }
    
    L.length--;
    return true;
}

//查找顺序表
int FindList(SqList L, int e){
    for(int i = 0; i<L.length; i++){
        if(L.data[i] == e) return i+1;
    }
    return -1;
}


void PrintfList(SqList L){
    cout<<"========= start ========"<<endl;
    for(int i = 0; i<MaxSize; i++){
        cout<<"data["<<i+1<<"] = "<<L.data[i]<<endl;
    }
    cout<<"========= end ========"<<endl;
}

int main(){
    SqList L;
    InitList(L);
    for(int i = 1; i<=8; i++){
        int num=0;
        cin>>num;
        ListInsert(L,i,num);
    }
    // PrintfList(L);

    //ListInsert(L,1,10);
    //PrintfList(L);

    //ListDelect(L,1);
    PrintfList(L);
    cout<<FindList(L,5)<<endl;
    
    return 0;
}