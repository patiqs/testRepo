using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Datetimeformat
{
    class Program
    {
        static void Main(string[] args)
        {
            var str = String.Format("xx{0:d MMMM yyyy HH:mm:ss}", DateTime.Now);
        }
    }
}
