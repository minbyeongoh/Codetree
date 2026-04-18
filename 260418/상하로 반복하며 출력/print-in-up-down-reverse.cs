using System;

class PrtUpDown {
    int n, m, tmp;
    void ReadN() {
        n = int.Parse(Console.ReadLine());
        m = n + 1;
    }
    void PrtPattern() {
        for(int i=1; i<=n; i++) {
            tmp = i;
            for(int j=1; j<=n; j++) {
                Console.Write(tmp);
                tmp = m - tmp;
            }
            Console.WriteLine();
        }
    }
    public void Run() {
        ReadN();
        PrtPattern();
    }
}

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        PrtUpDown a = new PrtUpDown();
        a.Run();
    }
}
