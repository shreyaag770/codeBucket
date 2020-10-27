// Insertion

// Insertion in level Order

struct node{
  int data;
  struct node* left;
  struct node* right;
};



node* newnode(int data)
{
  node* temp=new node;
  temp->data=data;
  temp->left=temp->right=NULL;
  return temp;
}



void insert( node* temp, int key)
  {
    queue <node*> q;
    q.push(temp);//

    while(!q.empty()){
      node* temp = q.front();
      q.pop();

      if(temp->left ==NULL)
      {
        temp->left=newnode(key);
        break;
      } else
        q.push(temp->left);

      if(temp->right==NULL)
      {
        temp->right=newnode(key);
        break;
      } else
          q.push(temp->right);
    }
  }

