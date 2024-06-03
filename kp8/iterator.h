#pragma once
#include "list.h"

typedef struct {
  list *lst;
  node *prev;
  node *eg;
} iter;

iter iter_begin(list *l);
bool iter_eq(iter it1, iter it2);
void iter_inc2(iter *it);
bool iter_inc(iter *it, iter *head);
uint iter_get_val(iter *it);
void add_el(iter *it, uint el);
void delete_el(iter *it);
void print_list(iter start);