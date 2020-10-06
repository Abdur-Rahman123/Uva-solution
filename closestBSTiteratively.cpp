 //https://www.geeksforgeeks.org/find-the-closest-element-in-binary-search-tree-space-efficient-method/?ref=rp
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

int closest(node *root,int target)
{
    int c=0;
    int d=INT_MAX;
    int close=0;
    while(root)
    {
         c=abs(target-root->val);
         if(d>c)
         {
             d=c;
             close=root->val;
         }
        if(root->val>target)
            root=root->left;
        else if(root->val<target)
            root=root->right;
        else
            return close;
    }
    return close;
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
