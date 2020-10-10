/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    string s,h;
    void func(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
         h=to_string(root->val);
        s=s+h+"-";
        func(root->left);
        func(root->right);
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL)
        {
            return s;
        }
        func(root);
       
        return s;
    }
    void insert(TreeNode* &r,int t)
     {
         if(r==NULL)
         {
             return;
         }
         if(r->left==NULL || r->right==NULL)
         {
             if(r->left==NULL && r->right==NULL)
             {
                 if(r->val<t)
                 {
                     r->right=new TreeNode(t);
                    
                 }
                 else
                 {
                     r->left=new TreeNode(t);
                 }
                 return;
             }
             else
             {
                 if(r->left==NULL && r->val>t)
                 {
                     r->left=new TreeNode(t);
                     return;
                 }
                 else if(r->right==NULL && r->val<t)
                 {
                     r->right=new TreeNode(t);
                     return;
                 }
             }
             
         }
         if(r->val<t)
         {
             insert(r->right,t);
         }
         else
         {
             insert(r->left,t);
         }
     }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        TreeNode* root;
        if(data.size()==0)
        {
            return NULL;
        }
        vector<int>v;
        string m;
        for(int i=0;i<data.size();i++)
        {
            
            if(data[i]=='-')
            {
                v.push_back(stoi(m));
                m.clear();
            }
            else
            {
                m=m+data[i];
            }
        }
        root=new TreeNode(v[0]);
        for(int i=1;i<v.size();i++)
        {
            insert(root,v[i]);
        }
        return root;
    }
};
// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;
