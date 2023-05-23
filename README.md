# CoDuck

<div align="center">
    <img src="https://user-images.githubusercontent.com/56982963/233788964-1a881eeb-e670-4486-9ba7-3656643ae470.svg#gh-dark-mode-only" />
    <img src="https://user-images.githubusercontent.com/56982963/233789407-d3b3fea9-8e90-4e1b-b3d5-7ecd84d6b850.svg#gh-light-mode-only"/>
</div>

# TODO

- [ ] code generation using stack machines
- [x] enums
- [x] switch cases (should be easy)
- [x] if variable is not initialized, then warning
- [x] if variable is used without being initialized, then error (in char and strings only)
- [x] if variable is not used, then warning
- [x] Check if always false, then warning
- [x] do until (easy)
- [x] handling constant variables checks
- [x] (Not sure if needed) treating INT as a subtype of REAL (double, floats) "y3ni momken a3mel assignment l variable float b int" in operations only
- [x] check the symbol table format (scopes)
- [x] print the scope symbol table as a table in the output file
- [ ] test the semantic analyzer more
- [x] edit the error messages to be more indicative (super easy)

# Table of Contents

- [CoDuck](#coduck)
- [TODO](#todo)
- [Table of Contents](#table-of-contents)
- [program structure](#program-structure)
- [Some limitations:](#some-limitations)
- [Symbol table](#symbol-table)
- [Language specs](#language-specs)
  - [Tokens](#tokens)
    - [types keywords](#types-keywords)
    - [conditional statement keywords](#conditional-statement-keywords)
    - [loops keywords](#loops-keywords)
    - [funciton keywords](#funciton-keywords)
    - [enums](#enums)
    - [operators](#operators)
    - [symbols](#symbols)
    - [Other tokens](#other-tokens)
    - [Comments](#comments)
    - [Grammar design](#grammar-design)
      - [Declarations](#declarations)
        - [Variables](#variables)
        - [Constants](#constants)
      - [Expressions](#expressions)
      - [Assignments](#assignments)
      - [If-statement](#if-statement)
      - [Swicth...case](#swicthcase)
      - [while-loops](#while-loops)
      - [Do Until loops](#do-until-loops)
      - [for-statements](#for-statements)
      - [Functions](#functions)
      - [enums](#enums-1)
- [How To Run](#how-to-run)
- [Resources](#resources)
  - [Links](#links)
    - [C Operator Precedence](#c-operator-precedence)
    - [C Grammar](#c-grammar)

# program structure

1. // optional function declarations
1. // statements
1. // end;

# Some limitations:

1. in for loops declaration (i=0; i<1; i++) is valid, but (int i=0; i<1; i++) is not
1. In case of initialization in the same line of declaration, only constants are allowed. i.e. integer x = 5; is valid, but integer x = y; is not
1. There's no bit-wise logical operations

# Symbol table

- Global scope table is printed after parsing
- for each new scope, we create a new symboltable and we print it while exiting the scope

1. Global Symbol Table structure

```
==================================================================================
                                   Scope Symbol Table
------------ -------------- ------------ --------------------------- ------- ----------
Name         Type            Value       Parent Declared in          Scope   Line Numbers
------------ -------------- ------------ --------------------------- ------- ----------
a            INT            0            2                           1        4
b            INT            8            2                           1        5      6
j            INT            2            2                           1        3      10     15     22     27
==================================================================================


```

1. Block Symbol Table structure

```
=====================================================================
                       Main Symbol Table
------------ -------------- ------------ ------- -------------------
Name         Type            Value        Scope  Line Numbers
------------ -------------- ------------ ------- -------------------
test         STRING         (null)         0     48
coduck       INT            1              0     34
func1        func ret INT   0              0     2
===================================================================
```

# Language specs

## Tokens

### types keywords

1. CHAR
2. INTEGER
3. FLOAT
4. BOOL
5. VOID
6. STRING

### conditional statement keywords

1. IF
2. ELIF
3. ELSE

4. CASE
5. SWITCH
6. DEFAULT
7. true (case sensitive)
8. false (case sensitive)

### loops keywords

1. WHILE
2. FOR
3. DO
4. UNTIL
5. CONTINUE
6. BREAK

### funciton keywords

1. FUNC
2. RETURN

### enums

1. ENUM

### operators

1. ADD_OP `+`
2. SUB_OP `-`
3. MUL_OP`*`
4. DIV_OP`/`
5. MOD_OP`%`
6. INC_OP`++`
7. DEC_OP`--`
8. OR_OP`||`, `or`
9. AND_OP`&&`, `and`
10. NOT_OP`!`, `not`
11. EQ_OP`==`
12. NE_OP`!=`
13. LT_OP`<`
14. GT_OP`>`
15. LE_OP`<=`
16. GE_OP`>=`
17. ASSIGN_OP`=`
18. BIT_OR_OP`|`
19. & -> for `REF` and `bitwise-and`
20. BIT_XOR_OP`^`
21. BIT_LSHIFT_OP`<<`
22. BIT_RSHIFT_OP`>>`
23. BIT_NOT_OP`~`

### symbols

1. LEFT_PAREN`(`
2. RIGHT_PAREN`)`
3. LEFT_SQ_BRACKET`[`
4. RIGHT_SQ_BRACKET`]`
5. LEFT_CURLY_BRACKET`{`
6. RIGHT_CURLY_BRACKET`}`
7. COMMA`,`
8. DOT`.`
9. SEMICOLON`;`
10. QUESTION_MARK`?`

### Other tokens

1. IDENT
2. CONST_INT
3. CONST_FLOAT
4. CONST_CHAR
5. STRING_LITERAL

## Comments

- Single line: // this is a single line comment
- Multi-line: /_ This is a Multi-line Comment _/

## Grammar design

### Declarations

#### Variables

<center>
<img src="design/assets/declarations.png" width="400px"/>
</center>

a. examples

```c
String S = "hello, world !"; // this is a string

String S2 = 'hii !'; // this is also a string

String _S = 5; // invalid indentifier

float float_number2 = .6; // invalid float

float float_number3 = 0.; // valid float

float float_number4 = 00.6 // invalid float

float float_number5 = -0.006 // valid float

integer x = 000 // invalid integer
```

#### Constants

<center>
<img src="design/assets/const.png" width="400px"/>
</center>

### Expressions

<center>
<img src="design/assets/expressions.png" width="400px"/>
</center>

### Assignments

<center>
<img src="design/assets/assignments.png" width="400px"/>
</center>

### If-statement

```golang
if(expression logical_operator expression){ // the parenthesis are optional
}elif(expression logical_operator expression){// the parenthesis are optional
}else{
}
```

### Swicth...case

```c
switch (expression){ // the parenthesis are optional
    case constant1:
      // statements
      break;

    case constant2:
      // statements
      break;
    .
    .
    .
    default:
      // default statements
}
```

### while-loops

```c
while(condition){ // parenthesis are optional


}
```

### Do Until loops

```c
do{
...
}until(condition); // parenthesis are optional
```

### for-statements

```c
for(var; cond; postfix;){
// parenthesis are optional
}
```

### Functions

```golang

func function_name(type name, ...) return_type{
return value;
}

```

### enums

```c
enum Level {
  LOW,
  MEDIUM,
  HIGH
};

enum a{
x = 0,
y= 1
};
```

## Quadruples

| Quadruple  | Quadruple Description | 
| :-------------- |:----------------:|
| push J          | used for the variables declarations (i.e int J;) |
| Add,Sub,Mul,<,> | used for the addtion of the two previous operands (i.e J = 1 + 2 will be 1 , 2, ADD) |
| store J         | used for the store of the previous value in the variable J (i.e J = 1 + 2 will be 1 , 2, ADD, store J)|
| if false goto # | if condition false goto the else part at line (#)|

## How To Run

cd to the project directory "design/tests"

- Run the following command to compile the code

```bash
bison -d  parser.y
flex lex.l
gcc -o compiler parser.tab.c lex.yy.c
rm lex.yy.c parser.tab.c
```

- to run a test file, run the following command

```bash
.\compiler test_file_name symbol_table_file_name revisit_queue_file_name

```

example:

```bash
.\compiler full_example.kak  symbol_table_full_example.out revisit_queue_full_example.out
```

## Resources

### Links

#### C Operator Precedence

https://en.cppreference.com/w/c/language/operator_precedence

#### C Grammar

http://marvin.cs.uidaho.edu/Teaching/CS445/c-Grammar.pdf

```

```
