///基于动态数组实现线性表
///以下是 int 情况 generic 使用void *来实现
#ifndef _ARRAY_LIST_H
#define _ARRAY_LIST_H

///一些常量宏
///默认/初始容量
#define DEFAULT_CAP 8
#define OK 0
#define ERROR -1

///成员变量
typedef int Item;
///使用结构体表达线性表的数据结构
typedef struct {
    Item *item;//首地址
    int len;//列表长度：当前可见长度
    int cap;//容量
} ArrayList;
///方法
///初始化方法
///结构体变量作形参时 尽量避免值拷贝 使用指针传递变量
int AL_init(ArrayList* al);
///添加元素
int AL_add(ArrayList* al, Item item);
///删除
int AL_remove(ArrayList* al, int pos);
///获取元素
int AL_get(ArrayList* al, int pos, Item*);
///print all
int AL_print(ArrayList* al);

#endif
