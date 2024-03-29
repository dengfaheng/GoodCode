package solver.ip;

import ilog.concert.IloException;

import java.nio.file.Path;
import java.nio.file.Paths;

public class Main
{  
  public static void main(String[] args) throws IloException
  {

		Timer watch = new Timer();
		watch.start();
		
		IPInstance instance = DataParser.parseIPFile(input);
		System.out.println(instance.toString());

		BNBSearch searcher = new BNBSearch(instance);
		int result = searcher.solveIP();
		//instance.solve();
    
		watch.stop();
		System.out.println("Instance: " + filename + " Time: " + String.format("%.2f", watch.getTime()) + "s Result: " + result + " Solution: OPT");
  }
}
