/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution{
public:
    int ki = 0;
    int contador = 0;
    
     void erd (TreeNode * r, int k){
         
         if (r != NULL) {
              
              erd (r->left, k);
              contador++;
              if (contador == k){
                 ki = r->val;
            } 
              erd (r->right, k);
          }  
    }
    
    int kthSmallest(TreeNode* root, int k){
        
        erd(root, k);
        
        return ki;   
        
        }   

};