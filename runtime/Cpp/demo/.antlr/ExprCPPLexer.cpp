
// Generated from /Users/kila/Desktop/workspace/antlr4/runtime/Cpp/demo/ExprCpp.g4 by ANTLR 4.8


#include "ExprCppLexer.h"


using namespace antlr4;


ExprCppLexer::ExprCppLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExprCppLexer::~ExprCppLexer() {
  delete _interpreter;
}

std::string ExprCppLexer::getGrammarFileName() const {
  return "ExprCpp.g4";
}

const std::vector<std::string>& ExprCppLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& ExprCppLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& ExprCppLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& ExprCppLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& ExprCppLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> ExprCppLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& ExprCppLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> ExprCppLexer::_decisionToDFA;
atn::PredictionContextCache ExprCppLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExprCppLexer::_atn;
std::vector<uint16_t> ExprCppLexer::_serializedATN;

std::vector<std::string> ExprCppLexer::_ruleNames = {
  u8"Char"
};

std::vector<std::string> ExprCppLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> ExprCppLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> ExprCppLexer::_literalNames = {
};

std::vector<std::string> ExprCppLexer::_symbolicNames = {
  "", u8"Char"
};

dfa::Vocabulary ExprCppLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExprCppLexer::_tokenNames;

ExprCppLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
    0x2, 0x3, 0x7, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x3, 0x2, 0x3, 0x2, 0x2, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x3, 0x5, 0x3, 0x2, 0x2, 0x2, 0x5, 0x6, 0xb, 0x2, 0x2, 0x2, 0x6, 
    0x4, 0x3, 0x2, 0x2, 0x2, 0x3, 0x2, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExprCppLexer::Initializer ExprCppLexer::_init;
