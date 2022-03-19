<h1>0x10. C - Variadic functions</h1>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
    <li><a href="https://intranet.hbtn.io/rltoken/KNHC7kjcnZZCKDCHdXis4w" target="_blank" title="stdarg.h">stdarg.h</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/VOS7s9X1ysxlU2X3xtCmFw" target="_blank" title="Variadic Functions">Variadic Functions</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/vxuoclIH_Hap9c7sciDnFQ" target="_blank" title="Const Keyword">Const Keyword</a></li>
</ul>
<p><strong>man or help</strong>:</p>
<ul>
    <li><code>stdarg</code></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.hbtn.io/rltoken/naLM53LaUqIfwpf8-xihZg" target="_blank" title="explain to anyone">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
    <li>What are variadic functions</li>
    <li>How to use&nbsp;<code>va_start</code>,&nbsp;<code>va_arg</code> and&nbsp;<code>va_end</code> macros</li>
    <li>Why and how to use the&nbsp;<code>const</code> type qualifier</li>
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
    <li>The only C standard library functions allowed are&nbsp;<code>malloc</code>,&nbsp;<code>free</code> and&nbsp;<code>exit</code>. Any use of functions like&nbsp;<code>printf</code>,&nbsp;<code>puts</code>,&nbsp;<code>calloc</code>,&nbsp;<code>realloc</code> etc&hellip; is forbidden</li>
    <li>You are allowed to use the following macros:&nbsp;<code>va_start</code>,&nbsp;<code>va_arg</code> and&nbsp;<code>va_end</code></li>
    <li>You are allowed to use&nbsp;<a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" target="_blank" title="_putchar">_putchar</a></li>
    <li>You don&rsquo;t have to push&nbsp;<code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
    <li>In the following examples, the&nbsp;<code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own&nbsp;<code>main.c</code> files at compilation. Our&nbsp;<code>main.c</code> files might be different from the one shown in the examples</li>
    <li>The prototypes of all your functions and the prototype of the function&nbsp;<code>_putchar</code> should be included in your header file called&nbsp;<code>variadic_functions.h</code></li>
    <li>Don&rsquo;t forget to push your header file</li>
    <li>All your header files should be include guarded</li>
</ul>
<br>
<h1>Tasks</h1>
<h2>0. Beauty is variable, ugliness is constant</h2>
<p>Write a function that returns the sum of all its parameters.</p>
<ul>
    <li>Prototype: <code>int sum_them_all(const unsigned int n, ...);</code></li>
    <li>If <code>n == 0</code>, return <code>0</code></li>
</ul>
<br>
<h2>1. To be is to be the value of a variable</h2>
<p>Write a function that prints numbers, followed by a new line.</p>
<ul>
    <li>Prototype:&nbsp;<code>void print_numbers(const char *separator, const unsigned int n, ...);</code></li>
    <li>where&nbsp;<code>separator</code> is the string to be printed between numbers</li>
    <li>and&nbsp;<code>n</code> is the number of integers passed to the function</li>
    <li>You are allowed to use&nbsp;<code>printf</code></li>
    <li>If&nbsp;<code>separator</code> is&nbsp;<code>NULL</code>, don&rsquo;t print it</li>
    <li>Print a new line at the end of your function</li>
</ul>
<p><br></p>
<h2>2. One woman&apos;s constant is another woman&apos;s variable</h2>
<p>Write a function that prints strings, followed by a new line.</p>
<ul>
    <li>Prototype: <code>void print_strings(const char *separator, const unsigned int n, ...);</code></li>
    <li>where <code>separator</code> is the string to be printed between the strings</li>
    <li>and <code>n</code> is the number of strings passed to the function</li>
    <li>You are allowed to use <code>printf</code></li>
    <li>If separator is NULL, don&rsquo;t print it</li>
    <li>If one of the string is NULL, print <code>(nil)</code> instead</li>
    <li>Print a new line at the end of your function</li>
</ul>
<p><br></p>
<h2>3. To be is a to be the value of a variable</h2>
<p>Write a function that prints anything.</p>
<ul>
    <li>Prototype:&nbsp;<code>void print_all(const char * const format, ...);</code></li>
    <li>where&nbsp;<code>format</code> is a list of types of arguments passed to the function<ul>
            <li><code>c</code>:&nbsp;<code>char</code></li>
            <li><code>i</code>:&nbsp;<code>integer</code></li>
            <li><code>f</code>:&nbsp;<code>float</code></li>
            <li><code>s</code>:&nbsp;<code>char *</code> (if the string is NULL, print&nbsp;<code>(nil)</code> instead</li>
            <li>any other char should be ignored</li>
            <li>see example</li>
        </ul>
    </li>
    <li>You are not allowed to use&nbsp;<code>for</code>,&nbsp;<code>goto</code>, ternary operator,&nbsp;<code>else</code>,&nbsp;<code>do ... while</code></li>
    <li>You can use a maximum of<ul>
            <li>2&nbsp;<code>while</code> loops</li>
            <li>2&nbsp;<code>if</code></li>
        </ul>
    </li>
    <li>You can declare a maximum of&nbsp;<code>9</code> variables</li>
    <li>You are allowed to use&nbsp;<code>printf</code></li>
    <li>Print a new line at the end of your function</li>
</ul>
