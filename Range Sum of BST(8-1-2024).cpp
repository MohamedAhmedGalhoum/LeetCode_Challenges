int rangeSumBST(TreeNode* root, int &l, int &h) {
      if(root == nullptr) return 0;
      int sum = 0;
      if(root->val >= l and root->val <= h)
          sum += root->val;
      return rangeSumBST(root->left , l , h) + rangeSumBST(root->right , l , h) + sum;
  }
