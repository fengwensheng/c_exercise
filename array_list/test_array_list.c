#include "array_list.h"
#include "stdio.h"

int main() {
    ArrayList al;
    AL_init(&al);
    AL_add(&al,1);
    Item cur = 0;
    AL_get(&al,0,&cur);
    printf("%d", cur);
    return OK;
}

///1定义指针类型变量 vs. 2定义变量然后取其地址
///指针类型变量是一个依赖于另外一个变量的变量，取其地址
///一般来说若我们定义变量的初衷是其它函数的入参指针要求，则定这一个普通变量，入参时取其地址伟入即可
///若采用另外一个则要多定义一个变量 然后传其地址给新定义的指针变量 多此一举
///eg
///eg1
//int a = 1;
//int *pa = &a;
//->pa;
///eg2
//int a = 1;
//->&a;