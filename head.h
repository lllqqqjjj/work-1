#define LENGTH 30
typedef struct User_login{
    char name[LENGTH]; //用户名
    int totalcount; //登录次数
}SDataType; //链表的节点
typedef struct SListNode
{
    SDataType data;
    struct SListNode* PNext;
}Node,*PNode; //封装链表节点和 next 
