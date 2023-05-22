// declarations
integer i;                    // simple variable
char c = 'c';             // one with init
double val = 2.5, res; // two variables, one with init and one array
double p;                // pointer variable
// statements
p = res;
for(i = 0; i < 10; i++){
	if(i > 5){
    	break;
	}
	elif(i == 5){
		i = 2 * i;
		val = func1();
		p = add(val, i);
		print(res);
		print("\n");
		continue;
	}
	else{
		p = add(val, i);
    	val = res;
   	 	print(res);
    	print("\n");
    	p = p + 1;
	}

	if(i == 2 && val == 4.5){
		print("iteration: 3\n");
	}
}

while(i < 12){
	print(i);
	print(" ");
	func2(c);
	i++;
}
print("\n");
return; /* RETURN SEMI */
// other functions (functions)
func func1() integer{ 		/* without parameters */
	return 5;
}
func func2(char c)void{ /* with one parameter */
	char s;
	s = c;
	print(s);
}
func add (double a, integer b)double{  /* with two parameters */
    double res;
    res = a + b + (-5);
    return res;
}