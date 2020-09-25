#include <bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *left;
	node *right;
	node (int x)
	{
		val=x;
		left=right=NULL;
	}
};
void inorder(node* root)
{
	if(!root)
	return;
	if(root->left!=NULL)
	inorder(root->left);
	cout<<root->val<<" ";
	if(root->right!=NULL)
	inorder(root->right);
}
void insert(node* root,int key)
{
	queue<node *>q;
	q.push(root);
	while(!q.empty())
	{
		node *temp=q.front();
		q.pop();
		if(temp->left==NULL){
		temp->left=new node(key);
		break;
		}
		else
		q.push(temp->left);
		if(temp->right==NULL){
		temp->right=new node(key);
		break;
		}
		else
		q.push(temp->right);
	}

}

int main() {
	node* root=new node(10);
	root->left=new node(11);
	root->left->left = new node(7);
    root->right = new node(9);
    root->right->left = new node(15);
    root->right->right = new node(8);

    cout << "Inorder traversal before insertion:";
    inorder(root);

    int key = 12;
    insert(root, key);

    cout << endl;
    cout << "Inorder traversal after insertion:";
    inorder(root);
	return 0;
}
