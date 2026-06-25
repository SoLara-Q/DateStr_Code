#include<bits/stdc++.h>
using namespace std;

using ElemType = int;

typedef struct DNode{
    ElemType data;
    struct DNode *prior, *next;
}DNode, *DLinklist;

//初始化一个空的单链表
bool InitList(DLinklist &L){
    L = (DNode *)malloc(sizeof(DNode));
    if(L == NULL) return false;

    L->prior = NULL;
    L->next = NULL;

    return false;

}

//在第i个结点后插入元素e
//i= 0 表示插入到头结点后面，也就是表头插入
bool ListInsert(DLinklist &L, int i, int e){
    if(i<0) return false;
    DNode *p = L;

    for(int j = 0; j<i; j++){
        p = p->next;
        if(p == NULL) break;
    }
    if(p == NULL) return false;
    DNode *s = (DNode *)malloc(sizeof(DNode));
    if(s == NULL) return false;
    s->data = e;
    s->next = p->next;
    s->prior = p;
    if(p->next != NULL)
    p->next->prior = s;
    
    p->next = s;

    return true;
}

//删除第i个数据结点
bool ListDelect(DLinklist &L, int i){
    if(i<=0) return false;

    DNode *p = L;
    
    //找到第i个数据结点的前驱结点
    for(int j = 1; j<i; j++){   
    //注意：第一个数据结点是i=1！！！！
        p = p->next;
        if(p->next = NULL){
            break;
        }
    }
    if(p->next == NULL) return false;
    
    DNode *q = p->next;
    p->next = q->next;
    if(q->next != NULL)
    q->next->prior = p;
    free(q);
    return true;

}

//求表长
int Length(DLinklist &L){
    DNode *p = L;
    int length = 0;
    while(p->next != NULL){
        length++;
        p = p->next;
    }
    return length;
}

//按序号查找结点
DNode *GetElem(DLinklist L, int i){
    if(i<=0) return NULL;

    DNode *p = L;
    for(int j = 1; j<=i; j++){
        p = p->next;
        if(p == NULL) break;
    }
    
    return p;
}

//按值查找结点
DNode *LocateElem(DLinklist L, int e){
    DNode *p = L;
    while(p->data != e){
        p = p->next;
        if(p == NULL) break;
    }
    return p;
}

//打印单链表(正向)
void PrinfDNode(DLinklist L){
    DNode *L1 = L;
    L1 = L1->next;
    int cnt = 0;
    cout<<"========= start ========"<<endl;
    while(L1 != NULL){
        cnt++;
        cout<<"L["<<cnt<<"] = "<<L1->data<<"\n";
        L1 = L1->next;
    }
    cout<<"========= end =========="<<endl;
}

//打印单链表（反向）
void DNodePrinf(DLinklist &L){
    DNode *L2 = L;
    while(L2->next !=NULL){
        L2 = L2->next;
    }
    int cnt = 11;
    cout<<"========= start ========"<<endl;
    while(L2->prior!=NULL){
        cnt--;
        cout<<"L["<<cnt<<"]"<<L2->data<<"\n";
        L2 = L2->prior;
    }
    cout<<"========= end =========="<<endl;
}

//销毁链表必须先free所有结点，最后L = NULL !!! 
void DestroyList(DLinklist &L) {
    DNode *p = L;

    while (p != NULL) {
        DNode *q = p->next;  // 先保存下一个结点
        free(p);             // 释放当前结点
        p = q;               // 继续处理下一个结点
    }

    L = NULL;                // 最后再把头指针置空
}

void test(){
    DLinklist L;
    InitList(L);
    for(int i = 0; i<10; i++){
        int num;
        cin>>num;
        //cout<<num<<endl;
        ListInsert(L,i,num);
    }
    int k = 3;
    ListInsert(L,k,11);
    PrinfDNode(L);
    k = 1;
    ListDelect(L,k);
    PrinfDNode(L);
    int length = Length(L);
    cout<<"length = "<<length<<endl;
    //DNodePrinf(L);

    // k = 20;
    DNode *p = GetElem(L,k);
    // if( p != NULL) cout<<p->data<<endl;
    // else cout<<"NULL"<<endl;
    k = 11;
    p = LocateElem(L,k);
    if(p != NULL) cout<<p->data<<endl;
    else cout<<"NULL"<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    test();

    return 0;
}