using System;

class ArraySum {
    int [,] arr = new int[4,4];
    public void Input() {
        for(int i=0; i<4; i++) {
            string[] s = Console.ReadLine().Split();
            for(int j=0; j<4; j++) {
                arr[i,j] = int.Parse(s[j]);
            }
        }
    }
    public void AddLine() {
        for(int i=0; i<4; i++) {
            int sum = 0;
            for(int j=0; j<4; j++) {
                sum += arr[i,j];
            }
            Console.WriteLine(sum);
        }
    }
}

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        ArraySum a = new ArraySum();
        a.Input();
        a.AddLine();
    }
}
