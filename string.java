
import java.util.*;
public class FirstLetter {
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		String title=s.next();
		String initialName=s.next();
		System.out.println(title+","+initialName.substring(0,1));
		
	}

}
