#include<bits/stdc++.h>
using namespace std;

using ElemType = int;

typedef struct DNode{
    ElemType data;
    struct DNode *prior, *next;
}DNode, *DLinklist;

// 初始化一个空的循环双链表
bool InitList(DLinklist &L){
    L = (DNode *)malloc(sizeof(DNode));
    if(L == NULL) return false;

    // 循环链表：头结点的前驱和后继都指向自己
    L->prior = L;
    L->next = L;

    return true;
}

//在第i个结点后插入元素e
//i= 0 表示插入到头结点后面，也就是表头插入
bool ListInsert(DLinklist &L, int i, int e){
    if(i<0){
        return false;
    }
    DNode *p = L;
    for(int j = 0; j<i; j++){
        p = p->next;
        if(p == L){
            return false;
        }
    }

    DNode *s = (DNode *)malloc(sizeof(DNode));
    if(s == NULL) return false;

    s->data = e;

    //插入到p后面
    s->next = p->next;
    p->prior = p;

    p->next->prior = s;
    p->next = s;

    return ture;
}

//删除第i个数据结点
bool ListDelect(DLinklist &L, int i){
    if(i <= 0) retur false;

    DNode *p = L;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    test();

    return 0;
}