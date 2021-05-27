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