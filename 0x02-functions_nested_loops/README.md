<h1>Functions and nested loops!</h1>

![image](https://user-images.githubusercontent.com/98773774/169725344-5b425e97-5bdf-4ec2-b018-9c7f15af5a1d.png)
<br>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
    <li><a href="https://intranet.hbtn.io/rltoken/L0Vf5XJdD7ylLOyQnzVY6Q" target="_blank" title="Nested while loops">Nested while loops</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/pU9KLKlz0W2ZSSlzJsYA7w" target="_blank" title="C - Functions">C - Functions</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/pu-exPylodWaQjU7f6KhYQ" target="_blank" title="Learning to Program in C (Part 06)">Learning to Program in C (Part 06)</a> (<em>stop at 14:00</em>)</li>
    <li><a href="https://intranet.hbtn.io/rltoken/bANgUAj_-F9_85yHxzSD6w" target="_blank" title="What is the purpose of a function prototype?">What is the purpose of a function prototype?</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/xC6XfUoznEIJgfdP52GUIw" target="_blank" title="C - Header Files">C - Header Files</a> (<em>stop before the &ldquo;Once-Only Headers&rdquo; paragraph</em>)</li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.hbtn.io/rltoken/kk-N0deGCGSwdlvk-U_4XA" target="_blank" title="explain to anyone">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
    <li>What are nested loops and how to use them</li>
    <li>What is a function and how do you use functions</li>
    <li>What is the difference between a declaration and a definition of a function</li>
    <li>What is a prototype</li>
    <li>Scope of variables</li>
    <li>What are the&nbsp;<code>gcc</code> flags&nbsp;<code>-Wall -Werror -pedantic -Wextra -std=gnu89</code></li>
    <li>What are header files and how to to use them with&nbsp;<code>#include</code></li>
</ul>
<h2>Requirements</h2>
<h3>General</h3>
<ul>
    <li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
    <li>All your files will be compiled on Ubuntu 20.04 LTS using&nbsp;<code>gcc</code>, using the options&nbsp;<code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
    <li>All your files should end with a new line</li>
    <li>A&nbsp;<code>README.md</code> file, at the root of the folder of the project is mandatory</li>
    <li>Your code should use the&nbsp;<code>Betty</code> style. It will be checked using&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" target="_blank" title="betty-style.pl">betty-style.pl</a> and&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" target="_blank" title="betty-doc.pl">betty-doc.pl</a></li>
    <li>You are not allowed to use global variables</li>
    <li>No more than 5 functions per file</li>
    <li>You are not allowed to use the standard library. Any use of functions like&nbsp;<code>printf</code>,&nbsp;<code>puts</code>, etc&hellip; is forbidden</li>
    <li>You are allowed to use&nbsp;<a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" target="_blank" title="_putchar">_putchar</a></li>
    <li>You don&rsquo;t have to push&nbsp;<code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
    <li>In the following examples, the&nbsp;<code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own&nbsp;<code>main.c</code> files at compilation. Our&nbsp;<code>main.c</code> files might be different from the one shown in the examples</li>
    <li>The prototypes of all your functions and the prototype of the function&nbsp;<code>_putchar</code> should be included in your header file called&nbsp;<code>main.h</code></li>
    <li>Don&rsquo;t forget to push your header file</li>
</ul>
<h2>More Info</h2>
<p>You do not have to understand the call by reference (address), stack, static variables, recursions or arrays, yet.</p>
<br>
<h1>✅ Tasks ✅</h1>
<p>This project is made up of mandatory and optional tasks (<b><i><code>Advanced task</code></i></b>), <b>⬇️ <code>look at them!</code></b> ⬇️</p>
<br>
<h2>0. _putchar</h2>
<p>Write a program that prints&nbsp;<code>_putchar</code>, followed by a new line.</p>
<ul>
    <li>The program should return&nbsp;<code>0</code></li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x02$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
julien@ubuntu:~/0x02$ ./0-putchar 
_putchar
julien@ubuntu:~/0x02$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/0-putchar.c" target="_blank">0-putchar.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game</h2>
<p>Write a function that prints the alphabet, in lowercase, followed by a new line.</p>
<ul>
    <li>Prototype:&nbsp;<code>void print_alphabet(void);</code></li>
    <li>You can only use&nbsp;<code>_putchar</code> twice in your code</li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x02$ cat 1-main.c
#include &quot;main.h&quot;
<br>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
<br>
int main(void)
{
    print_alphabet();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
julien@ubuntu:~/0x02$ ./1-alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/1-alphabet.c" target="_blank">1-alphabet.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>2. 10 x alphabet</h2>
<p>Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.</p>
<ul>
    <li>Prototype:&nbsp;<code>void print_alphabet_x10(void);</code></li>
    <li>You can only use&nbsp;<code>_putchar</code> twice in your code</li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x02$ cat 2-main.c
#include &quot;main.h&quot;
<br>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
<br>
int main(void)
{
    print_alphabet_x10();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
julien@ubuntu:~/0x02$ ./2-alphabet_x10 
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/2-print_alphabet_x10.c" target="_blank">2-print_alphabet_x10.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>3. islower</h2>
<p>Write a function that checks for lowercase character.</p>
<ul>
    <li>Prototype:&nbsp;<code>int _islower(int c);</code></li>
    <li>Returns&nbsp;<code>1</code> if&nbsp;<code>c</code> is lowercase</li>
    <li>Returns&nbsp;<code>0</code> otherwise</li>
</ul>
<p>FYI: The standard library provides a similar function:&nbsp;<code>islower</code>. Run&nbsp;<code>man islower</code> to learn more.</p>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x02$ cat 3-main.c 
#include &quot;main.h&quot;
<br>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
<br>
int main(void)
{
    int r;
<br>
    r = _islower(&apos;H&apos;);
    _putchar(r + &apos;0&apos;);
    r = _islower(&apos;o&apos;);
    _putchar(r + &apos;0&apos;);
    r = _islower(108);
    _putchar(r + &apos;0&apos;);
    _putchar(&apos;\n&apos;);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower
julien@ubuntu:~/0x02$ ./3-islower 
011
julien@ubuntu:~/0x02$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/3-islower.c" target="_blank">3-islower.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>4. isalpha</h2>
<p>Write a function that checks for alphabetic character.</p>
<ul>
    <li>Prototype:&nbsp;<code>int _isalpha(int c);</code></li>
    <li>Returns&nbsp;<code>1</code> if&nbsp;<code>c</code> is a letter, lowercase or uppercase</li>
    <li>Returns&nbsp;<code>0</code> otherwise</li>
</ul>
<p>FYI: The standard library provides a similar function:&nbsp;<code>isalpha</code>. Run&nbsp;<code>man isalpha</code> to learn more.</p>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x02$ cat 4-main.c 
#include &quot;main.h&quot;
<br>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
<br>
int main(void)
{
    int r;
<br>
    r = _isalpha(&apos;H&apos;);
    _putchar(r + &apos;0&apos;);
    r = _isalpha(&apos;o&apos;);
    _putchar(r + &apos;0&apos;);
    r = _isalpha(108);
    _putchar(r + &apos;0&apos;);
    r = _isalpha(&apos;;&apos;);
    _putchar(r + &apos;0&apos;);
    _putchar(&apos;\n&apos;);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha
julien@ubuntu:~/0x02$ ./4-isalpha 
1110
julien@ubuntu:~/0x02$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/4-isalpha.c" target="_blank">4-isalpha.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>5. Sign</h2>
<p>Write a function that prints the sign of a number.</p>
<ul>
    <li>Prototype:&nbsp;<code>int print_sign(int n);</code></li>
    <li>Returns&nbsp;<code>1</code> and prints&nbsp;<code>+</code> if&nbsp;<code>n</code> is greater than zero</li>
    <li>Returns&nbsp;<code>0</code> and prints&nbsp;<code>0</code> if&nbsp;<code>n</code> is zero</li>
    <li>Returns&nbsp;<code>-1</code> and prints&nbsp;<code>-</code> if&nbsp;<code>n</code> is less than zero</li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x02$ cat 5-main.c
#include &quot;main.h&quot;
<br>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
<br>
int main(void)
{
    int r;
<br>
    r = print_sign(98);
    _putchar(&apos;,&apos;);
    _putchar(&apos; &apos;);
    _putchar(r + &apos;0&apos;);
    _putchar(&apos;\n&apos;);
    r = print_sign(0);
    _putchar(&apos;,&apos;);
    _putchar(&apos; &apos;);
    _putchar(r + &apos;0&apos;);
    _putchar(&apos;\n&apos;);
    r = print_sign(0xff);
    _putchar(&apos;,&apos;);
    _putchar(&apos; &apos;);
    _putchar(r + &apos;0&apos;);
    _putchar(&apos;\n&apos;);
    r = print_sign(-1);
    _putchar(&apos;,&apos;);
    _putchar(&apos; &apos;);
    _putchar(r + &apos;0&apos;);
    _putchar(&apos;\n&apos;);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign
julien@ubuntu:~/0x02$ ./5-sign 
+, 1
0, 0
+, 1
-, /
julien@ubuntu:~/0x02$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/5-sign.c" target="_blank">5-sign.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you</h2>
<p>Write a function that computes the absolute value of an integer.</p>
<ul>
    <li>Prototype:&nbsp;<code>int _abs(int);</code></li>
</ul>
<p>FYI: The standard library provides a similar function:&nbsp;<code>abs</code>. Run&nbsp;<code>man abs</code> to learn more.</p>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x02$ cat 6-main.c
#include "main.h"
#include &ltstdio.h&gt
<br>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
<br>
int main(void)
{
    int r;
<br>
    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-abs.c -o 6-abs
julien@ubuntu:~/0x02$ ./6-abs 
1
0
1
98
julien@ubuntu:~/0x02$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/6-abs.c" target="_blank">6-abs.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important</h2>
<p>Write a function that prints the last digit of a number.</p>
<ul>
    <li>Prototype:&nbsp;<code>int print_last_digit(int);</code></li>
    <li>Returns the value of the last digit</li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x02$ cat 7-main.c
#include &quot;main.h&quot;
<br>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
<br>
int main(void)
{
    int r;
<br>
    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar(&apos;0&apos; + r);
    _putchar(&apos;\n&apos;);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit
julien@ubuntu:~/0x02$ ./7-last_digit 
8044
julien@ubuntu:~/0x02$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/7-print_last_digit.c" target="_blank">7-print_last_digit.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>8. I'm federal agent Jack Bauer, and today is the longest day of my life</h2>
<p>Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.</p>
<ul>
    <li>Prototype:&nbsp;<code>void jack_bauer(void);</code></li>
    <li>You can listen to&nbsp;<a href="https://intranet.hbtn.io/rltoken/CF-MAQgUTibmVPRfQF3VkQ" target="_blank" title="this soundtrack">this soundtrack</a> while coding :)</li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x02$ cat 8-main.c
#include &quot;main.h&quot;
<br>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
<br>
int main(void)
{
    jack_bauer();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24
julien@ubuntu:~/0x02$ ./8-24 | head
00:00
00:01
00:02
00:03
00:04
00:05
00:06
00:07
00:08
00:09
julien@ubuntu:~/0x02$ ./8-24 | tail
23:50
23:51
23:52
23:53
23:54
23:55
23:56
23:57
23:58
23:59
julien@ubuntu:~/0x02$ ./8-24 | wc -l
1440
julien@ubuntu:~/0x02$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/8-24_hours.c" target="_blank">8-24_hours.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>9. Learn your times table</h2>
<p>Write a function that prints the 9 times table, starting with 0.</p>
<ul>
    <li>Prototype:&nbsp;<code>void times_table(void);</code></li>
    <li>Format: see example</li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x02$ cat 9-main.c
#include &quot;main.h&quot;
<br>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
<br>
int main(void)
{
    times_table();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table
ulien@ubuntu:~/0x02$ ./9-times_table | cat -e
0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
julien@ubuntu:~/0x02$ ./9-times_table | tr &apos; &apos; . | cat -e
0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
julien@ubuntu:~/0x02$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/9-times_table.c" target="_blank">9-times_table.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>10. a + b</h2>
<p>Write a function that adds two integers and returns the result.</p>
<ul>
  <li>Prototype: <code>int add(int, int);</code></li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/$ cat 10-main.c
#include "main.h"
#include &ltstdio.h&gt
<br>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
<br>
int main(void)
{
    int n;
<br>
    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-add.c -o 10-add
julien@ubuntu:~/0x02$ ./10-add 
98
julien@ubuntu:~/0x02$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/10-add.c" target="_blank">10-add.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>11. 98 Battery Street, the OG</h2>
<p>Write a function that prints all natural numbers from&nbsp;<code>n</code> to&nbsp;<code>98</code>, followed by a new line.</p>
<ul>
    <li>Prototype:&nbsp;<code>void print_to_98(int n);</code></li>
    <li>Numbers must be separated by a comma, followed by a space</li>
    <li>Numbers should be printed in order</li>
    <li>The first printed number should be the number passed to your function</li>
    <li>The last printed number should be&nbsp;<code>98</code></li>
    <li>You are allowed to use the standard library</li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x02$ cat 11-main.c
#include &quot;main.h&quot;
<br>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
<br>
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 11-main.c 11-print_to_98.c -o 11-98
julien@ubuntu:~/0x02$ ./11-98 
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
98
111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98
81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
julien@ubuntu:~/0x02$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/11-print_to_98.c" target="_blank">11-print_to_98.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>13. Nature made the natural numbers; All else is the work of women</h2>
<p><b><i><code>Advanced task</code></i></b></p>
<p>If we list all the natural numbers below&nbsp;<code>10</code> that are multiples of&nbsp;<code>3</code> or&nbsp;<code>5</code>, we get&nbsp;<code>3</code>,&nbsp;<code>5</code>,&nbsp;<code>6</code> and&nbsp;<code>9</code>. The sum of these multiples is&nbsp;<code>23</code>. Write a program that computes and prints the sum of all the multiples of&nbsp;<code>3</code> or&nbsp;<code>5</code> below&nbsp;<code>1024</code> (excluded), followed by a new line.</p>
<ul>
    <li>You are allowed to use the standard library</li>
</ul>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/101-natural.c" target="_blank">101-natural.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>License & Copyright</h2>
<i>©. Project provided by: <a href="https://www.holbertonschool.com/" target="_blank"><b>Holberton School</a></i></b>
<br>
<i>©. Project developed by:<b> Francisco Ramírez </b><b>|&nbsp;<a href="https://github.com/DevPacho" target="_blank"> GitHub</a> <b>|</b>&nbsp;<a href="https://twitter.com/FranciscoR_15" target = "_blank" rel="nofollow"> Twitter</b></a></p>
