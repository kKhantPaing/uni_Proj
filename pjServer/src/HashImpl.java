import org.omg.CosNaming.*;
import java.math.BigInteger;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import org.omg.CosNaming.NamingContextPackage.*;
import org.omg.CORBA.*;
import org.omg.PortableServer.*;
import org.omg.PortableServer.POA;
import java.util.Properties;
import HashApp.*;
class HashImpl extends HashPOA {
	private ORB orb;

	public void setORB(ORB orb_val) {
		orb = orb_val;
	}
	public void shutdown() {
		orb.shutdown(false);
	}
	@Override
	public String add(int meth, String clip) {
		MessageDigest md=null;
		try {
			md = MessageDigest.getInstance("md5");
		} catch (NoSuchAlgorithmException e) {
			System.out.println("Hash not found!");
			e.printStackTrace();
		}
		byte[] messageDigest = md.digest(clip.getBytes());
		BigInteger no = new BigInteger(1, messageDigest);
		String hashtext = no.toString(16);
		while (hashtext.length() < 32) {
			hashtext = "0" + hashtext;
		}	
		return hashtext;
	}
}
