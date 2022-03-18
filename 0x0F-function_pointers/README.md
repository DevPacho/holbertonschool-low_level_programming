<h1>0x0F. C - Function pointers</h1>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
    <li><a href="https://intranet.hbtn.io/rltoken/LvjzIoEU3gQ_D5QCwoGtxA" target="_blank" title="Function Pointer in C">Function Pointer in C</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/3y_80bkcxiZ5Pc5Zk6NCvQ" target="_blank" title="Pointers to functions">Pointers to functions</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/i-zereq8foaoJZfG383Rvg" target="_blank" title="Function Pointers in C / C++">Function Pointers in C / C++</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/jbk8p-_m0dJq2KC7tHrJbg" target="_blank" title="why pointers to functions?">why pointers to functions?</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/HuMpTjvVc_PxonkOuzQEbg" target="_blank" title="Everything you need to know about pointers in C">Everything you need to know about pointers in C</a></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.hbtn.io/rltoken/_YIO2e-atMICPHZqBvulIA" target="_blank" title="explain to anyone">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
    <li>What are function pointers and how to use them</li>
    <li>What does a function pointer exactly hold</li>
    <li>Where does a function pointer point to in the virtual memory</li>
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
    <li>You are allowed to use&nbsp;<a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" target="_blank" title="_putchar">_putchar</a></li>
    <li>You don&rsquo;t have to push&nbsp;<code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
    <li>In the following examples, the&nbsp;<code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own&nbsp;<code>main.c</code> files at compilation. Our&nbsp;<code>main.c</code> files might be different from the one shown in the examples</li>
    <li>The prototypes of all your functions and the prototype of the function&nbsp;<code>_putchar</code> should be included in your header file called&nbsp;<code>function_pointers.h</code></li>
    <li>Don&rsquo;t forget to push your header file</li>
    <li>All your header files should be include guarded</li>
</ul>
<br>
<h1>Tasks</h1>
<h2>0. What&apos;s my name</h2>
<p>Write a function that prints a name.</p>
<ul>
    <li>Prototype:&nbsp;<code>void print_name(char *name, void (*f)(char *));</code></li>
</ul>
<br>
<h2>1. If you spend too much time thinking about a thing, you&apos;ll never get it done</h2>
<p>Write a function that executes a function given as a parameter on each element of an array.</p>
<ul>
    <li>Prototype:&nbsp;<code>void array_iterator(int *array, size_t size, void (*action)(int));</code></li>
    <li>where&nbsp;<code>size</code> is the size of the array</li>
    <li>and&nbsp;<code>action</code> is a pointer to the function you need to use</li>
</ul>
<br>
<h2>2. To hell with circumstances; I create opportunities</h2>
<p>Write a function that searches for an integer.</p>
<ul>
    <li>Prototype:&nbsp;<code>int int_index(int *array, int size, int (*cmp)(int));</code></li>
    <li>where&nbsp;<code>size</code> is the number of elements in the array&nbsp;<code>array</code></li>
    <li><code>cmp</code> is a pointer to the function to be used to compare values</li>
    <li><code>int_index</code> returns the index of the first element for which the&nbsp;<code>cmp</code> function does not return&nbsp;<code>0</code></li>
    <li>If no element matches, return&nbsp;<code>-1</code></li>
    <li>If size &lt;=&nbsp;<code>0</code>, return&nbsp;<code>-1</code></li>
</ul>
<br>
<h2>3. A goal is not always meant to be reached, it often serves simply as something to aim at</h2>
<p>Write a program that performs simple operations.</p>
<ul>
    <li>You are allowed to use the standard library</li>
    <li>Usage:&nbsp;<code>calc num1 operator num2</code></li>
    <li>You can assume&nbsp;<code>num1</code> and&nbsp;<code>num2</code> are integers, so use the&nbsp;<code>atoi</code> function to convert them from the string input to&nbsp;<code>int</code></li>
    <li><code>operator</code> is one of the following:<ul>
            <li><code>+</code>: addition</li>
            <li><code>-</code>: subtraction</li>
            <li><code>*</code>: multiplication</li>
            <li><code>/</code>: division</li>
            <li><code>%</code>: modulo</li>
        </ul>
    </li>
    <li>The program prints the result of the operation, followed by a new line</li>
    <li>You can assume that the result of all operations can be stored in an&nbsp;<code>int</code></li>
    <li>if the number of arguments is wrong, print&nbsp;<code>Error</code>, followed by a new line, and exit with the status&nbsp;<code>98</code></li>
    <li>if the&nbsp;<code>operator</code> is none of the above, print&nbsp;<code>Error</code>, followed by a new line, and exit with the status&nbsp;<code>99</code></li>
    <li>if the user tries to divide (<code>/</code> or&nbsp;<code>%</code>) by&nbsp;<code>0</code>, print&nbsp;<code>Error</code>, followed by a new line, and exit with the status&nbsp;<code>100</code></li>
