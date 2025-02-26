ls | 
cut -d '_' -f 2-20 | 
sed 's/_Tests//g' | 
cut -d '.' -f 1 | 
awk '{printf 
"\#include \"../Tests.h\"\n\n

void %s_simple_Test1()\n
{\n
\t//Arrange\n\n\t//Act\n\n\t//Assert\n\n}\n\nvoid %s_Tests()\n{\n\tRUN_TEST(%s_simple_Test1);\n}\n\n", $0, $0, $0}'
