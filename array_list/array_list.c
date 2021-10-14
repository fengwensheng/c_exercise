#include "array_list.h"
#include <stdlib.h>

///方法实现
///初始化方法
///结构体变量作形参时 尽量避免值拷贝 使用指针传递变量
int AL_init(ArrayList* al) {
    al->len = 0;
    al->cap = DEFAULT_CAP;
    al->item = calloc(DEFAULT_CAP,sizeof(int));
    return OK;
}
///添加元素
int AL_add(ArrayList* al, Item item) {
    //在容量许可内不用+cap
    if(al->len < al->cap) {
        al->item[al->len]  = item;
        al->len++;
    } else {
        //动态扩容
    }
    return OK;
}
///删除
///删除指定位置项目
///影响：删除后指定位置以后的项目整体向前挪一个位置
int AL_remove(ArrayList* al, int pos) {
    //直接覆盖
    for(int i=pos;i<al->len-1;i++) {
        al->item[i] = al->item[i+1];
    }
    al->len--;
    return OK;
}

///获取元素
int AL_get(ArrayList* al, int pos, Item* item) {
    *item = al->item[pos];
    return OK;
}