// This is the main file
#include "stdio.h"

typedef struct TreeStruct {
    TreeStruct *left;
    TreeStruct *right;
    TreeStruct *par;
    TreeStruct *current;
    TreeStruct *next;
} treeNode;


static typedef struct TreeFunctions {
    void Add(treeNode *root, int val);
    void Print (treeNode *root);

}funcs;

// Implementation
void Add(treeNode *root, int val){};

void Print(treeNode *root){};



int main(){
    treeNode *root = (treeNode*)malloc(sizeof(treeNode));
    root->left =0;
    root->right = 0;
    root->current = 5;
    root->par = NULL;
    root->next = NULL;
    
    
    Add(root, 6);
    Add(root,4);


};