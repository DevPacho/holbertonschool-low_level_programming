<h1>0x0B. C - malloc, free</h1>
<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Malloc-function-in-c.png">
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
        <li><a href="https://intranet.hbtn.io/rltoken/aRWpmTTHkSS2nTGh0Q5xyA" target="_blank" title="0x0a - malloc & free - quick overview.pdf">0x0a - malloc &amp; free - quick overview.pdf</a></li>
        <li><a href="https://intranet.hbtn.io/rltoken/yD3tk5u--ws7QNFwTOfaDQ" target="_blank" title="Dynamic memory allocation in C - malloc calloc realloc free">Dynamic memory allocation in C - malloc calloc realloc free</a> (<em>stop at 6:50</em>)</li>
    </ul>
    <p><strong>man or help</strong>:</p>
    <ul>
        <li><code>malloc</code></li>
        <li><code>free</code></li>
    </ul>
    <h2>Learning Objectives</h2>
    <p>At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.hbtn.io/rltoken/apBF53_9RDiTkG8MSIxyQw" target="_blank" title="explain to anyone">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
    <h3>General</h3>
    <ul>
        <li>What is the difference between automatic and dynamic allocation</li>
        <li>What is&nbsp;<code>malloc</code> and&nbsp;<code>free</code> and how to use them</li>
        <li>Why and when use&nbsp;<code>malloc</code></li>
        <li>How to use&nbsp;<code>valgrind</code> to check for memory leak</li>
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
        <li>The only C standard library functions allowed are&nbsp;<code>malloc</code> and&nbsp;<code>free</code>. Any use of functions like&nbsp;<code>printf</code>,&nbsp;<code>puts</code>,&nbsp;<code>calloc</code>,&nbsp;<code>realloc</code> etc&hellip; is forbidden</li>
        <li>You are allowed to use&nbsp;<a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" target="_blank" title="_putchar">_putchar</a></li>
        <li>You don&rsquo;t have to push&nbsp;<code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
        <li>In the following examples, the&nbsp;<code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own&nbsp;<code>main.c</code> files at compilation. Our&nbsp;<code>main.c</code> files might be different from the one shown in the examples</li>
        <li>The prototypes of all your functions and the prototype of the function&nbsp;<code>_putchar</code> should be included in your header file called&nbsp;<code>main.h</code></li>
        <li>Don&rsquo;t forget to push your header file</li>
    </ul>
    <h2>More Info</h2>
    <p>You do not have to learn about&nbsp;<code>calloc</code> and&nbsp;<code>realloc</code>.</p>
</div>
<br>
<h1>Tasks</h1>
<div>
    <h2>0. Float like a butterfly, sting like a bee</h2>
    <ul>
        <li><b><i>File:</b>&nbsp;<code>0-create_array.c</i></code></li>
</ul>
    <br>
</div>
<div>
    <p>Write a function that creates an array of chars, and initializes it with a specific char.</p>
    <ul>
        <li>Prototype:&nbsp;<code>char *create_array(unsigned int size, char c);</code></li>
        <li>Returns&nbsp;<code>NULL</code> if size =&nbsp;<code>0</code></li>
        <li>Returns a pointer to the array, or&nbsp;<code>NULL</code> if it fails</li>
    </ul>
</div>
<div>
    <br>
    <h2>1. The woman who has no imagination has no wings</h2>
    <ul>
    <li><b><i>File:</b>&nbsp;<code>1-strdup.c</i></code></li>
</ul>
    <br>
</div>
<div>
    <p>Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.</p>
    <ul>
        <li>Prototype:&nbsp;<code>char *_strdup(char *str);</code></li>
        <li>The&nbsp;<code>_strdup()</code> function returns a pointer to a new string which is a duplicate of the string&nbsp;<code>str</code>. Memory for the new string is obtained with&nbsp;<code>malloc</code>, and can be freed with&nbsp;<code>free</code>.</li>
        <li>Returns&nbsp;<code>NULL</code> if str = NULL</li>
        <li>On success, the&nbsp;<code>_strdup</code> function returns a pointer to the duplicated string. It returns&nbsp;<code>NULL</code> if insufficient memory was available</li>
    </ul>
    <p>FYI: The standard library provides a similar function:&nbsp;<code>strdup</code>. Run&nbsp;<code>man strdup</code> to learn more.</p>
</div>
<br>
<div>
    <h2>2. He who is not courageous enough to take risks will accomplish nothing in life</h2>
    <ul>
    <li><b><i>File:</b>&nbsp;<code>2-str_concat.c</i></code></li>
</ul>
    <br>
</div>
<div>
    <p>Write a function that concatenates two strings.</p>
    <ul>
        <li>Prototype:&nbsp;<code>char *str_concat(char *s1, char *s2);</code></li>
        <li>The returned pointer should point to a newly allocated space in memory which contains the contents of&nbsp;<code>s1</code>, followed by the contents of&nbsp;<code>s2</code>, and null terminated</li>
        <li>if&nbsp;<code>NULL</code> is passed, treat it as an empty string</li>
        <li>The function should return&nbsp;<code>NULL</code> on failure</li>
    </ul>
</div>
<br>
<div>
    <h2>3. If you even dream of beating me you&apos;d better wake up and apologize</h2>
    <ul>
    <li><b><i>File:</b>&nbsp;<code>3-alloc_grid.c</i></code></li>
</ul>
    <br>
</div>
<div>
    <p>Write a function that returns a pointer to a 2 dimensional array of integers.</p>
    <ul>
        <li>Prototype:&nbsp;<code>int **alloc_grid(int width, int height);</code></li>
        <li>Each element of the grid should be initialized to&nbsp;<code>0</code></li>
        <li>The function should return&nbsp;<code>NULL</code> on failure</li>
        <li>If&nbsp;<code>width</code> or&nbsp;<code>height</code> is&nbsp;<code>0</code> or negative, return&nbsp;<code>NULL</code></li>
    </ul>
</div>
<br>
<div>
    <h2>4. It&apos;s not bragging if you can back it up</h2>
    <ul>
    <li><b><i>File:</b>&nbsp;<code>4-free_grid.c</i></code></li>
</ul>
    <br>
</div>
<div>
    <p>Write a function that frees a 2 dimensional grid previously created by your&nbsp;<code>alloc_grid</code> function.</p>
    <ul>
        <li>Prototype:&nbsp;<code>void free_grid(int **grid, int height);</code></li>
        <li>Note that we will compile with your&nbsp;<code>alloc_grid.c</code> file. Make sure it compiles.</li>
    </ul>
</div>
<br>
