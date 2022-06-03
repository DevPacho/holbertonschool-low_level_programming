<h1>0x00. C - Hello, World</h1>
<img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/212/cisfun.jpg">
<p>©. <a href="https://www.washingtonpost.com/goingoutguide/movies/the-lego-movie-review-toy-themed-adventure-celebrates-creativity/2014/02/05/ba3d6b26-8cff-11e3-95dd-36ff657a4dae_story.html" target="_blank"><i><b>Image source</a></i></b></p>
<br>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
    <li><a href="https://intranet.hbtn.io/rltoken/d6TBbj0HA4EvnmpqvEz68Q" target="_blank" title="Everything you need to know to start with C.pdf">Everything you need to know to start with C.pdf</a> (<em>You do not have to learn everything in there yet, but make sure you read it entirely first</em>)</li>
    <li><a href="https://intranet.hbtn.io/rltoken/vY9KI1Ai38BUuydEfadtaA" target="_blank" title="Dennis Ritchie">Dennis Ritchie</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/f5nVwIVoNRrnddbX-5h5rw" target="_blank" title='"C" Programming Language: Brian Kernighan'>&ldquo;C&rdquo; Programming Language: Brian Kernighan</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/J7yAaPGVuPoJI4iP1DuIPw" target="_blank" title="Why C Programming Is Awesome">Why C Programming Is Awesome</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/AicyjqLinWdA9qxKsXBKjg" target="_blank" title="Learning to program in C part 1">Learning to program in C part 1</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/1qtDStnOrOjrVseFa3jngA" target="_blank" title="Learning to program in C part 2">Learning to program in C part 2</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/qM-SOqtf8ZnGxVtVWchAfg" target="_blank" title="Understanding C program Compilation Process">Understanding C program Compilation Process</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/8c-wkUvvmuA_d5s4ktmnEw" target="_blank" title="Betty Coding Style">Betty Coding Style</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/7oODGrfLgAJJzoCbfBap3Q" target="_blank" title="Hash-bang under the hood">Hash-bang under the hood</a> (<em>Look at only after you finish consuming the other resources</em>)</li>
    <li><a href="https://intranet.hbtn.io/rltoken/8rYFkn82I0QlSygvC0u2Jw" target="_blank" title="Linus Torvalds on C vs. C++">Linus Torvalds on C vs. C++</a> (<em>Look at only after you finish consuming the other resources</em>)</li>
</ul>
<p><strong>man or help</strong>:</p>
<ul>
    <li><code>gcc</code></li>
    <li><code>printf (3)</code></li>
    <li><code>puts</code></li>
    <li><code>putchar</code></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.hbtn.io/rltoken/IU8pPF3LtFsVkcyn4BUITA" target="_blank" title="explain to anyone">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
    <li>Why C programming is awesome</li>
    <li>Who invented C</li>
    <li>Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds</li>
    <li>What happens when you type&nbsp;<code>gcc main.c</code></li>
    <li>What is an entry point</li>
    <li>What is&nbsp;<code>main</code></li>
    <li>How to print text using&nbsp;<code>printf</code>,&nbsp;<code>puts</code> and&nbsp;<code>putchar</code></li>
    <li>How to get the size of a specific type using the unary operator&nbsp;<code>sizeof</code></li>
    <li>How to compile using&nbsp;<code>gcc</code></li>
    <li>What is the default program name when compiling with&nbsp;<code>gcc</code></li>
    <li>What is the official C coding style and how to check your code with&nbsp;<code>betty-style</code></li>
    <li>How to find the right header to include in your source code when using a standard library function</li>
    <li>How does the&nbsp;<code>main</code> function influence the return value of the program</li>
</ul>
<h2>Requirements</h2>
<h3>C</h3>
<ul>
    <li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
    <li>All your files will be compiled on Ubuntu 20.04 LTS using&nbsp;<code>gcc</code>, using the options&nbsp;<code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
    <li>All your files should end with a new line</li>
    <li>A&nbsp;<code>README.md</code> file at the root of the repo, containing a description of the repository</li>
    <li>A&nbsp;<code>README.md</code> file, at the root of the folder of&nbsp;<em>this</em> project, containing a description of the project</li>
    <li>There should be no errors and no warnings during compilation</li>
    <li>You are not allowed to use&nbsp;<code>system</code></li>
    <li>Your code should use the&nbsp;<code>Betty</code> style. It will be checked using&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" target="_blank" title="betty-style.pl">betty-style.pl</a> and&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" target="_blank" title="betty-doc.pl">betty-doc.pl</a></li>
