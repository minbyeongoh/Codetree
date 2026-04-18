using System;

class CountFiveMul {
    int[,] arr = new int[4,4];
    int count = 0;
    public void ReadFindArr() {
        for(int i=0; i<4; i++) {
            string[] tmp = Console.ReadLine().Split();
            for(int j=0; j<4; j++) {
                arr[i,j] = int.Parse(tmp[j]);
                if(arr[i,j]%5==0) count++;
            }
        }
        Console.WriteLine(count);
    }
}

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        CountFiveMul go = new CountFiveMul();
        go.ReadFindArr();
    }
}
