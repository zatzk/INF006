#include <stdio.h>

void SelSort(int array[],int n);
void InsertSort(int array[],int n);
void BubSort(int array[],int n);

int main(){
    int array[100], n,i;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter %d Numbers:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    SelSort(array,n);
    BubSort(array,n);
    InsertSort(array,n);
    
    return 0;
}

void SelSort(int array[], int n){
    int i, j, position, swap, cont=0;
    for(i = 0; i < (n - 1); i++){
        position=i;
        for(j = i + 1; j < n; j++){
            if(array[position]>array[j])
                position=j;
        }
        if(position != i){
            swap=array[i];
            array[i]=array[position];
            array[position]=swap;
            cont++;
        }
    }
    printf("Selection Sorted Array:\n");
    for(i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\nRuntime = %d", cont);
    printf("\n\n");
}

void BubSort(int array[], int n){
    int i, j, swap,flag=0, cont=0;

    for(i = 0 ; i < n - 1; i++){
        for(j = 0 ; j < n-i-1; j++){
            if(array[j] > array[j+1]){
                swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
                flag=1;
                cont++;
            }
            
            if(!flag){
                break;
            }
        }
    }
    printf("Bubble Sorted Array:\n");
    for(i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    //runtime error in cont++
    printf("\nRuntime = %d", cont);
    printf("\n\n");
    return 0;
}

void InsertSort(int array[], int n) { 
    int i, element, j, cont=0; 
    for (i = 1; i < n; i++){ 
        element = array[i]; j = i - 1; 
        while (j >= 0 && array[j] > element){ 
            array[j + 1] = array[j]; 
            j = j - 1; 
            cont++;
        } 
        array[j + 1] = element;
        
    } 
    printf("Insertion Sorted Array:\n");
    for (i = 0; i < n; i++){
        printf("%d ", array[i]); 
    }
    //runtime error in cont++
    printf("\nRuntime = %d", cont);
    printf("\n"); 
}