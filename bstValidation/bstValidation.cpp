bool is_bst(treeNode* root, int min, int max)
{
    if (root==NULL)
        return true;   
    if (root->value < min || root->value > max)
        return false;
    return is_bst(root->left, min, root->value-1) &&
           is_bst(root->right, root->value+1, max);
}

bool validate_bst(treeNode* root)
{   
    return(is_bst(root, INT_MIN, INT_MAX));
}
