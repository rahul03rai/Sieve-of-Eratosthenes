#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

vector<int>leftView(struct node *root);
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void solve(Node* root, vector<int> &ans, int level)
{
    if(root==NULL)
        return;
    
    //we entered a new level
    if(level==ans.size())
        ans.push_back(root->data);

    solve(root->right, ans, level+1);
    solve(root->left, ans, level+1);

}

vector<int> rightView(Node *root)
{
    vector<int>ans;
    solve(root,ans, 0);
    return ans;
}