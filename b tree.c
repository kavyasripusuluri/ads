#include>stdio.h>
#include<stdlib.h>
struct Heap{
int*arr;
int size;
int capacity;
};
typedef struct Heap heap;
heap*createHeap(int capacity,int * nums);
void insert Helper(heap*h,int index){
int extract Min(heap*h);
void extract(heap*h,int data);
heap*create Heap(int capacity,int* nums);
heap*h = (heap*)malloc(sizeof(heap));
if(h==Null){
printf("Memory error");
return Nulll
}
int i;
for(i=0;i<capacity;i++){
h->arr[i]=nums[i];
}
h->size=i;
i=(h->size-z)/2;
while(i>=0){
heapify(h,i)
i--;
}
return n;
}
void insert Helper(heap*h,int index){
int parent = ()index-1)/2;
if(h->arr[parent]>h->arr[index])
{
int temp = h->arr[parent]
h->ar[index]=temp;
insert Helper(h,parent);
}
}
void heapify(heap*h,int index){
int left = index*2+1;
int right = index*2+1;
int min = index;
if(left>=h->SIZE || left<0)
lefft = -1;
if(right>=h->SIZE || right<0)
right = -1;
if(left!=-1 && h -> arr[left])}

