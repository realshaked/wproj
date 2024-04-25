package Pack1;

public class ImparEx {

	public static void main(String[] args) {
		int x[];
		int y = 0;
		x = new int [10000];
		x[0] = 1;
		for(int i = 1; i < 10000; i++)
		{
			x[i] = x[i-1] + 1;
		}
		for(int i = 0; i < 10000; i++)
		{
			
			if((x[i] % 2) != 0)
			{
				y = y + x[i];
			}
		}
		System.out.println(y);

	}

}
