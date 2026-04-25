using System;

public class Codetree
{  
    class Rect {
        public void PrtRect (int n, int m) {
            for(int i=0; i<n; i++) {
                for(int j=0; j<m; j++) {
                    Console.Write("1");
                }
                Console.WriteLine();
            }
        }
    }

    public static void Main()
    {
        // Please write your code here.
        var inputs = Console.ReadLine().Split();
        int n = int.Parse(inputs[0]);
        int m = int.Parse(inputs[1]);
        Rect a = new Rect();
        a.PrtRect(n, m);
    }
}