</ul>
<p>This task requires that you create four different files.</p>
<p><strong>3-calc.h</strong></p>
<p>This file should contain all the function prototypes and data structures used by the program. You can use this structure:</p>
<pre><code>/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
</code></pre>
<p><strong>3-op_functions.c</strong></p>
<p>This file should contain the 5 following functions (not more):</p>
<ul>
    <li><code>op_add</code>: returns the sum of&nbsp;<code>a</code> and&nbsp;<code>b</code>. Prototype:&nbsp;<code>int op_add(int a, int b);</code></li>
    <li><code>op_sub</code>: returns the difference of&nbsp;<code>a</code> and&nbsp;<code>b</code>. Prototype:&nbsp;<code>int op_sub(int a, int b);</code></li>
    <li><code>op_mul</code>: returns the product of&nbsp;<code>a</code> and&nbsp;<code>b</code>. Prototype:&nbsp;<code>int op_mul(int a, int b);</code></li>
    <li><code>op_div</code>: returns the result of the division of&nbsp;<code>a</code> by&nbsp;<code>b</code>. Prototype:&nbsp;<code>int op_div(int a, int b);</code></li>
    <li><code>op_mod</code>: returns the remainder of the division of&nbsp;<code>a</code> by&nbsp;<code>b</code>. Prototype:&nbsp;<code>int op_mod(int a, int b);</code></li>
</ul>
<p><strong>3-get_op_func.c</strong></p>
<p>This file should contain the function that selects the correct function to perform the operation asked by the user. You&rsquo;re not allowed to declare any other function.</p>
<ul>
    <li>Prototype:&nbsp;<code>int (*get_op_func(char *s))(int, int);</code></li>
    <li>where&nbsp;<code>s</code> is the operator passed as argument to the program</li>
    <li>This function returns a pointer to the function that corresponds to the operator given as a parameter. Example:&nbsp;<code>get_op_func(&quot;+&quot;)</code> should return a pointer to the function&nbsp;<code>op_add</code></li>
    <li>You are not allowed to use&nbsp;<code>switch</code> statements</li>
    <li>You are not allowed to use&nbsp;<code>for</code> or&nbsp;<code>do ... while</code> loops</li>
    <li>You are not allowed to use&nbsp;<code>goto</code></li>
    <li>You are not allowed to use&nbsp;<code>else</code></li>
    <li>You are not allowed to use more than one&nbsp;<code>if</code> statement in your code</li>
    <li>You are not allowed to use more than one&nbsp;<code>while</code> loop in your code</li>
    <li>If&nbsp;<code>s</code> does not match any of the 5 expected operators (<code>+</code>,&nbsp;<code>-</code>,&nbsp;<code>*</code>,&nbsp;<code>/</code>,&nbsp;<code>%</code>), return&nbsp;<code>NULL</code></li>
    <li>You are only allowed to declare these two variables in this function:</li>
</ul>
<pre><code>    op_t ops[] = {
        {&quot;+&quot;, op_add},
        {&quot;-&quot;, op_sub},
        {&quot;*&quot;, op_mul},
        {&quot;/&quot;, op_div},
        {&quot;%&quot;, op_mod},
        {NULL, NULL}
    };
    int i;
</code></pre>
<p><strong>3-main.c</strong></p>
<p>This file should contain your&nbsp;<code>main</code> function only.</p>
<ul>
    <li>You are not allowed to code any other function than&nbsp;<code>main</code> in this file</li>
    <li>You are not allowed to directly call&nbsp;<code>op_add</code>,&nbsp;<code>op_sub</code>,&nbsp;<code>op_mul</code>,&nbsp;<code>op_div</code> or&nbsp;<code>op_mod</code> from the&nbsp;<code>main</code> function</li>
    <li>You have to use&nbsp;<code>atoi</code> to convert arguments to&nbsp;<code>int</code></li>
    <li>You are not allowed to use any kind of loop</li>
    <li>You are allowed to use a maximum of 3&nbsp;<code>if</code> statements</li>
</ul>
