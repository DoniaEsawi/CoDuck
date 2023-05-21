#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "semantics.h"

// actual types are: INT_TYPE, REAL_TYPE, CHAR_TYPE

int get_result_type(int type_1, int type_2, int op_type)
{ /* type check and result type */
	switch (op_type)
	{
	case NONE: /* type compatibility only, '1': compatible */
		// first type INT
		if (type_1 == INT_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == INT_TYPE || type_2 == CHAR_TYPE)
			{
				return 1;
			}
			else
			{
				type_error(type_1, type_2, op_type);
			}
		}
		// first type REAL
		else if (type_1 == REAL_TYPE)
		{
			// second type INT, REAL or CHAR
			if (type_2 == INT_TYPE || type_2 == REAL_TYPE || type_2 == CHAR_TYPE)
			{
				return 1;
			}
			else
			{
				type_error(type_1, type_2, op_type);
			}
		}
		// first type CHAR
		else if (type_1 == CHAR_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == INT_TYPE || type_2 == CHAR_TYPE)
			{
				return 1;
			}
			else
			{
				type_error(type_1, type_2, op_type);
			}
		}
		break;
	/* ---------------------------------------------------------- */
	case ARITHM_OP: /* arithmetic operator */
		// first type INT
		if (type_1 == INT_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == INT_TYPE || type_2 == CHAR_TYPE)
			{
				return INT_TYPE;
			}
			// second type REAL
			else if (type_2 == REAL_TYPE)
			{
				return REAL_TYPE;
			}
			else
			{
				type_error(type_1, type_2, op_type);
			}
		}
		// first type REAL
		else if (type_1 == REAL_TYPE)
		{
			// second type INT, REAL or CHAR
			if (type_2 == INT_TYPE || type_2 == REAL_TYPE || type_2 == CHAR_TYPE)
			{
				return REAL_TYPE;
			}
			else
			{
				type_error(type_1, type_2, op_type);
			}
		}
		// first type CHAR
		else if (type_1 == CHAR_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == INT_TYPE || type_2 == CHAR_TYPE)
			{
				return CHAR_TYPE;
			}
			// second type REAL
			else if (type_2 == REAL_TYPE)
			{
				return REAL_TYPE;
			}
			else
			{
				type_error(type_1, type_2, op_type);
			}
		}
		else
		{
			type_error(type_1, type_2, op_type);
		}
		break;
	/* ---------------------------------------------------------- */
	case INCR_OP: /* special case of INCR */
		// type INT
		if (type_1 == INT_TYPE)
		{
			return INT_TYPE;
		}
		// type REAL
		else if (type_1 == REAL_TYPE)
		{
			return REAL_TYPE;
		}
		// type CHAR
		else if (type_1 == CHAR_TYPE)
		{
			return CHAR_TYPE;
		}
		else
		{
			type_error(type_1, type_2, op_type);
		}
		break;
	/* ---------------------------------------------------------- */
	case BOOL_OP: /* Boolean operator */
		// first type INT
		if (type_1 == INT_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == INT_TYPE || type_2 == CHAR_TYPE)
			{
				return INT_TYPE; // result type is a Boolean value, which in C is represented with an integer value.
			}
			else
			{
				type_error(type_1, type_2, op_type);
			}
		}
		// first type CHAR
		else if (type_1 == CHAR_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == INT_TYPE || type_2 == CHAR_TYPE)
			{
				return CHAR_TYPE;
			}
			else
			{
				type_error(type_1, type_2, op_type);
			}
		}
		else
		{
			type_error(type_1, type_2, op_type);
		}
		break;
	/* ---------------------------------------------------------- */
	case NOTT_OP: /* special case of NOTOP */
		// type INT
		if (type_1 == INT_TYPE)
		{
			return INT_TYPE;
		}
		// type CHAR
		else if (type_1 == CHAR_TYPE)
		{
			return INT_TYPE;
		}
		else
		{
			type_error(type_1, type_2, op_type);
		}
		break;
	/* ---------------------------------------------------------- */
	case RELL_OP: /* Relational operator */
		// first type INT
		if (type_1 == INT_TYPE)
		{
			// second type INT, REAL or CHAR
			if (type_2 == INT_TYPE || type_2 == REAL_TYPE || type_2 == CHAR_TYPE)
			{
				return INT_TYPE;
			}
			else
			{
				type_error(type_1, type_2, op_type);
			}
		}
		else if (type_1 == REAL_TYPE)
		{
			// second type INT, REAL or CHAR
			if (type_2 == INT_TYPE || type_2 == REAL_TYPE || type_2 == CHAR_TYPE)
			{
				return INT_TYPE;
			}
			else
			{
				type_error(type_1, type_2, op_type);
			}
		}
		// first type CHAR
		else if (type_1 == CHAR_TYPE)
		{
			// second type INT, REAL or CHAR
			if (type_2 == INT_TYPE || type_2 == REAL_TYPE || type_2 == CHAR_TYPE)
			{
				return INT_TYPE;
			}
			else
			{
				type_error(type_1, type_2, op_type);
			}
		}
		else
		{
			type_error(type_1, type_2, op_type);
		}
		break;
	/* ---------------------------------------------------------- */
	case EQUL_OP: /* Equality operator */
		// first type INT
		if (type_1 == INT_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == INT_TYPE || type_2 == CHAR_TYPE)
			{
				return INT_TYPE;
			}
			else
			{
				type_error(type_1, type_2, op_type);
			}
		}
		else if (type_1 == REAL_TYPE)
		{
			// second type REAL
			if (type_2 == REAL_TYPE)
			{
				return INT_TYPE;
			}
			else
			{
				type_error(type_1, type_2, op_type);
			}
		}
		// first type CHAR
		else if (type_1 == CHAR_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == INT_TYPE || type_2 == CHAR_TYPE)
			{
				return INT_TYPE;
			}
			else
			{
				type_error(type_1, type_2, op_type);
			}
		}
		else
		{
			type_error(type_1, type_2, op_type);
		}
		break;
	/* ---------------------------------------------------------- */
	default: /* wrong choice case */
		fprintf(stderr, "Error in operator selection!\n");
		exit(1);
	}
}

void type_error(int type_1, int type_2, int op_type)
{ /* print type error */
	fprintf(stderr, "Type conflict between %d and %d using op type %d\n", type_1, type_2, op_type);
	exit(1);
}