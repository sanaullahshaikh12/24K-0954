#include <stdio.h>

#define MAX_NESTED_BOXES 10
typedef struct Box 
{
    int weight;               
    int numNestedBoxes;            
    struct Box* nestedBoxes[MAX_NESTED_BOXES];  
} Box;
int calculateTotalWeight(Box* box) 
{
    int totalWeight = box->weight; 
    for (int i = 0; i < box->numNestedBoxes; i++) {
        totalWeight += calculateTotalWeight(box->nestedBoxes[i]); 
    }

    return totalWeight;
}

int main() 
{
    Box box1 = {10, 0, {NULL}};  
    Box box2 = {6, 1, {&box1}};  
    Box box3 = {8, 2, {&box2, &box1}};  
    int totalWeight = calculateTotalWeight(&box3);
    printf("Total weight of box3 (including nested boxes) is: %d\n", totalWeight);

    return 0;
}

