// Level Order Traversal

void levelOrderTraversal(node* root){

	if(root==NULL)
		return;

	queue<node *> q;

	q.push(root);

	while(!q.empty()){
		node *temp=q.front();
		q.pop();
		if(temp){
			cout<<temp->data<<" ";
		}

		if(temp->left)
			q.push(temp->left);
		if(temp->right)
			q.push(temp->right);
	}
}

