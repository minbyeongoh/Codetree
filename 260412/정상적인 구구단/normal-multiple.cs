using System;

class multiplication {
    private int num;
    public void mulIn() {
        num=int.Parse(Console.ReadLine());

    }
    public void mulOut() {
        for(int i=1; i<=num; i++){
            for(int j=1; j<=num; j++) {
                if(j==num)
                    Console.Write($"{i} * {j} = {i*j}");
                else
                    Console.Write($"{i} * {j} = {i*j}, ");
            }
        Console.WriteLine();
        }
    }
    public void Run() {
        mulIn();
        mulOut();
    }
}

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        multiplication mul = new multiplication();
        mul.Run();
    }
}
