using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Diagnostics;

namespace Problem_1___Multiples_of_3_and_5
{
    class Program
    {
        delegate int somar(int x);
        static void Main(string[] args)
        {
            System.Diagnostics.Stopwatch relogio = new Stopwatch();
            relogio.Start();
            //OK! (Y)
            
            int soma = som(3) + som(5) - som(15);
            Console.WriteLine(soma);
            relogio.Stop();
            Console.WriteLine(relogio.Elapsed);
            Console.ReadKey();
        }
        static int som(int x) 
        {
            //int p = 999 / x;
            //return x*(p*(p+1))/2;
            int soma = 0;
            for (int i = 0; i < 1000; i++)
            {
                if (i % x == 0)
                {
                    soma += i;
                }
            }
            return soma;
        }
    }
}  
