// Code generated from ExprGo.g4 by ANTLR 4.9. DO NOT EDIT.

package parser // ExprGo

import "github.com/antlr/antlr4/runtime/Go/antlr"

// BaseExprGoListener is a complete listener for a parse tree produced by ExprGoParser.
type BaseExprGoListener struct{}

var _ ExprGoListener = &BaseExprGoListener{}

// VisitTerminal is called when a terminal node is visited.
func (s *BaseExprGoListener) VisitTerminal(node antlr.TerminalNode) {}

// VisitErrorNode is called when an error node is visited.
func (s *BaseExprGoListener) VisitErrorNode(node antlr.ErrorNode) {}

// EnterEveryRule is called when any rule is entered.
func (s *BaseExprGoListener) EnterEveryRule(ctx antlr.ParserRuleContext) {}

// ExitEveryRule is called when any rule is exited.
func (s *BaseExprGoListener) ExitEveryRule(ctx antlr.ParserRuleContext) {}

// EnterProg is called when production prog is entered.
func (s *BaseExprGoListener) EnterProg(ctx *ProgContext) {}

// ExitProg is called when production prog is exited.
func (s *BaseExprGoListener) ExitProg(ctx *ProgContext) {}

// EnterObj is called when production obj is entered.
func (s *BaseExprGoListener) EnterObj(ctx *ObjContext) {}

// ExitObj is called when production obj is exited.
func (s *BaseExprGoListener) ExitObj(ctx *ObjContext) {}
