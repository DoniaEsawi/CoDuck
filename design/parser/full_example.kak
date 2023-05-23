// program: declarations statements RETURN SEMI functions
// main function (declarations statements)
// declarations
integer i;                    // simple variable
char c = 'c';             // one with init
double val = 2.5, x; // two variables, one with init and one array
integer p;
// statements
for(i = 0; i < 10; i++){ // for
	if(i > 5){ // if-else
    	break;
	}
	elif(i == 5){
		i = 2 * i;
		val = func1();
		print("hello");
		continue;
	}
	else{
    	print("\n");
    	p = p + 1;
	}
	
	if(i == 2 && val == 4.5){ // if
		print("iteration: 3\n");
	}
}

while(i < 12){ // while
	print(i);
	print(" ");
	func2(c);
	i++;
}
print("\n");
return; /* RETURN SEMI */
// other functions (functions)
func func1() integer{ 		/* without parameters */
	// statements
	return 5;
}
func func2(char c)void{ /* with one parameter */
	// declarations
	// statements
	print(c);
}
func add (double a, integer b)double{  /* with two parameters */
    // declarations
    double res;
    // statements
    res = a + b;
    return res;
}
