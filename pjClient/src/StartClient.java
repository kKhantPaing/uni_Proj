import HashApp.*;
import org.omg.CosNaming.*;
import org.omg.CosNaming.NamingContextPackage.*;
import org.omg.CORBA.*;
import java.io.*;
import java.util.*; 
public class StartClient {
 
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
      try {
    	ORB orb = ORB.init(args, null);
	    org.omg.CORBA.Object objRef =   orb.resolve_initial_references("NameService");
	    NamingContextExt ncRef = NamingContextExtHelper.narrow(objRef);
	    Hash addobj = (Hash) HashHelper.narrow(ncRef.resolve_str("ABC"));
 
            Scanner c=new Scanner(System.in);
            System.out.println("Welcome to the hashing system:");          		    
		    for(;;){
		      System.out.println("Enter word to hash:");
		      String aa = c.nextLine();
		      int a=1;
		      String b=aa;
		      String r=addobj.add(a,b);
		      System.out.println("Hash value of "+b+" is : "+r);
		      System.out.println("-----------------------------------");
            }
       }
       catch (Exception e) {
          System.out.println("Hello Client exception: " + e);
	  e.printStackTrace();
       }
 
    }
 
}
