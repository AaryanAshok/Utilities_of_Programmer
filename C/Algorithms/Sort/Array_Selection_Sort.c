#include <stdio.h>

void swap_elem(int *e1,int *e2){
    int tmp;
    tmp = *e1;
    *e1 = *e2;
    *e2 = tmp;
}

void selection_sort_array(int *a,int len){
    int min;
    for(int i=0;i<len;i++){
        min = i;
        for(int j=i+1;j<len;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        if(min != i){
            swap_elem(a+i,a+min);
        }
    }
}

void print_a(int *a,int len){
    for(int i=0;i<len;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main(){
    int a[] ={1,4,32,5,84,32,54,7,24,23,2,42,33};
    int len_a = sizeof(a)/sizeof(a[0]);
    print_a(a,len_a);
    selection_sort_array(a,len_a);
    print_a(a,len_a);
    return 0;
}