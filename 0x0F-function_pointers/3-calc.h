#ifndef 3_CALC_H
#define 3_CALC_H

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
int main(int argc, char *argv[]);

#endif /*3_CALC_H *
