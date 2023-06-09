#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "semantics.h"
extern int lineno;

// actual types are: INT_TYPE, REAL_TYPE, CHAR_TYPE

int get_result_type(int type_1, int type_2, int op_type, int lineno)
{ /* type check and result type */
	switch (op_type)
	{
	case NONE: /* type compatibility only, '1': compatible */
		// first type INT
		if (type_1 == INT_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == INT_TYPE || type_2 == BOOL_TYPE)
			{
				return 1;
			}
			else
			{
				type_error(type_1, type_2, op_type, lineno);
			}
		}
		// first type REAL
		else if (type_1 == REAL_TYPE)
		{
			// second type INT, REAL or CHAR
			if (type_2 == INT_TYPE || type_2 == REAL_TYPE || type_2 == BOOL_TYPE)
			{
				return 1;
			}
			else
			{
				type_error(type_1, type_2, op_type, lineno);
			}
		}
		// first type CHAR
		else if (type_1 == CHAR_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == CHAR_TYPE)
			{
				return 1;
			}
			else
			{
				type_error(type_1, type_2, op_type, lineno);
			}
		}
		else if (type_1 == STR_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == STR_TYPE)
			{
				return 1;
			}
			else
			{
				type_error(type_1, type_2, op_type, lineno);
			}
		}

		else if (type_1 == BOOL_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == BOOL_TYPE)
			{
				return 1;
			}
			else
			{
				type_error(type_1, type_2, op_type, lineno);
			}
		}

		else
		{
			type_error(type_1, type_2, op_type, lineno);
		}
		break;
	/* ---------------------------------------------------------- */
	case ARITHM_OP: /* arithmetic operator */
		// first type INT
		if (type_1 == INT_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == INT_TYPE)
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
				type_error(type_1, type_2, op_type, lineno);
			}
		}
		// first type REAL
		else if (type_1 == REAL_TYPE)
		{
			// second type INT, REAL or CHAR
			if (type_2 == INT_TYPE || type_2 == REAL_TYPE)
			{
				return REAL_TYPE;
			}
			else
			{
				type_error(type_1, type_2, op_type, lineno);
			}
		}

		else
		{
			type_error(type_1, type_2, op_type, lineno);
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

		else
		{
			type_error(type_1, type_2, op_type, lineno);
		}
		break;
	/* ---------------------------------------------------------- */
	case BOOL_OP: /* Boolean operator */
		// first type INT
		if (type_1 == BOOL_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == BOOL_TYPE)
			{
				return BOOL_TYPE; // result type is a Boolean value, which in C is represented with an integer value.
			}
			else
			{
				type_error(type_1, type_2, op_type, lineno);
			}
		}

		else
		{
			type_error(type_1, type_2, op_type, lineno);
		}
		break;
	/* ---------------------------------------------------------- */
	case NOTT_OP: /* special case of NOTOP */
		// type INT
		if (type_1 == BOOL_OP)
		{
			return BOOL_OP;
		}
		else
		{
			type_error(type_1, type_2, op_type, lineno);
		}
		break;
	/* ---------------------------------------------------------- */
	case RELL_OP: /* Relational operator */
		// first type INT
		if (type_1 == INT_TYPE)
		{
			// second type INT, REAL or CHAR
			if (type_2 == INT_TYPE || type_2 == REAL_TYPE)
			{
				return BOOL_OP;
			}
			else
			{
				type_error(type_1, type_2, op_type, lineno);
			}
		}
		else if (type_1 == REAL_TYPE)
		{
			// second type INT, REAL or CHAR
			if (type_2 == INT_TYPE || type_2 == REAL_TYPE)
			{
				return BOOL_OP;
			}
			else
			{
				type_error(type_1, type_2, op_type, lineno);
			}
		}
		// first type CHAR
		else if (type_1 == CHAR_TYPE)
		{
			// second type INT, REAL or CHAR
			if (type_2 == CHAR_TYPE)
			{
				return BOOL_OP;
			}
			else
			{
				type_error(type_1, type_2, op_type, lineno);
			}
		}
		// first type CHAR
		else if (type_1 == STR_TYPE)
		{
			// second type INT, REAL or CHAR
			if (type_2 == STR_TYPE)
			{
				return BOOL_OP;
			}
			else
			{
				type_error(type_1, type_2, op_type, lineno);
			}
		}
		else if (type_1 == BOOL_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == BOOL_TYPE)
			{
				return BOOL_OP;
			}
			else
			{
				type_error(type_1, type_2, op_type, lineno);
			}
		}
		else
		{
			type_error(type_1, type_2, op_type, lineno);
		}
		break;
	/* ---------------------------------------------------------- */
	case EQUL_OP: /* Equality operator */
		// first type INT
		if (type_1 == INT_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == INT_TYPE || type_2 == REAL_TYPE)
			{
				return BOOL_OP;
			}
			else
			{
				type_error(type_1, type_2, op_type, lineno);
			}
		}
		else if (type_1 == REAL_TYPE)
		{
			// second type REAL
			if (type_2 == REAL_TYPE || type_2 == INT_TYPE)
			{
				return BOOL_OP;
			}
			else
			{
				type_error(type_1, type_2, op_type, lineno);
			}
		}
		// first type CHAR
		else if (type_1 == CHAR_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == CHAR_TYPE)
			{
				return BOOL_OP;
			}
			else
			{
				type_error(type_1, type_2, op_type, lineno);
			}
		}
		else if (type_1 == STR_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == STR_TYPE)
			{
				return BOOL_OP;
			}
			else
			{
				type_error(type_1, type_2, op_type, lineno);
			}
		}
		else if (type_1 == BOOL_TYPE)
		{
			// second type INT or CHAR
			if (type_2 == BOOL_TYPE)
			{
				return BOOL_OP;
			}
			else
			{
				type_error(type_1, type_2, op_type, lineno);
			}
		}
		else
		{
			type_error(type_1, type_2, op_type, lineno);
		}
		break;
	/* ---------------------------------------------------------- */
	default: /* wrong choice case */
		fprintf(stderr, "Error in operator selection!\n");
		exit(1);
	}
}

