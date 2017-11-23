using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Exercise_6___Sum_square_difference
{
    class Program
    {
        static void Main(string[] args)
        {
            //OK! (y)
            double soma1=0;
            int somai = 0;
            for (int i = 0; i <= 100; i++)
            {
                soma1 += Math.Pow(i, 2);
                somai += i;
            }
            Console.WriteLine(Math.Pow(somai,2));
            Console.WriteLine(soma1);
            Console.WriteLine(Math.Pow(somai, 2)-soma1);
            Console.ReadKey();
        }
    }
}
