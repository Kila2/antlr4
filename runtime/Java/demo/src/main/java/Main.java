import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.TokenStream;

public class Main {
	public static void main(String[] args) {
		CharStream stream = CharStreams.fromString("xx");
		ExprJAVALexer lexer =  new ExprJAVALexer(stream);
		TokenStream tokenStream = new CommonTokenStream(lexer);
		ExprJAVAParser parser = new ExprJAVAParser(tokenStream);
		System.out.println(parser.prog().toStringTree());
	}
}
