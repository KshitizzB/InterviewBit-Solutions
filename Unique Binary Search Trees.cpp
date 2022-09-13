/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
vector<TreeNode*> generateTreesUtil(int x, int y) {
    vector<TreeNode*> v;
    if(x>y){
        v.push_back(NULL);
        return v;
    }
    for(int i=x; i<=y; i++){
        vector<TreeNode*> l  = generateTreesUtil(x, i-1);
        vector<TreeNode*> r  = generateTreesUtil(i+1, y);
        for(int j=0; j<l.size(); j++){
            TreeNode* p = l[j];
            for(int k=0; k<r.size(); k++){
                TreeNode* q = r[k];
                TreeNode* n = new TreeNode(i);
                n->left = p;
                n->right = q;
                v.push_back(n);
            }
        }
    }
    return v;
} 
 
vector<TreeNode*> Solution::generateTrees(int A) {
    return generateTreesUtil(1, A);
}