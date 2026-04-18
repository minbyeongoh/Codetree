using System;

class ElementSum {
    int[,] arr = new int[4,4];
    int sum = 0;
    void ReadArr() {
        for(int i=0; i<4; i++) {
            string[] s = Console.ReadLine().Split();
            for(int j=0; j<4; j++) {
                arr[i,j] = int.Parse(s[j]);
            }
        }
    }
    void SumArr() {
        for(int i=0; i<4; i++) {
            for(int j=0; j<=i; j++) {
                sum += arr[i,j];
            }
        }
        Console.WriteLine(sum);
    }
    public void Run() {
        ReadArr();
        SumArr();
    }
}

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        ElementSum start = new ElementSum();
        start.Run();
    }
}
