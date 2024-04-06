#include "tree.h"
#include <stdlib.h>
#include <stdio.h>

bool is_empty(tree t){
    return (t == NULL);
}

tree empty_tree(){
    return NULL;
}

tree build_tree(float val, tree l, tree r){
    tree t = malloc(sizeof(node));
    t->val = val;
    t->left = l;
    t->right = r;
    return t;
}

float root_val(tree t){
    return t->val;
}

tree left(tree t){
    return t->left;
}

tree right(tree t){
    return t->right;
}

void destroy_root(tree t){
    if (t) {
        if (t->left) destroy_root(t->left);
        if (t->right) destroy_root(t->right);

    free(t);
    t = NULL;}
}

tree* find(tree* t, float val){
    if (*t == NULL){
        return t;
    }
    if (val == (*t)->val){
        return t;
    } else if (val < (*t)->val){
        return find(&((*t)->left), val);
    } else {
        return find(&((*t)->right), val);
    }
}

bool add(tree* t, float val){
    tree* place = find(t, val);
    if (*place != NULL){
        return false;
    }
    tree new_node = malloc(sizeof(node));
    new_node->val = val;
    new_node->left = NULL;
    new_node->right = NULL;
    *place = new_node;
    return true;
}

bool delete(tree* t, float val){
    tree* place = find(t, val);
    if (*place == NULL) {
        return false;
    }
    if ((*place)->left == NULL && (*place)->right == NULL){
        free(*place);
        *place = NULL;
    } else if ((*place)->left == NULL){
        tree new_right = (*place)->right;
        free(*place);
        *place = new_right;
    } else if ((*place)->right == NULL){
        tree new_left = (*place)->left;
        free(*place);
        *place = new_left;
    } else {
        tree *r = &((*place)->right);
        if ((*r)->left == NULL) {
            tree new_root = *r;
            new_root->left = (*place)->left;
            free(*place);
            *place = new_root;
        } else {
            while ((*r)->left != NULL){
                r = &((*r)->left);
                tree min_r = (*r);
                *r = (*r)->right;
                min_r->right = (*place)->right;
                min_r->left = (*place)->left;
                free(*place);
                *place = min_r;
            }
        }
    }
    return true;
}

bool checking_elements(tree t, int start, int end) {
    if (t == NULL) {
        return true;
    }
    if (t->left == NULL && t->right == NULL) {
        if (t->val < start || t->val > end){
        return false;
        }
    }
    return checking_elements(t->left, start, end) && checking_elements(t->right, start, end);
}

static void _print_tree(tree root, int n) {
    if (root == NULL) {
        return;
    }
    _print_tree(root->right, n + 1);
    for (int i = 0; i < n; i++) {
        printf("\t");
    }
    printf("%.3f\n", root->val);
    _print_tree(root->left, n + 1);
}

void print_tree(tree root) {
    _print_tree(root, 1);
}
