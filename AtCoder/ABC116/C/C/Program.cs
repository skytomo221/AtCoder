using System;
using System.Collections.Generic;
using System.Linq;

namespace C
{
    class Program
    {
        static void Main(string[] args)
        {
            var l = new Queue<int>();
            var r = new Queue<int>();
            string[] str;
            Console.ReadLine();
            str = Console.ReadLine().Split(',');
            var h = new List<int>();
            foreach (var item in str)
            {
                h.Add(int.Parse(item));
            }
            var m = h.Min();
            var burst = false;
            var start = 0;
            for (int i = 0; i < h.Count; i++)
            {
                if (h[i] > m && burst == false)
                {
                    burst = true;
                    start = i;
                }
                else if (h[i] > m && burst == true)
                {
                    continue;
                }
                else if (h[i] <= m && burst == true)
                {
                    burst = false;
                    l.Enqueue(start);
                    r.Enqueue(i);
                }
            }
        }
    }
}
