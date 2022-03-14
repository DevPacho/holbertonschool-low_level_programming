<h1>0x0C. C - More malloc, free</h1>
<h2>Concepts</h2>
<div>
    <div>
        <p><em>For this project, students are expected to look at this concept:</em></p>
        <ul>
            <li><a href="https://intranet.hbtn.io/concepts/62">Automatic and dynamic allocation, malloc and free</a></li>
        </ul>
    </div>
</div>
<div>
    <h2>Resources</h2>
    <p><strong>Read or watch</strong>:</p>
    <ul>
        <li><a href="https://intranet.hbtn.io/rltoken/xRakq81EUvl-3QG_3QUC8A" target="_blank" title="Do I cast the result of malloc?">Do I cast the result of malloc?</a></li>
    </ul>
    <p><strong>man or help</strong>:</p>
    <ul>
        <li><code>exit (3)</code></li>
        <li><code>calloc</code></li>
        <li><code>realloc</code></li>
    </ul>
    <h2>Learning Objectives</h2>
    <p>At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.hbtn.io/rltoken/ahat4zA8ssXZCSJ6eU2JdA" target="_blank" title="explain to anyone">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
    <h3>General</h3>
    <ul>
        <li>How to use the&nbsp;<code>exit</code> function</li>
        <li>What are the functions&nbsp;<code>calloc</code> and&nbsp;<code>realloc</code> from the standard library and how to use them</li>
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
        <li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
        <li>Don&rsquo;t forget to push your header file</li>
    </ul>
</div>
<br>
<h1>Tasks</h1>
<div>
    <div>
        <div>
            <h2>0. Trust no one</h2>
            <div>mandatory</div>
        </div>
        <div>
            <p>Write a function that allocates memory using&nbsp;<code>malloc</code>.</p>
            <ul>
                <li>Prototype:&nbsp;<code>void *malloc_checked(unsigned int b);</code></li>
                <li>Returns a pointer to the allocated memory</li>
                <li>if&nbsp;<code>malloc</code> fails, the&nbsp;<code>malloc_checked</code> function should cause normal process termination with a status value of&nbsp;<code>98</code></li>
              <div>
              </div>
            </ul>
        </div>
    </div>
</div>
<br>
<div>
    <h2>1. string_nconcat</h2>
    <div>mandatory</div>
</div>
<div>
    <p>Write a function that concatenates two strings.</p>
    <ul>
        <li>Prototype:&nbsp;<code>char *string_nconcat(char *s1, char *s2, unsigned int n);</code></li>
        <li>The returned pointer shall point to a newly allocated space in memory, which contains&nbsp;<code>s1</code>, followed by the first&nbsp;<code>n</code> bytes of&nbsp;<code>s2</code>, and null terminated</li>
        <li>If the function fails, it should return&nbsp;<code>NULL</code></li>
        <li>If&nbsp;<code>n</code> is greater or equal to the length of&nbsp;<code>s2</code> then use the entire string&nbsp;<code>s2</code></li>
        <li>if&nbsp;<code>NULL</code> is passed, treat it as an empty string</li>
    </ul>
</div>
<br>
<div>
    <h2>2. _calloc</h2>
    <div>mandatory</div>
</div>
<div>
    <p>Write a function that allocates memory for an array, using&nbsp;<code>malloc</code>.</p>
    <ul>
        <li>Prototype:&nbsp;<code>void *_calloc(unsigned int nmemb, unsigned int size);</code></li>
        <li>The&nbsp;<code>_calloc</code> function allocates memory for an array of&nbsp;<code>nmemb</code> elements of&nbsp;<code>size</code> bytes each and returns a pointer to the allocated memory.</li>
        <li>The memory is set to zero</li>
        <li>If&nbsp;<code>nmemb</code> or&nbsp;<code>size</code> is&nbsp;<code>0</code>, then&nbsp;<code>_calloc</code> returns&nbsp;<code>NULL</code></li>
        <li>If&nbsp;<code>malloc</code> fails, then&nbsp;<code>_calloc</code> returns&nbsp;<code>NULL</code></li>
    </ul>
    <p>FYI: The standard library provides a different function:&nbsp;<code>calloc</code>. Run&nbsp;<code>man calloc</code> to learn more.</p>
</div>
<br>
<div>
    <h2>3. array_range</h2>
    <div>mandatory</div>
</div>
<div>
    <p>Write a function that creates an array of integers.</p>
    <ul>
        <li>Prototype:&nbsp;<code>int *array_range(int min, int max);</code></li>
        <li>The array created should contain all the values from&nbsp;<code>min</code> (included) to&nbsp;<code>max</code> (included), ordered from&nbsp;<code>min</code> to&nbsp;<code>max</code></li>
        <li>Return: the pointer to the newly created array</li>
        <li>If&nbsp;<code>min</code> &gt;&nbsp;<code>max</code>, return&nbsp;<code>NULL</code></li>
        <li>If&nbsp;<code>malloc</code> fails, return&nbsp;<code>NULL</code></li>
    </ul>
</div>
