//// ConsoleApplication_c.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////
//
#include <iostream>
//
////int main()
////{
////------------------------新建链表----------------------------------------------------------------
//
//    //typedef struct linklist
//    //{
//    //    int data;                                                //代表数据域
//    //    struct linklist* next;                                   //代表指针域，指向直接后继元素
//    //};
//
//    //linklist* l1 = (linklist*)malloc(sizeof(linklist));          //创建一个头结点
//    //linklist* p = l1;
//    //linklist* q = (linklist*)malloc(sizeof(linklist));           //创建一个结点
//
//    //q->next = NULL;
//    //q->data = 1;
//    //p->next = q;
//
//    //while (l1)
//    //{
//    //    printf("%d\n", l1->data);
//    //    l1 = l1->next;
//    //}
//
//
//
//
////    return 0;
////}

typedef struct Tree
{
    int data;
    struct Tree* lchild;
    struct Tree* rchild;
}Tree;

int main()
{
 //----------------------------树-------------------------------------------------------------


    void PreOrder(Tree*);

    Tree* T1 = (Tree*)malloc(sizeof(Tree));
    Tree* T2 = (Tree*)malloc(sizeof(Tree));
    Tree* T3 = (Tree*)malloc(sizeof(Tree));

    T1->lchild = T2;
    T1->rchild = T3;
    T1->data = 1;
    T2->data = 2;
    T3->data = 3;

    //前序递归遍历
    PreOrder(T1);

}
//前序递归遍历
void PreOrder(Tree* T1)
{
    if(T1 == NULL)
    {
        printf("%d",T1->data);
    }
    else 
    {
        return;
    }
    if (T1->lchild != NULL)
    {
        PreOrder( T1->lchild);
    }
    if (T1->rchild != NULL)
    {
        PreOrder( T1->rchild);
    }
}
//
//// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
//// 调试程序: F5 或调试 >“开始调试”菜单
//
//// 入门使用技巧: 
////   1. 使用解决方案资源管理器窗口添加/管理文件
////   2. 使用团队资源管理器窗口连接到源代码管理
////   3. 使用输出窗口查看生成输出和其他消息
////   4. 使用错误列表窗口查看错误
////   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
////   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
