// Mirror image  

struct Node  
{ 
    int data; 
    struct Node* left; 
    struct Node* right; 
}; 
  
/* Helper function that allocates a new node with  
the given data and NULL left and right pointers. */

struct Node* newNode(int data) 
{ 
    struct Node* node = (struct Node*) 
                         malloc(sizeof(struct Node)); 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
      
    return(node); 
} 
  
  
/* Change a tree so that the roles of the left and  
    right pointers are swapped at every node. */
  

void mirror(struct Node* node)  
{ 
    if (node == NULL)  
        return;  
    else
    { 
        struct Node* temp; 
          
        /* do the subtrees */
        mirror(node->left); 
        mirror(node->right); 
      
        /* swap the pointers in this node */
        temp     = node->left; 
        node->left = node->right; 
        node->right = temp; 
    } 
}  
 
