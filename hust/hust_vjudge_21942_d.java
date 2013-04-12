// from wangqiang
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		BigInteger result = new BigInteger("0");
		while (scan.hasNext()) {
			BigInteger bi = scan.nextBigInteger();
			
			String s=bi.toString();
            if(s.equals("0")) 
            	break;
			result = result.add(bi);
			
		}
		System.out.println(result);
	}

}
