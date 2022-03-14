<h1>0x0D. C - Preprocessor</h1>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
    <li><a href="https://intranet.hbtn.io/rltoken/UlmUG7PSamY2_qL6xze6wg" target="_blank" title="Understanding C program Compilation Process">Understanding C program Compilation Process</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/KAqnlwAvPZ84KI2JFlJpSg" target="_blank" title="Object-like Macros">Object-like Macros</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/cJyU0mmGRx_Wd9x8WwygOQ" target="_blank" title="Macro Arguments">Macro Arguments</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/A5176irunoejPUjwT3pFCQ" target="_blank" title="Pre Processor Directives in C">Pre Processor Directives in C</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/lgohqkU5DlzUBkO2MeMmHA" target="_blank" title="The C Preprocessor">The C Preprocessor</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/C47iIZ3tGug6sklTB7hT_Q" target="_blank" title="Standard Predefined Macros">Standard Predefined Macros</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/sqLUMtBCgAAXVdhIaVoaWQ" target="_blank" title="include guard">include guard</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/fJJUPJ-zZXlh3db00FEsJw" target="_blank" title="Common Predefined Macros">Common Predefined Macros</a></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.hbtn.io/rltoken/mn8Yoq1uLMNqJfqX1eFYkw" target="_blank" title="explain to anyone">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
    <li>What are macros and how to use them</li>
    <li>What are the most common predefined macros</li>
    <li>How to include guard your header files</li>
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
    <li>Don&rsquo;t forget to push your header file</li>
    <li>All your header files should be include guarded</li>
</ul>
<br>

<h1>Tasks</h1>
<div>
    <h2>0. Object-like Macro</h2>
    <div>mandatory</div>
</div>
<div>
    <p>Create a header file that defines a macro named&nbsp;<code>SIZE</code> as an abbreviation for the token&nbsp;<code>1024</code>.</p>
</div>
<br>
<div>
    <h2>1. Pi</h2>
    <div>mandatory</div>
</div>
<div>
    <p>Create a header file that defines a macro named&nbsp;<code>PI</code> as an abbreviation for the token&nbsp;<code>3.14159265359</code>.</p>
</div>
<br>
<div>
    <h2>2. File name</h2>
    <div>mandatory</div>
</div>
<div>
    <p>Write a program that prints the name of the file it was compiled from, followed by a new line.</p>
    <ul>
        <li>You are allowed to use the standard library</li>
    </ul>
</div>
<br>
<div>
    <h2>3. Function-like macro</h2>
    <div>mandatory</div>
</div>
<div>
    <p>Write a function-like macro&nbsp;<code>ABS(x)</code> that computes the absolute value of a number&nbsp;<code>x</code>.</p>
</div>
<br>
<div>
    <h2>4. SUM</h2>
    <div>mandatory</div>
</div>
<div>
    <p>Write a function-like macro&nbsp;<code>SUM(x, y)</code> that computes the sum of the numbers&nbsp;<code>x</code> and&nbsp;<code>y</code>.</p>
</div>
