// Code generated from ExprGo.g4 by ANTLR 4.9. DO NOT EDIT.

package parser // ExprGo

import "github.com/antlr/antlr4/runtime/Go/antlr"

// A complete Visitor for a parse tree produced by ExprGoParser.
type ExprGoVisitor interface {
	antlr.ParseTreeVisitor

	// Visit a parse tree produced by ExprGoParser#prog.
	VisitProg(ctx *ProgContext) interface{}

	// Visit a parse tree produced by ExprGoParser#obj.
	VisitObj(ctx *ObjContext) interface{}
}
