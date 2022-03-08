<h1>0x0B. C - malloc, free</h1>
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