#ifndef LEETCODE_BASE_TREE_H
#define LEETCODE_BASE_TREE_H

#endif //LEETCODE_BASE_TREE_H

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <string>
using namespace  std;

// 空节点
const int null = -9999;

// definition for a binary tree node.
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BaseTree {
public:
    BaseTree();
    // create
    TreeNode* createTreeFromLevelOrderVector(vector<int>& v, int size, int start=0);
    TreeNode* createTreeFromLevelOrderVector(vector<int> & v);

    // traversal
    void levelOrderTraversal(TreeNode* root);
    void preOrderTraversal(TreeNode* root);
    void inOrderTraversal(TreeNode* root);
    void postOrderTraversal(TreeNode* root);

};


