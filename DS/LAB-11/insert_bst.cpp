#include<iostream>
using namespace std;
class node
{
    node*left,*right;
    int key;
    public:
    node(int k)
    {
        key=k;
        left=NULL;
        right=NULL;
    }
    node*insrt(node*root,int key)
    {

        if(root==NULL)
            return new node(key);
       else{
            if(key<root->key)
            root->left=insrt(root->left,key);
            else
            root->right=insrt(root->right,key);
            return root;
            }
    }
    void inorder(node*root)
    {
        if(root!=NULL)
        {
            inorder(root->left);
            cout<<root->key<<"->";
            inorder(root->right);
        }
    }
};
 int main()
{
  node n(0);
  node*root=NULL;
    int t;
    cout<<"Enter no. of nodes to be inserted"<<endl;
    cin>>t;
    while(t--){
        int data;
        cin>>data;
        root = n.insrt(root,data);
    }
    cout<<"INORDER TRAVERSAL:"<<endl;
    n.inorder(root);
    int d;
    cin>>d;
    n.insrt(root,d);
    n.inorder(root);
return 0;
}

