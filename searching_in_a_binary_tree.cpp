// Searching of a node

void findNode(node* root,int x){
   
    if(root==NULL)
      return;
      if(root->data==x)
      {
        temp2=root;
        return;
      }

      else{
        findNode(root->left, x);
        findNode(root->right,x);
      }
    
 }
  
