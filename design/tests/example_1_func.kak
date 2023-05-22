integer i;
double val = 2.5, res;
for(i = 0; i < 10; i++){
    res = operation(val, i);
    val = res;
    print(res);
    print('\n');
}
return;
func operation(double value, integer i) double{ 
    // declarations
    double res;
    // statements
    res = value*i + i;
    return res;
}