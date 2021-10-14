#include "array_list.h"
#include <stdlib.h>
#include <stdio.h>

///方法实现
///初始化方法
///结构体变量作形参时 尽量避免值拷贝 使用指针传递变量
int AL_init(ArrayList* al) {
    al->len = 0;
    al->cap = DEFAULT_CAP;
    al->item = calloc(DEFAULT_CAP,sizeof(int));//分配动态内存/堆内存
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
        //简单方案 *2
        printf("当前容量不足，即将进行动态扩容\n");
        int newCap = al->cap * 2;
        int *tmp = realloc(al->item, newCap * sizeof(int));
        if(tmp==NULL) {
            printf("realloc error\n");
            return ERROR;
        }
        printf("扩容成功，当前cap=%d\n",newCap);
        al->item[al->len] = item;
        al->len ++;
        al->item = tmp;
        al->cap = newCap;

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

///print
int AL_print(ArrayList* al) {
    for(int i=0;i<al->len;i++) printf("%d,",al->item[i]);
    printf("\n");
    return OK;
}

//总结
//可以发现 数组实现的
//缺点 在删除操作时，后面的元素都要往前移
//优点 查询直接用索引，高效