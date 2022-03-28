<h1>0x12. C - Singly linked lists</h1>
<h2>Concepts</h2>
<div>
    <div>
        <p><em>For this project, students are expected to look at this concept:</em></p>
        <ul>
            <li><a href="https://intranet.hbtn.io/concepts/120">Data Structures</a></li>
        </ul>
    </div>
</div>
<img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/229/giphy-3.gif">
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
    <li><a href="https://intranet.hbtn.io/rltoken/2WOe5XO84Puxd4Y1FUJwVQ" target="_blank" title="Linked Lists">Linked Lists</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/jiyCC9L1Axkl_nEmuh4j3w" target="_blank" title="Google">Google</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/DcEVPdONWy2p1x8XPH53Uw" target="_blank" title="Youtube">Youtube</a></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.hbtn.io/rltoken/3Nj_wUvnBJD6wSUyHGt6qw" target="_blank" title="explain to anyone">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
    <li>When and why using linked lists vs arrays</li>
    <li>How to build and use linked lists</li>
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
    <li>The prototypes of all your functions and the prototype of the function&nbsp;<code>_putchar</code> should be included in your header file called&nbsp;<code>lists.h</code></li>
    <li>Don&rsquo;t forget to push your header file</li>
    <li>All your header files should be include guarded</li>
</ul>
<h2>More Info</h2>
<p>Please use this data structure for this project:</p>
<pre><code>/**
 * struct list_s - singly linked list
 * @str: string - (malloc&apos;ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;</code></pre>
<h1>Tasks</h1>
<div>
    <h2>0. Print list</h2>
</div>
<div>
    <p>Write a function that prints all the elements of a&nbsp;<code>list_t</code> list.</p>
    <ul>
        <li>Prototype:&nbsp;<code>size_t print_list(const list_t *h);</code></li>
        <li>Return: the number of nodes</li>
        <li>Format: see example</li>
        <li>If&nbsp;<code>str</code> is&nbsp;<code>NULL</code>, print&nbsp;<code>[0] (nil)</code></li>
        <li>You are allowed to use&nbsp;<code>printf</code></li>
    </ul>
</div>
<br>
<h2>1. List length</h2>
<p>Write a function that returns the number of elements in a linked&nbsp;<code>list_t</code> list.</p>
<ul>
    <li>Prototype:&nbsp;<code>size_t list_len(const list_t *h);</code></li>
</ul>
<br>
<h2>2. Add node</h2>
<p>Write a function that adds a new node at the beginning of a&nbsp;<code>list_t</code> list.</p>
<ul>
    <li>Prototype:&nbsp;<code>list_t *add_node(list_t **head, const char *str);</code></li>
    <li>Return: the address of the new element, or&nbsp;<code>NULL</code> if it failed</li>
    <li><code>str</code> needs to be duplicated</li>
    <li>You are allowed to use&nbsp;<code>strdup</code></li>
</ul>
<br>
<h2>3. Add node at the end</h2>
<p>Write a function that adds a new node at the end of a&nbsp;<code>list_t</code> list.</p>
<ul>
    <li>Prototype:&nbsp;<code>list_t *add_node_end(list_t **head, const char *str);</code></li>
    <li>Return: the address of the new element, or&nbsp;<code>NULL</code> if it failed</li>
    <li><code>str</code> needs to be duplicated</li>
    <li>You are allowed to use&nbsp;<code>strdup</code></li>
</ul>
<br>
<h2>4. Free list</h2>
<p>Write a function that frees a&nbsp;<code>list_t</code> list.</p>
<ul>
    <li>Prototype:&nbsp;<code>void free_list(list_t *head);</code></li>
</ul>
