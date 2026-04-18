using System;

class Star {
    int n;
    public Star(int _n) {
        n = _n;
    }
    public void PrintStar() {
        for(int i=0; i<n; i++) {
            for(int j=0; j<10; j++) {
                Console.Write("*");
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
        Star draw = new Star(5);
        draw. PrintStar();

    }
}
