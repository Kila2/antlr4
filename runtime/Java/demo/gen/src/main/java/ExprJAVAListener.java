// Generated from /Users/kila/Desktop/workspace/antlr4/runtime/Java/demo/ExprJAVA.g4 by ANTLR 4.9
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link ExprJAVAParser}.
 */
public interface ExprJAVAListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link ExprJAVAParser#prog}.
	 * @param ctx the parse tree
	 */
	void enterProg(ExprJAVAParser.ProgContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprJAVAParser#prog}.
	 * @param ctx the parse tree
	 */
	void exitProg(ExprJAVAParser.ProgContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExprJAVAParser#obj}.
	 * @param ctx the parse tree
	 */
	void enterObj(ExprJAVAParser.ObjContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExprJAVAParser#obj}.
	 * @param ctx the parse tree
	 */
	void exitObj(ExprJAVAParser.ObjContext ctx);
}