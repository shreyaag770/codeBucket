// Deletion

//Deletion by Level Order Traversal
// The deleted node is replaced by bottom most and rightmost node.

struct node{
   int data;
   node* left;
   node* right;
};


node* newnode(int key){

   node* temp=new node;
   temp->data=key;
   temp->left=temp->right=NULL;
   return temp;
}


void deleteDeepest(node* root, node* d_node){
   queue<node*> q;
   q.push(root);

   while(!q.empty()){
   	node* temp=q.front();
   	q.pop();

   	if(temp == d_node)
   	{
   		temp=NULL;
   		delete(d_node);
   		return;
   	}
   	if(temp->right){
   		if(temp->right==d_node){
   			temp->right=NULL;
   			delete(d_node);
   			return;
   		} else{
   			q.push(temp->right);
   		}
   	}
   	
   	if(temp->left){
   		if(temp->left==d_node)
   		{
   			temp->left=NULL;
   			delete (d_node);
   			return;
   		} else{
   			q.push(temp->left);
   		}
   	}
   	
   }
}



node* Deletion(node* root, int key)
{

   if(root==NULL)
   	return NULL;
   if(root->left==NULL && root->right==NULL)
   {
   	if(root->data==key)
   		return NULL;
   	else{
   		return root;
   	}
   }

   queue<node*> q;
   q.push(root);

   node* temp=NULL;
   node* key_node=NULL;

   while(!q.empty()){
   	temp=q.front();
   	q.pop();

   	if(temp->data==key)
   		key_node=temp;
   	if(temp->left)
   		q.push(temp->left);
   	if(temp->right)
   		q.push(temp->right);

   }

   if(key_node!=NULL)
   {
   	int x=temp->data;
   	deleteDeepest(root,temp);
   	key_node->data=x;

   }

   return root;
   
   
}
