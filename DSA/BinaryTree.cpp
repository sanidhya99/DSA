#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std;

// creating node compatible with tree
class Node
{
public:
    int d;
    Node *left;
    Node *right;

    Node(int data)
    {
        d = data;
        left = right = NULL;
    }
};
Node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }

    Node *n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}
void printTreePreorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->d << " ";
    printTreePreorder(root->left);
    printTreePreorder(root->right);
}
void printTreeInorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printTreeInorder(root->left);
    cout << root->d << " ";
    printTreeInorder(root->right);
}
void printTreePostorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printTreePostorder(root->left);
    printTreePostorder(root->right);
    cout << root->d << " ";
}
void printTreeLevelOrder(Node * root){
     
}
int treeheight(Node * root){
    queue<Node*>q;
    int h=1;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node * temp=q.front();
        if(temp==NULL){
            // cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
                h++;
            }
        }
        else{
            q.pop();
            // cout<<temp->d<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }

        }
    }
    return h;
}
int height(Node * root){
    if(root==NULL){
        return 0;
    }
    int h1=height(root->left);
    int h2=height(root->right);
    return max(h1,h2)+1;
}
int diameter(Node * root){
    // Time Complexity - O(n2)
    if(root==NULL){
        return 0;
    }
    int d1=height(root->left)+height(root->right);
    int d2=diameter(root->left);
    int d3=diameter(root->right);
    return max(d1,max(d2,d3));
}
class HDpair{
public:
int height;
int diameter;
};
HDpair optDiameter(Node * root){
    //Time Complexity - O(n)
    HDpair p;
    if(root==NULL){
        p.height=p.diameter=0;
        return p;
    }

    HDpair left=optDiameter(root->left);
    HDpair right=optDiameter(root->right);
    p.height=max(left.height,right.height)+1;

    int d1=left.height+right.height;
    int d2=left.diameter;
    int d3=right.diameter;
    p.diameter=max(d1,(max(d2,d3)));
    return p;

}
Node * LevelOrderbuildTree()
{
    int d;
    cin >> d;
   
    Node * root = new Node(d);
    queue<Node *>q;
    q.push(root);
    while(!q.empty()){
        Node * current=q.front();
        q.pop();

        int c1,c2;
        cin>>c1>>c2;

        if(c1!=-1){
            current->left=new Node(c1);
            q.push(current->left);
        }
        if(c2!=-1){
            current->right=new Node(c2);
            q.push(current->right);
        }
    }
    return root;
}
int main()
{
    // Node *root = buildTree();
    // printTreePreorder(root);
    // cout<<endl;
    // printTreeInorder(root);
    // cout<<endl;
    // printTreePostorder(root);
    // cout<<endl;
    // cout<<endl;
    Node * root2=LevelOrderbuildTree();
    printTreeLevelOrder(root2);
    // printTreeLevelOrder(root2);
    // int ht=height(root2);
    // cout<<ht<<endl;
    // int ht=diameter(root);
    // cout<<" diameter is "<<ht<<endl;
    // int ht2=optDiameter(root).diameter;
    // int ht3=optDiameter(root).height;
    // cout<<" optimised diameter is "<<ht2<<endl;
    // cout<<" optimised height is "<<ht3;
    return 0;
    //4752631 - post order print
    //1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
}