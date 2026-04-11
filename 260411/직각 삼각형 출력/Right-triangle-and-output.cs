using System;

class Triangle{
    private int n;
    public void TriOut(int n) {
        for(int i=1; i<=n;i++) {
            for(int j=1; j<=i*2-1; j++) {
                Console.Write("*");
            }
            Console.WriteLine();
        }
    }
    public void Run() {
        n=int.Parse(Console.ReadLine());
        TriOut(n);
    }
}

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        Triangle draw=new Triangle();
        draw.Run();
    }
}