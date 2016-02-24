
#include "stdio.h"
// This is the strucutre of the Tree

typedef struct
{
    int key;
    struct treeNode *left;
    struct treeNode *right;
    struct treeNode *parent;
    struct treeNode *root;
    struct treeNode *next;

    
    
} treeNode;


// Bring the most right item of the balanced tree
treeNode *Max(treeNode *x){

    treeNode *m;
    
    // walk through the most right item of the tree.
    while (x->right!=NULL)
    {
        x = m;
        x= x->right;
    }
    return m;
}

// return the most left item of a balanced tree
treeNode *Min(treeNode *x){
    
    treeNode *m;
    
    // walk through the most right item of the tree.
    while (x->right!=NULL)
    {
        x = m;
        x= x->left;
    }
    return m;
}

treeNode *Search( treeNode *root, int _key){

    treeNode *prtR = root;
    
    if (!root) {
        return NULL;
    }

    while(prtR->next!=NULL){
        
        if (prtR->key < _key)
        {
            prtR = prtR->left;
        }
        else if (prtR->key > _key)
        {
            prtR = prtR->right;
        }
        else if( prtR->key == _key)
            return prtR;
    }

 }

bool Insert(treeNode *root ,treeNode *z){
    treeNode *y,*x;
    prt_y=prt_x=root;

    while (prt_x->next!=NULL) {
        if (prt_x->key<z.key)
        {   prt_x.prt=prt_x;
            prt_x=prt_x.right;
        }
        else{
            prt_x.prt=prt_x;
            prt_x=prt.left;
            }
        if (z.key<prt_x.key)
            prt_x.left = z;
            
            
        else
            prt_x.right = z;
        

            
        
    }

}


int main(){
    treeNode t;
    
    int x=0;
    
    
};