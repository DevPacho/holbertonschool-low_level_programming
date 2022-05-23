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
<br>
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
