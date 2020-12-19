
// Generated from /Users/kila/Desktop/workspace/antlr4/runtime/Cpp/demo/ExprCpp.g4 by ANTLR 4.8



#include "ExprCppParser.h"


using namespace antlrcpp;
using namespace antlr4;

ExprCppParser::ExprCppParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExprCppParser::~ExprCppParser() {
  delete _interpreter;
}

std::string ExprCppParser::getGrammarFileName() const {
  return "ExprCpp.g4";
}

const std::vector<std::string>& ExprCppParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ExprCppParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

ExprCppParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprCppParser::ObjContext* ExprCppParser::ProgContext::obj() {
  return getRuleContext<ExprCppParser::ObjContext>(0);
}


size_t ExprCppParser::ProgContext::getRuleIndex() const {
  return ExprCppParser::RuleProg;
}


ExprCppParser::ProgContext* ExprCppParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprCppParser::RuleProg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(4);
    obj();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjContext ------------------------------------------------------------------

ExprCppParser::ObjContext::ObjContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprCppParser::ObjContext::Char() {
  return getTokens(ExprCppParser::Char);
}

tree::TerminalNode* ExprCppParser::ObjContext::Char(size_t i) {
  return getToken(ExprCppParser::Char, i);
}


size_t ExprCppParser::ObjContext::getRuleIndex() const {
  return ExprCppParser::RuleObj;
}


ExprCppParser::ObjContext* ExprCppParser::obj() {
  ObjContext *_localctx = _tracker.createInstance<ObjContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprCppParser::RuleObj);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(7); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(6);
      match(ExprCppParser::Char);
      setState(9); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ExprCppParser::Char);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> ExprCppParser::_decisionToDFA;
atn::PredictionContextCache ExprCppParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExprCppParser::_atn;
std::vector<uint16_t> ExprCppParser::_serializedATN;

std::vector<std::string> ExprCppParser::_ruleNames = {
  "prog", "obj"
};

std::vector<std::string> ExprCppParser::_literalNames = {
};

std::vector<std::string> ExprCppParser::_symbolicNames = {
  "", "Char"
};

dfa::Vocabulary ExprCppParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExprCppParser::_tokenNames;

ExprCppParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x3, 0xe, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x6, 0x3, 0xa, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0xb, 0x3, 
    0x3, 0x2, 0x2, 0x4, 0x2, 0x4, 0x2, 0x2, 0x2, 0xc, 0x2, 0x6, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x9, 0x3, 0x2, 0x2, 0x2, 0x6, 0x7, 0x5, 0x4, 0x3, 0x2, 
    0x7, 0x3, 0x3, 0x2, 0x2, 0x2, 0x8, 0xa, 0x7, 0x3, 0x2, 0x2, 0x9, 0x8, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0xb, 0x3, 0x2, 0x2, 0x2, 0xb, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0xb, 0xc, 0x3, 0x2, 0x2, 0x2, 0xc, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x3, 0xb, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExprCppParser::Initializer ExprCppParser::_init;
