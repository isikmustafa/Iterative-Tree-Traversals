struct Dual
{
	BinaryNode *ptr;
	bool flag;

	Dual(BinaryNode *p = nullptr, bool f = false)
		: ptr(p)
		, flag(f)
	{}
};

void BinaryTree::inorder()
{
	stack<Dual> s;
	s.push(Dual(root, false));

	Dual temp;
	while (!s.empty())
	{
		temp = s.top();
		s.pop();

		if (temp.ptr == nullptr); //DO NOTHING!

		//visit the current node
		else if (temp.flag)
			cout << temp.ptr->data << endl;

		else
		{
			s.push(Dual(temp.ptr->right, false));
			s.push(Dual(temp.ptr, true));
			s.push(Dual(temp.ptr->left, false));
		}
	}
}
