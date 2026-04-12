using System;

class pyramid {
    int n;
    void numIn() {
        n=int.Parse(Console.ReadLine());
    }
    void paint() {
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=i; j++) {
                Console.Write($"{i} ");
            }
            Console.WriteLine();
        }
    }
    public void Run() {
        numIn();
        paint();
    }
}

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        pyramid pyr = new pyramid();
        pyr.Run();
    }
}
