#include<stdio.h>
#include"memory.h"
#include"value.h"

void initValueArray(ValueArray* array){
	array->capacity = 0;
	array->count = 0;
	array->values = NULL;
}

void writeValueArray(ValueArray* array, Value value){
	if(array->capacity < array->count+1){
		int OC  = array->capacity;
		array->capacity = GROW_CAPACITY(OC);
		array->values = GROW_ARRAY(Value,array->values,OC,array->capacity);
	}
	array->values[array->count] = value;
	array->count++;
}

void freeValueArray(ValueArray* array){
	FREE_ARRAY(Value, array->values,array->capacity);
	initValueArray(array);
}

void printValue(Value value){
	printf("%g", value);
}
