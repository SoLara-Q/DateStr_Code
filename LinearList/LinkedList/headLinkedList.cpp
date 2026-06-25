//带头结点的单链表
#include<bits/stdc++.h>
using namespace std;

using ElemType = int;

typedef struct LNode{       //定义单链表结点类型
    ElemType data;          //每个节点存放一个数据元素
    struct LNode *next;     //指针指向下一个节点
}LNode, *LinkList;

//初始化一个空的单链表
bool InitList(LinkList &L){
    L = (LNode *)malloc(sizeof(LNode));  //分配一个头节点
    if(L==NULL) return false;            //内存不足，分配失败
    L->next = NULL;                      //头结点之后暂时没有结点
    return true;
}

//增加单链表
bool ListInsert(LinkList &L, int i, int e){
    if(i<0) return false;
    LNode *p;
    p = L;
    for(int j = 0; j<i; j++){
        p = p->next;
        if(p == NULL) break;
    }
    if(p==NULL) return false;
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}

//删除单链表
bool ListDelect(LinkList &L, int i){
    if(i<0) return false;
    LNode *p;
    p = L;
    for(int j = 1; j<i; j++){
        p = p ->next;
        if(p == NULL){
            return false;
        }
    }
    if(p == NULL)return false;
    p->next = p->next->next;

    return true;

}

//求表长
int Length(LinkList L){
    int len = 0;
    LNode *p = L;
    while(p->next!=NULL){
        len++;
        p=p->next;
    }
    return len;
}

//按序号查找结点
LNode *GetElem(LinkList L, int i){
    LNode *p = L;
    while(p!=NULL && i--){
        p = p->next;
    }
    return p;
}

//按值查找
LNode *LocateElem(LinkList L, ElemType e){
    LNode *p = L;
    while(p!=NULL && p->data != e){
        p = p->next;
    }
    return p;
}

//打印单链表
void PrinfLNode(LinkList &L){
    LNode *L1 = L;
    L1 = L1->next;
    int cnt = 0;
    cout<<"========= start ========"<<endl;
    while(L1->next != NULL){
        cnt++;
        cout<<"L["<<cnt<<"] = "<<L1->data<<"\n";
        L1 = L1->next;
    }
    cout<<"========= end =========="<<endl;
}

void test(){
    LinkList L;
    InitList(L);
    for(int i = 0; i<10; i++){
        int num;
        cin>>num;
        ListInsert(L,i,num);
    }
    // PrinfLNode(L);
    // cout<<"length = "<<Length(L)<<"\n";
    // ListInsert(L,3,10);
    // PrinfLNode(L);
    //ListDelect(L,6);
    PrinfLNode(L);
    cout<<"length = "<<Length(L)<<"\n";
    LNode *p = GetElem(L,3);
    cout<<"L[3] = "<<p->data<<"\n";
    p = LocateElem(L,2);
    cout<<p->data<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    test();
    return 0;
}