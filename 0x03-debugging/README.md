<h1>Debugging codes!</h1>

![image](https://user-images.githubusercontent.com/98773774/169730020-dc7797be-3cd7-42c5-87de-e3c1d68640ea.png)
<p>©. <a href="https://devblogs.microsoft.com/visualstudio/debugging-async-code-parallel-stacks-for-tasks/" target="_blank"><i><b>Image source</a></i></b></p>
<br>
<h2>Resources</h2>
<p><strong>Read or watch:</strong></p>
<ul>
    <li><a href="https://intranet.hbtn.io/rltoken/iADtJa-KkjYI56m-cQyWIw" target="_blank" title="Debugging">Debugging</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/sS_CVV32moC3tyEImNCvig" target="_blank" title="Rubber Duck Debugging">Rubber Duck Debugging</a></li>
</ul>
<p>Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as&nbsp;<code>gdb</code> or built-in tools that IDEs have. However, it&rsquo;s important to understand the concepts and processes of debugging manually.</p>

![image](https://user-images.githubusercontent.com/98773774/169730174-dd8109f2-b807-4d2e-8192-17d5b6c20d2b.png)

<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.hbtn.io/rltoken/mrElWdkThHc-wwWBat00qg" target="_blank" title="explain to anyone">explain to anyone</a>, without the help of Google:</p>
<h3>General</h3>
<ul>
    <li>What is debugging</li>
    <li>What are some methods of debugging manually</li>
    <li>How to read the error messages</li>
</ul>
<h2>Requirements</h2>
<h3>General</h3>
<ul>
    <li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
    <li>All your files will be compiled on Ubuntu 20.04 LTS using&nbsp;<code>gcc</code>, using the options&nbsp;<code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
    <li>All your files should end with a new line</li>
    <li>Your code should use the&nbsp;<code>Betty</code> style. It will be checked using&nbsp;<code>betty-style.pl</code> and&nbsp;<code>betty-doc.pl</code></li>
    <li>A README.md file at the root of the repo, containing a description of the repository</li>
    <li>A README.md file, at the root of the folder of this project (i.e.&nbsp;<code>0x03-debugging</code>), describing what this project is about</li>
</ul>
<br>
<h1>✅ Tasks ✅</h1>
<p>This project is made up of mandatory tasks, <b>⬇️ <code>look at them!</code></b> ⬇️</p>
<br>
<h2>0. Multiple mains</h2>
<p style="box-sizing: border-box; margin: 0px 0px 10px; color: rgb(41, 39, 40); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">In most projects, we often give you only one main file to test with. For example, this main file is a test for a&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>postitive_or_negative()</code> function similar to the one you worked with in&nbsp;<a href="https://intranet.hbtn.io/rltoken/oksQRX9MFUF8saGnlIKqYw" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="an earlier C project">an earlier C project</a>:</p>
<pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>carrie@ubuntu:/debugging$ cat main.c
#include &quot;main.h&quot;
<br>
/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/
<br>
int main(void)
{
        int i;
<br>
        i = 98;
        positive_or_negative(i);
<br>
        return (0);
}
carrie@ubuntu:/debugging$
</code></pre>
<pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>carrie@ubuntu:/debugging$ cat main.h
#ifndef MAIN_H
#define MAIN_H
<br>
#include &lt;stdio.h&gt;
<br>
void positive_or_negative(int i);
<br>
#endif /* MAIN_H */
carrie@ubuntu:/debugging$ 
</code></pre>
<pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c
carrie@ubuntu:/debugging$ ./a.out
98 is positive
carrie@ubuntu:/debugging$
</code></pre>
<p style="box-sizing: border-box; margin: 0px 0px 10px; color: rgb(41, 39, 40); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">Based on the&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>main.c</code> file above, create a file named&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0-main.c</code>. This file must test that the function&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>positive_or_negative()</code> gives the correct output when given a case of&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0</code>.</p>
<p style="box-sizing: border-box; margin: 0px 0px 10px; color: rgb(41, 39, 40); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">You are not coding the solution / function, you&rsquo;re just testing it! However, you can adapt your function from&nbsp;<a href="https://intranet.hbtn.io/rltoken/oksQRX9MFUF8saGnlIKqYw" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="0x01. C - Variables, if, else, while - Task #0">0x01. C - Variables, if, else, while - Task #0</a> to compile with this main file to test locally.</p>
<ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px; color: rgb(41, 39, 40); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <li style="box-sizing: border-box;">You only need to upload&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0-main.c</code> and&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>main.h</code> for this task. We will provide our own&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>positive_or_negative()</code> function.</li>
    <li style="box-sizing: border-box;">You are not allowed to add or remove lines of code, you may change only&nbsp;<strong style="box-sizing: border-box; font-weight: bold;">one</strong> line in this task.</li>
</ul>
<pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
carrie@ubuntu:/debugging$ ./0-main
0 is zero
carrie@ubuntu:/debugging$ wc -l 0-main.c
16 1-main.c
carrie@ubuntu:/debugging$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x03-debugging/0-main.c" target="_blank">0-main.c</b></i></a></code> , <b>Header file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x03-debugging/main.h" target="_blank">main.h</b></i></a></code> ✅</li>
</ul>
<br>
<h2>1. Like, comment, subscribe</h2>
<p>Copy this main file. Comment out (don&rsquo;t delete it!) the part of the code that is causing the output to go into an infinite loop.</p>
<ul>
    <li>Don&rsquo;t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.</li>
    <li>You do not have to compile with&nbsp;<code>-Wall -Werror -Wextra -pedantic</code> for this task.</li>
</ul>
<pre><code>carrie@ubuntu:/debugging$ cat 1-main.c
#include &lt;stdio.h&gt;
<br>
/**
* main - causes an infinite loop
* Return: 0
*/
<br>
int main(void)
{
        int i;
<br>
        printf(&quot;Infinite loop incoming :(\n&quot;);
<br>
        i = 0;
<br>
        while (i &lt; 10)
        {
                putchar(i);
        }
<br>
        printf(&quot;Infinite loop avoided! \\o/\n&quot;);
<br>
        return (0);
}
carrie@ubuntu:/debugging$
</code></pre>
<p>Your output should look like this:</p>
<pre><code>carrie@ubuntu:/debugging$ gcc -std=gnu89 1-main.c -o 1-main
carrie@ubuntu:/debugging$ ./1-main
Infinite loop incoming :(
Infinite loop avoided! \o/
carrie@ubuntu:/debugging$ wc -l 1-main.c
24 1-main.c
carrie@ubuntu:/debugging$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x03-debugging/1-main.c" target="_blank">1-main.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>2. 0 > 972?</h2>
<p style="box-sizing: border-box; margin: 0px 0px 10px; color: rgb(41, 39, 40); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">This program prints the largest of three integers.</p>
<pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>carrie@ubuntu:/debugging$ cat 2-main.c
#include &lt;stdio.h&gt;
#include &quot;main.h&quot;
<br>
/**
* main - prints the largest of 3 integers
* Return: 0
*/
<br>
int main(void)
{
        int a, b, c;
        int largest;
<br>
        a = 972;
        b = -98;
        c = 0;
<br>
        largest = largest_number(a, b, c);
<br>
        printf(&quot;%d is the largest number\n&quot;, largest);
<br>
        return (0);
}
carrie@ubuntu:/debugging$
</code></pre>
<pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>carrie@ubuntu:/debugging$ cat 2-largest_number.c
#include &quot;main.h&quot;
<br>
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
<br>
int largest_number(int a, int b, int c)
{
    int largest;
<br>
    if (a &gt; b &amp;&amp; b &gt; c)
    {
        largest = a;
    }
    else if (b &gt; a &amp;&amp; a &gt; c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }
<br>
    return (largest);
}
carrie@ubuntu:/debugging$
</code></pre>
<pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main
carrie@ubuntu:/debugging$ ./2-main
0 is the largest number
carrie@ubuntu:/debugging$
</code></pre>
<p style="box-sizing: border-box; margin: 0px 0px 10px; color: rgb(41, 39, 40); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">? That&rsquo;s definitely not right.</p>
<p style="box-sizing: border-box; margin: 0px 0px 10px; color: rgb(41, 39, 40); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">Fix the code in&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>2-largest_number.c</code> so that it correctly prints out the largest of three numbers, no matter the case.</p>
<ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px; color: rgb(41, 39, 40); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <li style="box-sizing: border-box;">Line count will not be checked for this task.</li>
</ul>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x03-debugging/2-largest_number.c" target="_blank">2-largest_number.c</b></i></a></code> , <b>Header file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x03-debugging/main.h" target="_blank">main.h</b></i></a></code> ✅</li>
</ul>
<br>
<h2>3. Leap year</h2>
<p style="box-sizing: border-box; margin: 0px 0px 10px; color: rgb(41, 39, 40); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.</p>
<pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>carrie@ubuntu:/debugging$ cat 3-main_a.c
#include &lt;stdio.h&gt;
#include &quot;main.h&quot;
<br>
/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/
<br>
int main(void)
{
    int month;
    int day;
    int year;
<br>
    month = 4;
    day = 01;
    year = 1997;
<br>
    printf(&quot;Date: %02d/%02d/%04d\n&quot;, month, day, year);
<br>
    day = convert_day(month, day);
<br>
    print_remaining_days(month, day, year);
<br>
    return (0);
}
carrie@ubuntu:/debugging$
</code></pre>
<pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>carrie@ubuntu:/debugging$ cat 3-convert_day.c
#include &quot;main.h&quot;
<br>
/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/
<br>
int convert_day(int month, int day)
{
    switch (month)
    {
        case 2:
            day = 31 + day;
            break;
        case 3:
            day = 59 + day;
            break;
        case 4:
            day = 90 + day;
            break;
        case 5:
            day = 120 + day;
            break;
        case 6:
            day = 151 + day;
            break;
        case 7:
            day = 181 + day;
            break;
        case 8:
            day = 212 + day;
            break;
        case 9:
            day = 243 + day;
            break;
        case 10:
            day = 273 + day;
            break;
        case 11:
            day = 304 + day;
            break;
        case 12:
            day = 334 + day;
            break;
        default:
            break;
    }
    return (day);
}
carrie@ubuntu:/debugging$
</code></pre>
<pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>carrie@ubuntu:/debugging$ cat 3-print_remaining_days.c
#include &lt;stdio.h&gt;
#include &quot;main.h&quot;
<br>
/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
<br>
void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 || year % 400 == 0) &amp;&amp; !(year % 100 == 0))
    {
        if (month &gt;= 2 &amp;&amp; day &gt;= 60)
        {
            day++;
        }
<br>
        printf(&quot;Day of the year: %d\n&quot;, day);
        printf(&quot;Remaining days: %d\n&quot;, 366 - day);
    }
    else
    {
        if (month == 2 &amp;&amp; day == 60)
        {
            printf(&quot;Invalid date: %02d/%02d/%04d\n&quot;, month, day - 31, year);
        }
        else
        {
            printf(&quot;Day of the year: %d\n&quot;, day);
            printf(&quot;Remaining days: %d\n&quot;, 365 - day);
        }
    }
}
carrie@ubuntu:/debugging$
</code></pre>
<pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a 
carrie@ubuntu:/debugging$ ./3-main_a
Date: 04/01/1997
Day of the year: 91
Remaining days: 274
carrie@ubuntu:/debugging$
</code></pre>
<p style="box-sizing: border-box; margin: 0px 0px 10px; color: rgb(41, 39, 40); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">Output looks good for&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>04/01/1997</code>! Let&rsquo;s make a new main file&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>3-main_b.c</code> to try a case that is a leap year:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>02/29/2000</code>.</p>
<pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b 
carrie@ubuntu:/debugging$ ./3-main_b
Date: 02/29/2000
Invalid date: 02/29/2000
carrie@ubuntu:/debugging$
</code></pre>
<p style="box-sizing: border-box; margin: 0px 0px 10px; color: rgb(41, 39, 40); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">? That doesn&rsquo;t seem right.</p>
<p style="box-sizing: border-box; margin: 0px 0px 10px; color: rgb(41, 39, 40); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">Fix the&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>print_remaining_days()</code> function so that the output works correctly for&nbsp;<em style="box-sizing: border-box;">all</em> dates and&nbsp;<em style="box-sizing: border-box;">all</em> leap years.</p>
<ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px; color: rgb(41, 39, 40); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <li style="box-sizing: border-box;">Line count will not be checked for this task.</li>
    <li style="box-sizing: border-box;">You can assume that all test cases have valid months (i.e. the value of&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>month</code> will never be less than&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>1</code> or greater than&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>12</code>) and valid days (i.e. the value of&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>day</code> will never be less than&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>1</code> or greater than&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>31</code>).</li>
    <li style="box-sizing: border-box;">You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).</li>
</ul>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x03-debugging/3-print_remaining_days.c" target="_blank">3-print_remaining_days.c</b></i></a></code> , <b>Header file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x03-debugging/main.h" target="_blank">main.h</b></i></a></code> ✅</li>
</ul>
<br>
<h2>License & Copyright</h2>
<i>©. Project provided by: <a href="https://www.holbertonschool.com/" target="_blank"><b>Holberton School</a></i></b>
<br>
<i>©. Project developed by:<b> Francisco Ramírez </b><b>|&nbsp;<a href="https://github.com/DevPacho" target="_blank"> GitHub</a> <b>|</b>&nbsp;<a href="https://twitter.com/FranciscoR_15" target = "_blank" rel="nofollow"> Twitter</b></a></p>
