#include <stdio.h>
#include "binary_trees.h"
#define COUNT 10

void print2DUtil(const binary_tree_t *root, int space)
{
    // Base case
    if (root == NULL)
        return;
 
    // Increase distance between levels
    space += COUNT;
 
    // Process right child first
    print2DUtil(root->right, space);
 
    // Print current node after space
    // count
    printf("\n");
    for (int i = COUNT; i < space; i++)
        printf(" ");
    printf("%d\n", root->n);
 
    // Process left child
    print2DUtil(root->left, space);
}
 
// Wrapper over print2DUtil()
void binary_tree_print(const binary_tree_t *root)
{
    // Pass initial space count as 0
    print2DUtil(root, 0);
}
 
