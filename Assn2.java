import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

public class Assn2 {
    public static void main(String[] args) {
        try {
            Scanner scan = new Scanner(new File(args[0]));

            while(scan.hasNextLine()) {
                String input = scan.nextLine();
                if(input.matches("[$][\\^]*(([1-9][0-9]{0,2}(,[0-9]{3})*)|0)([.][0-9]{2})?"))
                    System.out.println("Matched: " +input);
                else
                    System.out.println("Not Matched: " +input);
            }
            scan.close();
        } catch (FileNotFoundException ex) {
            System.out.println("FNF Error");
        }
    }
}
