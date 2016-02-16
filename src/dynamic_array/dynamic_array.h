#ifndef __DYNAMIC__ARRAY_H__
#define __DYNAMIC__ARRAY_H__


typedef struct dynamic_array
{
	void *data;
	int last_index;
	int cur_index;
	int unit_size;
}dynamic_array;

typedef void (*dynamic_array_travel_fun)(void*);
typedef int (*dynamic_array_find_fun)(const void*,const void*);

int dynamic_array_init(dynamic_array * dynamic_array,const unsigned int unit_size,const unsigned int init_count);
int dynamic_array_push(dynamic_array * dynamic_array,void *data);



void   dynamic_array_travel (dynamic_array * dynamic_array,const  dynamic_array_travel_fun fun);
void   dynamic_array_destroy(dynamic_array * dynamic_array,const  dynamic_array_travel_fun fun);
int    dynamic_array_find(dynamic_array * dynamic_array,const  dynamic_array_find_fun fun,const void* find);
void * dynamic_array_getByIndex(dynamic_array * dynamic_array,const int index);


int dynamic_array_size(dynamic_array * dynamic_array);
int dynamic_array_maxsize(dynamic_array * dynamic_array);
int dynamic_array_empty(dynamic_array * dynamic_array);
#endif
