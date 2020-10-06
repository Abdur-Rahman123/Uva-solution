#include<bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node *left,*right;
    node(int val)
    {
        this->val=val;
        left=nullptr;
        right=nullptr;
    }
};
int closestHelper(node *root,int target,int val)
{
    static int close=0;
    static int c=0;
    static int d=INT_MAX;
    if(!root)
        return close;
        c=abs(target-val);
        if(d>c)
            close=val;

    if(val<target)
        return closestHelper(root->right,target,root->val);
    else if(val>target)
        return closestHelper(root->left,target,root->val);
    else
        return close;
}

int closest(node *root,int target)
{
    int val=root->val;
return closestHelper(root,target,val);
}

int main()
{
    node *root = new node(9);
    root->left    = new node(4);
    root->right   = new node(17);
    root->left->left = new node(3);
    root->left->right = new node(6);
    root->left->right->left = new node(5);
    root->left->right->right = new node(7);
    root->right->right = new node(22);
    root->right->right->left = new node(20);
    cout<<closest(root,18);

}