void type_error(int type_1, int type_2, int op_type, int lineno)
{ /* print type error */
	fprintf(stderr, "Type conflict between  ");
	/* first type */
	switch (type_1)
	{
	case INT_TYPE:
		fprintf(stderr, "INT");
		break;
	case REAL_TYPE:
		fprintf(stderr, "REAL");
		break;
	case CHAR_TYPE:
		fprintf(stderr, "CHAR");
		break;
	case BOOL_TYPE:
		fprintf(stderr, "BOOL");
		break;
	case STR_TYPE:
		fprintf(stderr, "STRING");
		break;
	case VOID_TYPE:
		fprintf(stderr, "VOID");
		break;
	default:
		fprintf(stderr, "UNKNOWN");
		break;
	}
	fprintf(stderr, " and ");
	/* second type */
	switch (type_2)
	{
	case INT_TYPE:
		fprintf(stderr, "INT");
		break;
	case REAL_TYPE:
		fprintf(stderr, "REAL");
		break;
	case CHAR_TYPE:
		fprintf(stderr, "CHAR");
		break;
	case BOOL_TYPE:
		fprintf(stderr, "BOOL");
		break;
	case STR_TYPE:
		fprintf(stderr, "STRING");
		break;
	case VOID_TYPE:
		fprintf(stderr, "VOID");
		break;
	default:
		fprintf(stderr, "UNKNOWN");
		break;
	}
	fprintf(stderr, " in ");
	/* operator type */
	switch (op_type)
	{
	case NONE:
		fprintf(stderr, "NONE");
		break;
	case ARITHM_OP:
		fprintf(stderr, "ARITHMETIC");
		break;
	case INCR_OP:
		fprintf(stderr, "INCREMENT");
		break;
	case BOOL_OP:
		fprintf(stderr, "BOOLEAN");
		break;
	case NOTT_OP:
		fprintf(stderr, "NOT");
		break;
	case RELL_OP:
		fprintf(stderr, "RELATIONAL");
		break;
	case EQUL_OP:
		fprintf(stderr, "EQUALITY");
		break;
	default:
		fprintf(stderr, "Error in operator selection!\n");
		exit(1);
	}
	/* line */
	fprintf(stderr, " in line %d\n", lineno);

	exit(1);
}