</ul>
<h3>Shell Scripts</h3>
<ul>
    <li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
    <li>All your scripts will be tested on Ubuntu 20.04 LTS</li>
    <li>All your scripts should be exactly two lines long (<code>$ wc -l file</code> should print 2)</li>
    <li>All your files should end with a new line</li>
    <li>The first line of all your files should be exactly&nbsp;<code>#!/bin/bash</code></li>
</ul>
<h2>More Info</h2>
<h3>Betty linter</h3>
<p>To run the Betty linter just with command betty :</p>
<ul>
    <li>Go to the&nbsp;<a href="https://intranet.hbtn.io/rltoken/Iz34GJJ6iQ28q3sJXRUdkQ" target="_blank" title="Betty">Betty</a> repository</li>
    <li>Clone the&nbsp;<a href="https://intranet.hbtn.io/rltoken/Iz34GJJ6iQ28q3sJXRUdkQ" target="_blank" title="repo">repo</a> to your local machine</li>
    <li><code>cd</code> into the Betty directory</li>
    <li>Install the linter with&nbsp;<code>sudo ./install.sh</code></li>
    <li><code>emacs</code> or&nbsp;<code>vi</code> a new file called&nbsp;<code>betty</code>, and copy the script below:</li>
</ul>
<pre><code>#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH=&quot;/usr/local/bin&quot;
BETTY_STYLE=&quot;betty-style&quot;
BETTY_DOC=&quot;betty-doc&quot;

