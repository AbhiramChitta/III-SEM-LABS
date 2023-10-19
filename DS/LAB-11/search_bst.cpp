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
   node*srch(node*root,int k)
   {
       if(root==NULL||root->key==k)
        return root;
        if(root->key<k)
            return srch(root->right,k);
        return srch(root->left,k);
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
    cout<<"element to be searched"<<endl;
    int k;
    cin>>k;
    node*temp=n.srch(root,k);
    if(!temp)
    cout<<"ele. not found"<<endl;
    else
        cout<<"element present in the tree"<<endl;

return 0;
}
