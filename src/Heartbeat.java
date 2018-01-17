
public class Heartbeat {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int x = 0;
		while(true) {
			try {
				Thread.sleep(1000);
				x = x + 1;
				System.out.println(x + " sec have passed.");
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
		}
	}

}
