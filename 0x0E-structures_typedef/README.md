<h1>0x0E. C - Structures, typedef</h1>
<p><br></p>

[![dogstruct.jpg](https://i.postimg.cc/3JZS7kGX/dogstruct.jpg)](https://postimg.cc/JGGc54P0)

<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
    <li><a href="https://intranet.hbtn.io/rltoken/Rc1JAo6IS9HkELfLUylh2g" target="_blank" title="0x0d. Structures.pdf">0x0d. Structures.pdf</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/sF_gQY2e9CP95XbgWQkduA" target="_blank" title="struct (C programming language)">struct (C programming language)</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/7VySR2oMyxk7VMR8LLOvZA" target="_blank" title="Documentation: structures">Documentation: structures</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/kef9P9qRh_co4dxwHU8QGA" target="_blank" title="0x0d. Typedef and structures.pdf">0x0d. Typedef and structures.pdf</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/-vbMNPFrIA5PcVs4RiWr4g" target="_blank" title="typedef">typedef</a></li>
    <li><strong>Programming in C</strong> by Stephen Kochan -&nbsp;<em>Chapter 8, Working with Structures p163-189</em></li>
    <li><a href="https://intranet.hbtn.io/rltoken/92gDeb3TtzgLDpzo9DXfZg" target="_blank" title="The Lost Art of C Structure Packing">The Lost Art of C Structure Packing</a> (<em>Advanced - not mandatory</em>)</li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.hbtn.io/rltoken/SJC6PvFo2vSFZW0M7u-caw" target="_blank" title="explain to anyone">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
    <li>What are structures, when, why and how to use them</li>
    <li>How to use&nbsp;<code>typedef</code></li>
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
    <li>The only C standard library functions allowed are&nbsp;<code>printf</code>,&nbsp;<code>malloc</code>,&nbsp;<code>free</code> and&nbsp;<code>exit</code>.</li>
    <li>In the following examples, the&nbsp;<code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own&nbsp;<code>main.c</code> files at compilation. Our&nbsp;<code>main.c</code> files might be different from the one shown in the examples</li>
    <li>Don&rsquo;t forget to push your header file</li>
    <li>All your header files should be include guarded</li>
</ul>
<br>
<h1>Tasks</h1>
<h2>0. Poppy</h2>
<div>mandatory</div>
<p>Define a new type&nbsp;<code>struct dog</code> with the following elements:</p>
<ul>
    <li><code>name</code>, type =&nbsp;<code>char *</code></li>
    <li><code>age</code>, type =&nbsp;<code>float</code></li>
    <li><code>owner</code>, type =&nbsp;<code>char *</code></li>
</ul>
<br>
<div>
    <h2>1. A dog is the only thing on earth that loves you more than you love yourself</h2>
    <div>mandatory</div>
</div>
<div>
    <p>Write a function that initialize a variable of type&nbsp;<code>struct dog</code></p>
    <ul>
        <li>Prototype:&nbsp;<code>void init_dog(struct dog *d, char *name, float age, char *owner);</code></li>
    </ul>
</div>
<br>
<h2>2. A dog will teach you unconditional love. If you can have that in your life, things won&apos;t be too bad</h2>
<div>mandatory</div>
<p>Write a function that prints a&nbsp;<code>struct dog</code></p>
<ul>
    <li>Prototype:&nbsp;<code>void print_dog(struct dog *d);</code></li>
    <li>Format: see example bellow</li>
    <li>You are allowed to use the standard library</li>
    <li>If an element of&nbsp;<code>d</code> is&nbsp;<code>NULL</code>, print&nbsp;<code>(nil)</code> instead of this element. (if&nbsp;<code>name</code> is&nbsp;<code>NULL</code>, print&nbsp;<code>Name: (nil)</code>)</li>
    <li>If&nbsp;<code>d</code> is&nbsp;<code>NULL</code> print nothing.</li>
</ul>
<br>
<h2>3. Outside of a dog, a book is a man&apos;s best friend. Inside of a dog it&apos;s too dark to read</h2>
<div>mandatory</div>
<p>Define a new type&nbsp;<code>dog_t</code> as a new name for the type&nbsp;<code>struct dog</code>.&nbsp;</p>
<p><br></p>
<h2>4. A door is what a dog is perpetually on the wrong side of</h2>
<div>mandatory</div>
<p>Write a function that creates a new dog.</p>
<ul>
    <li>Prototype:&nbsp;<code>dog_t *new_dog(char *name, float age, char *owner);</code></li>
    <li>You have to store a copy of&nbsp;<code>name</code> and&nbsp;<code>owner</code></li>
    <li>Return&nbsp;<code>NULL</code> if the function fails</li>
</ul>
<br>
<h2>5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn&apos;t make it a leg</h2>
<div>mandatory</div>
<p>Write a function that frees dogs.</p>
<ul>
    <li>Prototype:&nbsp;<code>void free_dog(dog_t *d);</code></li>
</ul>
