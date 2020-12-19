// Generated from /Users/kila/Desktop/workspace/antlr4/runtime/Java/demo/ExprJAVA.g4 by ANTLR 4.9
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link ExprJAVAParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface ExprJAVAVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link ExprJAVAParser#prog}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitProg(ExprJAVAParser.ProgContext ctx);
	/**
	 * Visit a parse tree produced by {@link ExprJAVAParser#obj}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitObj(ExprJAVAParser.ObjContext ctx);
}