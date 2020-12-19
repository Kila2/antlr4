grammar ExprCpp;

options { language=Cpp; } 

prog: obj;

obj
   : Char+
   ;
   
// token
Char : .;