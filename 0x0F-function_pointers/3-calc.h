#ifndef CALC_H
#define CALC_H
int op_add(int a, int b);
#endif

#ifndef CALC_H
#define CALC_H
int op_sub(int a, int b);
#endif

#ifndef CALC_H
#define CALC_H
int op_mul(int a, int b);
#endif

#ifndef CALC_H
#define CALC_H
int op_div(int a, int b);
#endif

#ifndef CALC_H
#define CALC_H
int op_mod(int a, int b);
#endif

#ifndef CALC_H
#define CALC_H
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#ifndef CALC_H
#define CALC_H

int (*get_op_func(char *s))(int, int);

#endif

#ifndef CALC_H
#define CALC_H

int main(int argc, char *argv[]);

#endif
