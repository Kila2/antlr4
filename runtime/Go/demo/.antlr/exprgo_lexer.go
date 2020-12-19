// Code generated from /Users/kila/Desktop/workspace/antlr4/runtime/Go/demo/ExprGo.g4 by ANTLR 4.8. DO NOT EDIT.

package parser

import (
	"fmt"
	"unicode"

	"github.com/antlr/antlr4/runtime/Go/antlr"
)

// Suppress unused import error
var _ = fmt.Printf
var _ = unicode.IsLetter

var serializedLexerAtn = []uint16{
	3, 24715, 42794, 33075, 47597, 16764, 15335, 30598, 22884, 2, 3, 7, 8,
	1, 4, 2, 9, 2, 3, 2, 3, 2, 2, 2, 3, 3, 3, 3, 2, 2, 2, 6, 2, 3, 3, 2, 2,
	2, 3, 5, 3, 2, 2, 2, 5, 6, 11, 2, 2, 2, 6, 4, 3, 2, 2, 2, 3, 2, 2,
}

var lexerDeserializer = antlr.NewATNDeserializer(nil)
var lexerAtn = lexerDeserializer.DeserializeFromUInt16(serializedLexerAtn)

var lexerChannelNames = []string{
	"DEFAULT_TOKEN_CHANNEL", "HIDDEN",
}

var lexerModeNames = []string{
	"DEFAULT_MODE",
}

var lexerLiteralNames []string

var lexerSymbolicNames = []string{
	"", "Char",
}

var lexerRuleNames = []string{
	"Char",
}

type ExprGoLexer struct {
	*antlr.BaseLexer
	channelNames []string
	modeNames    []string
	// TODO: EOF string
}

var lexerDecisionToDFA = make([]*antlr.DFA, len(lexerAtn.DecisionToState))

func init() {
	for index, ds := range lexerAtn.DecisionToState {
		lexerDecisionToDFA[index] = antlr.NewDFA(ds, index)
	}
}

func NewExprGoLexer(input antlr.CharStream) *ExprGoLexer {

	l := new(ExprGoLexer)

	l.BaseLexer = antlr.NewBaseLexer(input)
	l.Interpreter = antlr.NewLexerATNSimulator(l, lexerAtn, lexerDecisionToDFA, antlr.NewPredictionContextCache())

	l.channelNames = lexerChannelNames
	l.modeNames = lexerModeNames
	l.RuleNames = lexerRuleNames
	l.LiteralNames = lexerLiteralNames
	l.SymbolicNames = lexerSymbolicNames
	l.GrammarFileName = "ExprGo.g4"
	// TODO: l.EOF = antlr.TokenEOF

	return l
}

// ExprGoLexerChar is the ExprGoLexer token.
const ExprGoLexerChar = 1
