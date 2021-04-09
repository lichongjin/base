#ifndef __ARRAY_H_
#define __ARRAY_H_
typedef struct array_s array_t;
struct array_s {
	int capacity;	//数组空间大小
	int count;	//数组含有有效元素个数
	void **item;	//动态数组

	void (*push_back)(array_t *, void *data);//向数组尾部动态添加对象
	void (*push_front)(array_t *, void *data);//向数组头部动态添加对象
	void *(*pop_back)(array_t *);//弹出数组尾部动态对象
	void *(*pop_front)(array_t *);//弹出数组头部动态对象
};
#endif
