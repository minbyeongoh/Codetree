using System;

public class Codetree
{  
    class printStr {
        int n;
        public void prtStr(int n) {
            for(int i=0; i<n; i++) {
                Console.WriteLine("12345^&*()_");
            }
        }
    }

    public static void Main()
    {
        // Please write your code here.
        int n = int.Parse(Console.ReadLine());
        printStr a = new printStr();
        a.prtStr(n);
    }
}