if [ &quot;$#&quot; = &quot;0&quot; ]; then
    echo &quot;No arguments passed.&quot;
    exit 1
fi

for argument in &quot;$@&quot; ; do
    echo -e &quot;\n========== $argument ==========&quot;
    ${BIN_PATH}/${BETTY_STYLE} &quot;$argument&quot;
    ${BIN_PATH}/${BETTY_DOC} &quot;$argument&quot;
done</code></pre>
<ul>
    <li>Once saved, exit file and change permissions to apply to all users with&nbsp;<code>chmod a+x betty</code></li>
</ul>
<ul>
    <li>Move the&nbsp;<code>betty</code> file into&nbsp;<code>/bin/</code> directory or somewhere else in your&nbsp;<code>$PATH</code> with&nbsp;<code>sudo mv betty /bin/</code></li>
</ul>
<p></p>
<p>You can now type betty to run the Betty linter!&nbsp;</p>
<br>
<h3>Manual QA Review</h3>
<p><strong>It is your responsibility to request a review for your blog from a peer before the project&rsquo;s deadline. If no peers have been reviewed, you should request a review from a TA or staff member.</strong></p>
<br>
<h1>✅ Tasks ✅</h1>
<p>This project is made up of mandatory and optional tasks, <b>⬇️ <code>look at them!</code></b> ⬇️</p>
<br>
<h2>0. Preprocessor</h2>
<p>Write a script that runs a C file through the preprocessor and save the result into another file.</p>
<ul>
    <li>The C file name will be saved in the variable&nbsp;<code>$CFILE</code></li>
    <li>The output should be saved in the file&nbsp;<code>c</code></li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/c/0x00$ cat main.c
#include &ltstdio.h&gt
<br>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 <br>
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ ./0-preprocessor 
julien@ubuntu:~/c/0x00$ tail c
#942 "/usr/include/stdio.h" 3 4
<br>
#2 "main.c" 2
<br>
<br>
#3 "main.c"
int main(void)
{
 return (0);
}
julien@ubuntu:~/c/0x00$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/FranRM15/holbertonschool-low_level_programming/blob/master/0x00-hello_world/0-preprocessor" target="_blank">0-preprocessor</b></i></a></code> ✅</li>
</ul>
<br>
<h2>1. Compiler</h2>
<pWrite a script that compiles a C file but does not link.></p>
<ul>
    <li>The C file name will be saved in the variable <code>$CFILE</code></li>
    <li>The output file should be named the same as the C file, but with the extension <code>.o</code> instead of <code>.c</code>.</li>
    <ul>
        <li>Example: if the C file is <code>main.c</code>, the output file should be <code>main.o</code></li>
    </ul>       
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include &ltstdio.h&gt
<br>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
<br>
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./1-compiler 
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   c            main.o
Makefile               100-intel      main.c  main.s
julien@ubuntu:~/c/0x00$ cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@>^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^P^B^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^K^@^H^@UHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^K^@^@^@^@A^N^PM-^F^BC^M^FF^L^G^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^D^@M-qM-^?^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^E^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^D^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^R^@^A^@^@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@main.c^@main^@^@^@^@ ^@^@^@^@^@^@^@^B^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@.symtab^@.strtab^@.shstrtab^@.text^@.data^@.bss^@.comment^@.note.GNU-stack^@.rela.eh_frame^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^[^@^@^@^A^@^@^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@!^@^@^@^A^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@'^@^@^@^H^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@,^@^@^@^A^@^@^@0^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@5^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@5^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@J^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@8^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@E^@^@^@^D^@^@^@@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M- ^A^@^@^@^@^@^@^X^@^@^@^@^@^@^@    ^@^@^@^F^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@^Q^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^A^@^@^@^@^@^@T^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^@^@^@^@^@^@^@M-X^@^@^@^@^@^@^@
^@^@^@^H^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^P^A^@^@^@^@^@^@^M^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@julien@ubuntu:~/c/0x00$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/FranRM15/holbertonschool-low_level_programming/blob/master/0x00-hello_world/1-compiler" target="_blank">1-compiler</b></i></a></code> ✅</li>
</ul>
<br>
<h2>2. Assembler</h2>
<p>Write a script that generates the assembly code of a C code and save it in an output file.</p>
<ul>
    <li>The C file name will be saved in the variable <code>$CFILE</code></li>
    <li>The output file should be named the same as the C file, but with the extension <code>.s</code> instead of <code>.c</code>.</li>
    <ul>
        <li>Example: if the C file is <code>main.c</code>, the output file should be <code>main.s</code></li>
    </ul>       
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include &ltstdio.h&gt
<br>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 <br>
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./2-assembler
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler  2-assembler c  main.c  main.s  Makefile
julien@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    pushq   %rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    movq    %rsp, %rbp
    .cfi_def_cfa_register 6
    movl    $0, %eax
    popq    %rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
julien@ubuntu:~/c/0x00$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/FranRM15/holbertonschool-low_level_programming/blob/master/0x00-hello_world/2-assembler" target="_blank">2-assembler</b></i></a></code> ✅</li>
</ul>
<br>
<h2>3. Name</h2>
<p>Write a script that compiles a C file and creates an executable named <code>cisfun</code>.</p>
<ul>
    <li>The C file name will be saved in the variable <code>$CFILE</code></li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include &ltstdio.h&gt
<br>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 <br>
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./3-name 
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   3-name  cisfun  main.o  Makefile
100-intel       2-assembler  c       main.c  main.s
julien@ubuntu:~/c/0x00$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/FranRM15/holbertonschool-low_level_programming/blob/master/0x00-hello_world/3-name" target="_blank">3-name</b></i></a></code> ✅</li>
</ul>
<br>
<h2>4. Hello, puts</h2>
<p>Write a C program that prints exactly <code>"Programming is like building a multilingual puzzle</code>, followed by a new line.</p>
<ul>
    <li>Use the function <code>puts</code></li>
    <li>You are not allowed to use <code>printf</code></li>
    <li>Your program should end with the value <code>0</code></li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/FranRM15/holbertonschool-low_level_programming/blob/master/0x00-hello_world/4-puts.c" target="_blank">4-puts.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>5. Hello, printf</h2>
<p>Write a C program that prints exactly <code>with proper grammar, but the outcome is a piece of art,</code>, followed by a new line.</p>
<ul>
    <li>Use the function <code>printf</code></li>
    <li>You are not allowed to use <code>puts</code></li>
    <li>Your program should return <code>0</code></li>
    <li>Your program should compile without warning when using the <code>-Wall gcc</code> option</li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c
julien@ubuntu:~/c/0x00$ ./a.out 
with proper grammar, but the outcome is a piece of art,
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/FranRM15/holbertonschool-low_level_programming/blob/master/0x00-hello_world/5-printf.c" target="_blank">5-printf.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>6. Size is not grandeur, and territory does not make a nation</h2>
<p>Write a C program that prints the size of various types on the computer it is compiled and run on.</p>
<ul>
    <li>You should produce the exact same output as in the example</li>
    <li>Warnings are allowed</li>
    <li>Your program should return <code>0</code></li>
    <li>You might have to install the package <code>libc6-dev-i386</code> on your Linux (Vagrant) to test the <code>-m32 gcc</code> option</li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2> /tmp/32
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2> /tmp/64
julien@ubuntu:~/c/0x00$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/FranRM15/holbertonschool-low_level_programming/blob/master/0x00-hello_world/6-size.c" target="_blank">6-size.c</b></i></a></code> ✅</li>    
</ul>
<br>
<h2>7. What happens when you type gcc main.c?</h2>
<p>Write a blog post that explains all the steps of compilation. Use command lines and examples to illustrate.</p>
<ul>
    <li>Use&nbsp;<code>gcc</code> as the compiler</li>
    <li>Have at least one picture, at the top of the blog post</li>
    <li>Publish your blog post on Medium or LinkedIn</li>
    <li>Share your blog post at least on LinkedIn</li>
</ul>
<ul>
    <li><b>You can read my blog giving an answer to the previous problematizing question</b>&nbsp;<code><i><b><a href="https://www.linkedin.com/pulse/compilation-c-francisco-jos%25C3%25A9-ram%25C3%25ADrez-mojica/?trackingId=iAvzVvstTfWvb7siHgnrRw%3D%3D" target="_blank">HERE ON MY LINKEDIN!</b></i></a></code> ✅</li>
</ul>
<br>
<h2>8. Intel</h2>
<p><b><i>Advanced task</i></b><p>
<p>Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.</p>
<ul>
    <li>The C file name will be saved in the variable&nbsp;<code>$CFILE</code>.</li>
    <li>The output file should be named the same as the C file, but with the extension&nbsp;<code>.s</code> instead of&nbsp;<code>.c</code>.<ul>
            <li>Example: if the C file is&nbsp;<code>main.c</code>, the output file should be&nbsp;<code>main.s</code></li>
        </ul>
    </li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include &ltstdio.h&gt
<br>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
<br>
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./100-intel 
julien@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .intel_syntax noprefix
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    push    rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    mov rbp, rsp
    .cfi_def_cfa_register 6
    mov eax, 0
    pop rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
julien@ubuntu:~/c/0x00$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/FranRM15/holbertonschool-low_level_programming/blob/master/0x00-hello_world/100-intel" target="_blank">100-intel</b></i></a></code> ✅</li>
</ul>
<br>
<h2>9. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity</h2>
<p>Write a C program that prints exactly&nbsp;<code>and that piece of art is useful&quot; - Dora Korpar, 2015-10-19</code>, followed by a new line, to the standard error.</p>
<ul>
    <li>You are not allowed to use any functions listed in the NAME section of the man (3)&nbsp;<code>printf</code> or man (3)&nbsp;<code>puts</code></li>
    <li>Your program should return 1</li>
    <li>Your program should compile without any warnings when using the&nbsp;<code>-Wall</code> <code>gcc</code> option</li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
julien@ubuntu:~/c/0x00$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/0x00$ echo $?
1
julien@ubuntu:~/c/0x00$ ./quote 2> q
julien@ubuntu:~/c/0x00$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/0x00$ grep printf < 101-quote.c
julien@ubuntu:~/c/0x00$ grep put < 101-quote.c
julien@ubuntu:~/c/0x00$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/FranRM15/holbertonschool-low_level_programming/blob/master/0x00-hello_world/101-quote.c" target="_blank">101-quote.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>License & Copyright</h2>
<i>©. Project provided by: <a href="https://www.holbertonschool.com/" target="_blank"><b>Holberton School</a></i></b>
<br>
<i>©. Project developed by:<b> Francisco Ramírez </b><b>|&nbsp;<a href="https://github.com/DevPacho" target="_blank"> GitHub</a> <b>|</b>&nbsp;<a href="https://twitter.com/FranciscoR_15" target = "_blank" rel="nofollow"> Twitter</b></a></p>
