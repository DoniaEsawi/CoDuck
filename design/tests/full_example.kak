// program: declarations statements RETURN SEMI functions
// main function (declarations statements)
// declarations
integer i;                    // simple variable
char c = 'c';             // one with init
string s = "hello";
double val = 2.5, x; // two variables, one with init and one array
integer val2;
integer p;
// statements
for(i = 0; i < 10; i++){ // for
	if(i > 5){ // if-else
			i = i + 1;
    	break;
	}
	elif(i == 5){
		i = 2 * i;
		val2 = func1();
		print("\n");
		continue;
	}
	else{
			val=add(val, i);
    	print("\n");
    	p = p + 1;
	}
	
	if(i == 2 && val == 4.5){ // if
		print("iteration: 3\n");
		val2=add(val, i);
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
