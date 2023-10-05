#include <unistd.h>
/**
*main - the main function in our program
*Return: return 0
*/
int main(void)
{
char sentence[] = "and that piece of art is useful\" \
- Dora Korpar, 2015-10-19\n";
int sentence_lenght = 59;
write(1, sentence, sentence_lenght);
return (1);
}
