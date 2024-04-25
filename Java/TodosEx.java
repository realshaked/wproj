package Pack1;

public class TodosEx {

	public static void main(String[] args) {
		int x[];
		int k = 0;
		x = new int [50001];
		x[0] = 0;
		for(int i = 1; i <= 50000; i++)
		{
			x[i] = x[i-1] + 1;
		}
		System.out.println(x[50000]);
		for(int y = 100; y <= 137; y++)
		{
			x[y] = 0;
		}
		for(int i = 0; i <= 50000; i++)
		{
			
			k = k + x[i];
			
		}
		
		System.out.println(k);

	}

}
