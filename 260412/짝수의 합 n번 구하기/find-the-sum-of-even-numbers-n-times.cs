using System;

class numIn {
    protected int num;
    protected void nIn() {
        num = int.Parse(Console.ReadLine());
    }
}

class EvenSum : numIn {
    int sum;
    public void _EvenSum() {
        nIn();
        while(num>0) {
            sum = 0;
            string input = Console.ReadLine();
            string[] parts = input.Split(' ');

            int a = int.Parse(parts[0]);
            int b = int.Parse(parts[1]);
            for(int i=a; i<=b; i++) {
                if(i%2==0) sum += i;
            }
            Console.WriteLine($"{sum}");
            num--;
        }
    }
}

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        EvenSum a = new EvenSum();
        a._EvenSum();
    }
}
