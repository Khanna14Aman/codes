#include<iostream>
using namespace std;
class bst
{
	public:
	int data;
	bst * left;
	bst * right;
}*root=NULL;
void insert()
{
	int value;
	bst *par;
	bst * p =new bst();
	cout<<"\nenter data to be inserted";
	cin>>value;
	p->data=value;
	p->left=NULL;
	p->right=NULL;
	if(root==NULL)
	{
		root=p;
		return;
	}
	else
	{
		par = root;
		while(par!=NULL)
		{
			if(par->data > value)
			{
				if(par->left==NULL)
					par->left=p;
				par=par->left;
			}
			else if(par->data < value)
			{
				if(par->right==NULL)
					par->right=p;
				par=par->right;
			}
			else if(par->data==value)
			{
				par=NULL;

			}
		}
	}
}
bst* maximum(bst* root)
{
	if(root==NULL)
	{
		cout<<"no element in tree";
		return NULL;
	}
	else if(root->right==NULL)
	{
		cout<<"\nmax element is "<<root->data;
		return root;
	}
	else
	{
		return(maximum(root->right));
	}
}
void inorder(bst * root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<"  "<<root->data;
		inorder(root->right);
	}
}
void preorder(bst * root)
{
	if(root!=NULL)
	{
		cout<<"  "<<root->data;
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(bst * root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout<<"  "<<root->data;
	}
	
}
bst* min(bst* root)
{
	if(root==NULL)
	{
		cout<<"\nno element in tree";
		return NULL;
	}
	else if(root->left==NULL)
	{
		cout<<"\nminimum element is "<<root->data;
		return root;
	}
	else 
		return(min(root->left));
}
bst* delle(bst* root, int value)
{
	bst * temp;
	if(root==NULL)
	{
		return root;
	}
	else if(value < root->data)
		root->left=delle(root->left,value);
	else if(value > root->data)
		root->right=delle(root->right,value);
	else
	{
		if(root->left!=NULL && root->right!=NULL)
		{
			temp=maximum(root->left);
			root->data=temp->data;
			root->left=delle(root->left,temp->data);
		}
		else
		{
			if(root->left==NULL && root->right==NULL)
				return NULL;
			
			if(root->left==NULL)
			{
				temp=root->right;
				delete(root);
				return temp;
			}
			if(root->right==NULL)
			{
				temp=root->left;
				delete(root);
				return temp;
			}
			
		}
		
	}
	return root;
	
}
void del()
{
	int value;
	cout<<"\nenter value to be deleted";
	cin>>value;
	delle(root,value);
	return;
}
int main()
{
	int n,ch;
	do
	{
		cout<<"\n1-for insert\n2-for find maximum\n3-for inorder\n4-for preorder\n5-for postorder\n6-for delete\n7-for minimum value";
		cin>>n;
		switch(n)
		{
			case 1: insert(); break;
			case 2: maximum(root); break;
			case 3: inorder(root); break;
			case 4: preorder(root); break;
			case 5:postorder(root); break;
			case 6: del(); break;
			case 7: min(root); break;
			default :cout<<"\nenter valid choice";
			cout<<"\npress 0 to stop or any key to continue";
			cin>>ch;
		}
	}while(ch);

return 0;
}