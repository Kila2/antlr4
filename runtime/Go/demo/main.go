package main

import (
	"fmt"
	"os"

	"example.com/demo/parser"
	"github.com/antlr/antlr4/runtime/Go/antlr"
)

type TreeShapeListener struct {
	*parser.BaseExprGoListener
}

func NewTreeShapeListener() *TreeShapeListener {
	return new(TreeShapeListener)
}

func (this *TreeShapeListener) EnterEveryRule(ctx antlr.ParserRuleContext) {
	fmt.Println(ctx.GetText())
}

func main() {
	input, _ := antlr.NewFileStream(os.Args[1])
	lexer := parser.NewExprGoLexer(input)
	stream := antlr.NewCommonTokenStream(lexer, 0)
	p := parser.NewExprGoParser(stream)
	p.AddErrorListener(antlr.NewDiagnosticErrorListener(true))
	p.BuildParseTrees = true
	tree := p.Prog()
	// antlr.ParseTreeWalkerDefault.Walk(nil, tree)
	antlr.ParseTreeWalkerDefault.Walk(NewTreeShapeListener(), tree)
}
