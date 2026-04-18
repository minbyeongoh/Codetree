using System;

class RepeatLR {
    int n;
    void ReadN() {
        n = int.Parse(Console.ReadLine());
    }
    void WriteN() {
        for(int i=0; i<n; i++) {
            if(i%2==0) {
                for(int j=1; j<=n; j++) {
                    Console.Write(j);
                }
            }
            else {
                for(int j=n; j>=1; j--) {
                    Console.Write(j);
                }
            }
            Console.WriteLine();
        }
    }
    public void Run() {
        ReadN();
        WriteN();
    }
}

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
    RepeatLR a = new RepeatLR();
    a.Run();
    }
}
