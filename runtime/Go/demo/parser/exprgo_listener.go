// Code generated from ExprGo.g4 by ANTLR 4.9. DO NOT EDIT.

package parser // ExprGo

import "github.com/antlr/antlr4/runtime/Go/antlr"

// ExprGoListener is a complete listener for a parse tree produced by ExprGoParser.
type ExprGoListener interface {
	antlr.ParseTreeListener

	// EnterProg is called when entering the prog production.
	EnterProg(c *ProgContext)

	// EnterObj is called when entering the obj production.
	EnterObj(c *ObjContext)

	// ExitProg is called when exiting the prog production.
	ExitProg(c *ProgContext)

	// ExitObj is called when exiting the obj production.
	ExitObj(c *ObjContext)
}
