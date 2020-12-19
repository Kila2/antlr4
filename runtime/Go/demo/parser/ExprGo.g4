grammar ExprGo;

options { language=Go; } 

prog: obj;

obj
   : Char+
   ;
   
// token
Char : .;