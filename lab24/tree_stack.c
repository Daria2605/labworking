#include "tree_stack.h"
#include <stdlib.h>

void ts_init(tree_stack *s){
    s->first = NULL;
}

bool ts_is_empty(tree_stack *s){
    if (s->first == NULL){
        return true;
    }
    return false;
}

void ts_push(tree_stack *s, tree val){
    ts_node *new_node = malloc(sizeof(ts_node));
    if (new_node == NULL) {
        return;
    }
    new_node->val = val;
    new_node->next = s->first;
    s->first = new_node;
}

tree ts_pop(tree_stack *s){
    if (s->first == NULL) {
        return;
    }
    ts_node *old = s->first;
    s->first = old->next;
    tree v = old->val;
    return v;
}

void tree_destroy(tree t) {
    if (t != NULL) {
        tree_destroy(t->left);
        tree_destroy(t->right);
        free(t);
    }
}

void ts_destroy(tree_stack *s){
    while (s->first != NULL){
        ts_node *current = s->first;
        s->first = current->next;
        tree_destroy(current->val);
        free(current);
    }
}