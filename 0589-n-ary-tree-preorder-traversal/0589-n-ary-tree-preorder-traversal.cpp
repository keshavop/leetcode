/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    // to store the node
    vector<int> ans;
    
    // transverse function
    void transverse(Node* root){
        if(root == NULL)
            return;
        ans.push_back(root->val);
        
        for(auto node:root->children){
            transverse(node);
        }
    } 
    
    vector<int> preorder(Node* root) {
       transverse(root);
        return ans;
    }
};