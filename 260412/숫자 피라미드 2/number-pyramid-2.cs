using System;

class pyramid {
    int num, n=1;
    void Input() {
        num = int.Parse(Console.ReadLine());
    }
    public void Paint() {
        Input();
        for(int i=1; i<=num; i++) {
            for(int j=1; j<=i; j++) {
                Console.Write($"{n} ");
                n++;
            }
            Console.WriteLine();
        }
    }
}

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        pyramid a = new pyramid();
        a.Paint();
    }
}
