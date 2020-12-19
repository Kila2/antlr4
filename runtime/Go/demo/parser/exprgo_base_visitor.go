// Code generated from ExprGo.g4 by ANTLR 4.9. DO NOT EDIT.

package parser // ExprGo

import "github.com/antlr/antlr4/runtime/Go/antlr"

type BaseExprGoVisitor struct {
	*antlr.BaseParseTreeVisitor
}

func (v *BaseExprGoVisitor) VisitProg(ctx *ProgContext) interface{} {
	return v.VisitChildren(ctx)
}

func (v *BaseExprGoVisitor) VisitObj(ctx *ObjContext) interface{} {
	return v.VisitChildren(ctx)
}
