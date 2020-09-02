#include <stdio.h>
void bubble(int array[], int size);
int main(void) {
    int n,i,j,size,temp,counter = 0;
    int k;
    printf("How many numbers to sort?\n");
    scanf("%d",&size);
    int array[size];
    for(i=0;i<size;i++) {
        printf("Enter number %d\n",i+1);
        scanf("%d",&k);
        array[i] = k;
    }
    printf("Array before sorting:\n");
    for(i=0;i<size;i++) {
        printf("%d  ",array[i]);
    }
    bubble(array,size);
    printf("%d\n");
    printf("Array AFTER sorting:\n");
    for(i=0;i<size;i++) {
        printf("%d  ",array[i]);
    }
    return 0;
}

void bubble(int array[], int size) {
    int swapped = 1;
    while (swapped && size-- > 0) {
        swapped = 0;
        for(int i=0; i<size; ++i) {
            if(array[i] > array[i+1]) {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                swapped = 1;
            }
        }
    }
}

