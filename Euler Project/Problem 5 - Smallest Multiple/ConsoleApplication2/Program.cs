using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
            System.Diagnostics.Stopwatch x = new System.Diagnostics.Stopwatch(); ;
            x.Start();
            double divisor = 3 ;
            double dividendo = 2050;
            int cont = 0;
            do
            {
                if (dividendo % divisor == 0)
                {
                    divisor++;
                    cont++;
                }
                else
                {
                    dividendo+=2;
                    divisor = 3;
                    cont = 0;
                }
            } while (cont <20);
            Console.WriteLine(dividendo);
            long a = x.ElapsedMilliseconds;
            Console.WriteLine(a);
            x.Stop();
            Console.ReadKey();
        }
    }
}
