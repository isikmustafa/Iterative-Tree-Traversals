void BinaryTree::preorder()
{
	stack<BinaryNode*> s;
	s.push(root);

	BinaryNode *temp;
	while (!s.empty())
	{
		temp = s.top();
		s.pop();

		//visit the current node
		cout << temp->data << endl;

		if (temp->right)
			s.push(temp->right);

		if (temp->left)
			s.push(temp->left);
	}
}
