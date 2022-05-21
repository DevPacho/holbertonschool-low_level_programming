<h1>0x01. C - Variables, if, else, while</h1>

![image](https://user-images.githubusercontent.com/98773774/167271650-921a5c91-2399-46b9-8785-41b33c67a316.png)
<p>©. <a href="https://www.programiz.com/c-programming/c-for-loop" target="_blank"><i><b>Image source</a></i></b></p>
<br>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
    <li><a href="https://intranet.hbtn.io/rltoken/GB1UNodFfec0AXUfmSxsLA" target="_blank" title="Everything you need to know to start with C.pdf">Everything you need to know to start with C.pdf</a> (<em>You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: &ldquo;comments&rdquo;, &ldquo;Data types | Integer types&rdquo;, &ldquo;Declaration&rdquo;, &ldquo;Characters&rdquo;, &ldquo;Arithmetic operators&rdquo;, &ldquo;Variables assignments&rdquo;, &ldquo;Comparisons&rdquo;, &ldquo;Logical operators&rdquo;, &ldquo;if, if&hellip;else&rdquo;, &ldquo;while loops&rdquo;.</em>)</li>
    <li><a href="https://intranet.hbtn.io/rltoken/ckqC9BrBcMmv-DLmBauaWQ" target="_blank" title="Keywords and identifiers">Keywords and identifiers</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/Oau_6LT7-3IIt5ew_3Ac6g" target="_blank" title="integers">integers</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/r4hrHzg2X9JjnKj8sP_SAw" target="_blank" title="Arithmetic Operators in C">Arithmetic Operators in C</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/W93uajwXtW3WOxOaeBtF-A" target="_blank" title="If statements in C">If statements in C</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/PMD6eKdkj2RmIpagtABihw" target="_blank" title="if...else statement">if&hellip;else statement</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/dCy4644-X_WJMYxRZwCfFQ" target="_blank" title="Relational operators">Relational operators</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/gJzJXQoEdEN1Oxcutp_76Q" target="_blank" title="Logical operators">Logical operators</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/Qhq1p5UcR72-VXFJ_iAqWQ" target="_blank" title="while loop in C">while loop in C</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/RY9a1EDxRKNNHhxbJ6Pn_g" target="_blank" title="While loop">While loop</a></li>
</ul>
<p><strong>man or help</strong>:</p>
<ul>
    <li><code>ascii</code> (<em>You do not need to learn about&nbsp;<code>scanf</code>,&nbsp;<code>getc</code>,&nbsp;<code>getchar</code>,&nbsp;<code>EOF</code>,&nbsp;<code>EXIT_SUCCESS</code>,&nbsp;<code>time</code>,&nbsp;<code>rand</code>,&nbsp;<code>srand</code>,&nbsp;<code>RAND_MAX</code>,&nbsp;<code>for</code> loops,&nbsp;<code>do...while</code> loops, functions.</em>)</li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.hbtn.io/rltoken/Wt5UkBEU7LpZ8tzq9jvpJg" target="_blank" title="explain to anyone">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
    <li>What are the arithmetic operators and how to use them</li>
    <li>What are the logical operators (sometimes called boolean operators) and how to use them</li>
    <li>What the the relational operators and how to use them</li>
    <li>What values are considered TRUE and FALSE in C</li>
    <li>What are the boolean operators and how to use them</li>
    <li>How to use the&nbsp;<code>if</code>,&nbsp;<code>if ... else</code> statements</li>
    <li>How to use comments</li>
    <li>How to declare variables of types&nbsp;<code>char</code>,&nbsp;<code>int</code>,&nbsp;<code>unsigned int</code></li>
    <li>How to assign values to variables</li>
    <li>How to print the values of variables of type&nbsp;<code>char</code>,&nbsp;<code>int</code>,&nbsp;<code>unsigned int</code> with&nbsp;<code>printf</code></li>
    <li>How to use the&nbsp;<code>while</code> loop</li>
    <li>How to use variables with the&nbsp;<code>while</code> loop</li>
    <li>How to print variables using&nbsp;<code>printf</code></li>
    <li>What is the&nbsp;<code>ASCII</code> character set</li>
    <li>What are the purpose of the&nbsp;<code>gcc</code> flags&nbsp;<code>-m32</code> and&nbsp;<code>-m64</code></li>
</ul>
<h2>Requirements</h2>
<h3>General</h3>
<ul>
    <li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
    <li>All your files will be compiled on Ubuntu 20.04 LTS using&nbsp;<code>gcc</code>, using the options&nbsp;<code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
    <li>All your files should end with a new line</li>
    <li>A&nbsp;<code>README.md</code> file, at the root of the folder of the project</li>
    <li>There should be no errors and no warnings during compilation</li>
    <li>You are not allowed to use&nbsp;<code>system</code></li>
    <li>Your code should use the&nbsp;<code>Betty</code> style. It will be checked using&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" target="_blank" title="betty-style.pl">betty-style.pl</a> and&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" target="_blank" title="betty-doc.pl">betty-doc.pl</a></li>
</ul>
<br>
<h1>✅ Tasks ✅</h1>
<p>This project is made up of mandatory tasks, <b>⬇️ <code>look at them!</code></b> ⬇️</p>
<br>
<h2>0. Positive anything is better than negative nothing</h2>
<p>This program will assign a random number to the variable&nbsp;<code>n</code> each time it is executed. Complete the source code in order to print whether the number stored in the variable&nbsp;<code>n</code> is positive or negative.</p>
<ul>
    <li>You can find the source code&nbsp;<a href="https://intranet.hbtn.io/rltoken/7UBSgP4-dX9UI_R-fz7yYQ" target="_blank" title="here">here</a></li>
    <li>The variable&nbsp;<code>n</code> will store a different value every time you will run this program</li>
    <li>You don&rsquo;t have to understand what&nbsp;<code>rand</code>,&nbsp;<code>srand</code>,&nbsp;<code>RAND_MAX</code> do. Please do not touch this code</li>
    <li>The output of the program should be:<ul>
            <li>The number, followed by<ul>
                    <li>if the number is greater than 0:&nbsp;<code>is positive</code></li>
                    <li>if the number is 0:&nbsp;<code>is zero</code></li>
                    <li>if the number is less than 0:&nbsp;<code>is negative</code></li>
                </ul>
            </li>
            <li>followed by a new line</li>
        </ul>
    </li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
julien@ubuntu:~/0x01$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative.c" target="_blank">0-positive_or_negative.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>1. The last digit</h2>
<p>This program will assign a random number to the variable&nbsp;<code>n</code> each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable&nbsp;<code>n</code>.</p>
<ul>
    <li>You can find the source code&nbsp;<a href="https://intranet.hbtn.io/rltoken/oFiQttJDmwMElxNT6fqSiA" target="_blank" title="here">here</a></li>
    <li>The variable&nbsp;<code>n</code> will store a different value every time you run this program</li>
    <li>You don&rsquo;t have to understand what&nbsp;<code>rand</code>,&nbsp;<code>srand</code>, and&nbsp;<code>RAND_MAX</code> do. Please do not touch this code</li>
    <li>The output of the program should be:<ul>
            <li>The string&nbsp;<code>Last digit of</code>, followed by</li>
            <li><code>n</code>, followed by</li>
            <li>the string&nbsp;<code>is</code>, followed by<ul>
                    <li>if the last digit of&nbsp;<code>n</code> is greater than 5: the string&nbsp;<code>and is greater than 5</code></li>
                    <li>if the last digit of&nbsp;<code>n</code> is 0: the string&nbsp;<code>and is 0</code></li>
                    <li>if the last digit of&nbsp;<code>n</code> is less than 6 and not 0: the string&nbsp;<code>and is less than 6 and not 0</code></li>
                </ul>
            </li>
            <li>followed by a new line</li>
        </ul>
    </li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
julien@ubuntu:~/0x01$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/1-last_digit.c" target="_blank">1-last_digit.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game</h2>
<p>Write a program that prints the alphabet in lowercase, followed by a new line.</p>
<ul>
    <li>You can only use the&nbsp;<code>putchar</code> function (every other function (<code>printf</code>,&nbsp;<code>puts</code>, etc&hellip;) is forbidden)</li>
    <li>All your code should be in the&nbsp;<code>main</code> function</li>
    <li>You can only use&nbsp;<code>putchar</code> twice in your code</li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
julien@ubuntu:~/0x01$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x01$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/2-print_alphabet.c" target="_blank">2-print_alphabet.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>3. alphABET</h2>
<p>Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.</p>
<ul>
    <li>You can only use the&nbsp;<code>putchar</code> function (every other function (<code>printf</code>,&nbsp;<code>puts</code>, etc&hellip;) is forbidden)</li>
    <li>All your code should be in the&nbsp;<code>main</code> function</li>
    <li>You can only use&nbsp;<code>putchar</code> three times in your code</li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
julien@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
julien@ubuntu:~/0x01$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/3-print_alphabets.c" target="_blank">3-print_alphabets.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>4. When I was having that alphabet soup, I never thought that it would pay off</h2>
<p>Write a program that prints the alphabet in lowercase, followed by a new line.</p>
<ul>
    <li>Print all the letters except&nbsp;<code>q</code> and&nbsp;<code>e</code></li>
    <li>You can only use the&nbsp;<code>putchar</code> function (every other function (<code>printf</code>,&nbsp;<code>puts</code>, etc&hellip;) is forbidden)</li>
    <li>All your code should be in the&nbsp;<code>main</code> function</li>
    <li>You can only use&nbsp;<code>putchar</code> twice in your code</li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
julien@ubuntu:~/0x01$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
julien@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
julien@ubuntu:~/0x01$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/4-print_alphabt.c" target="_blank">4-print_alphabt.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>5. Numbers</h2>
<p>Write a program that prints all single digit numbers of base 10 starting from&nbsp;<code>0</code>, followed by a new line.</p>
<ul>
    <li>All your code should be in the&nbsp;<code>main</code> function</li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/0x01$ ./5-print_numbers 
0123456789
julien@ubuntu:~/0x01$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/5-print_numbers.c" target="_blank">5-print_numbers.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>6. Numberz</h2>
<p>Write a program that prints all single digit numbers of base 10 starting from&nbsp;<code>0</code>, followed by a new line.</p>
<ul>
    <li>You are not allowed to use any variable of type&nbsp;<code>char</code></li>
    <li>You can only use the&nbsp;<code>putchar</code> function (every other function (<code>printf</code>,&nbsp;<code>puts</code>, etc&hellip;) is forbidden)</li>
    <li>You can only use&nbsp;<code>putchar</code> twice in your code</li>
    <li>All your code should be in the&nbsp;<code>main</code> function</li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/0x01$ ./6-print_numberz 
0123456789
julien@ubuntu:~/0x01$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/6-print_numberz.c" target="_blank">6-print_numberz.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>7. Smile in the mirror</h2>
<p>Write a program that prints the lowercase alphabet in reverse, followed by a new line.</p>
<ul>
    <li>You can only use the&nbsp;<code>putchar</code> function (every other function (<code>printf</code>,&nbsp;<code>puts</code>, etc&hellip;) is forbidden)</li>
    <li>All your code should be in the&nbsp;<code>main</code> function</li>
    <li>You can only use&nbsp;<code>putchar</code> twice in your code</li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
julien@ubuntu:~/0x01$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/7-print_tebahpla.c" target="_blank">7-print_tebahpla.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>8. Hexadecimal</h2>
<p>Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.</p>
<ul>
    <li>You can only use the&nbsp;<code>putchar</code> function (every other function (<code>printf</code>,&nbsp;<code>puts</code>, etc&hellip;) is forbidden)</li>
    <li>All your code should be in the&nbsp;<code>main</code> function</li>
    <li>You can only use&nbsp;<code>putchar</code> three times in your code</li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
julien@ubuntu:~/0x01$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/8-print_base16.c" target="_blank">8-print_base16.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>9. Patience, persistence and perspiration make an unbeatable combination for success</h2>
<p>Write a program that prints all possible combinations of single-digit numbers.</p>
<ul>
    <li>Numbers must be separated by&nbsp;<code>,</code>, followed by a space</li>
    <li>Numbers should be printed in ascending order</li>
    <li>You can only use the&nbsp;<code>putchar</code> function (every other function (<code>printf</code>,&nbsp;<code>puts</code>, etc&hellip;) is forbidden)</li>
    <li>All your code should be in the&nbsp;<code>main</code> function</li>
    <li>You can only use&nbsp;<code>putchar</code> four times maximum in your code</li>
    <li>You are not allowed to use any variable of type&nbsp;<code>char</code></li>
</ul>
<p><b><i><u>Output example:</u></i></b></p>
<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
julien@ubuntu:~/0x01$</code></pre>
<ul>
    <li><b>Solution file: </b><code><i><b><a href="https://github.com/DevPacho/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/9-print_comb.c" target="_blank">9-print_comb.c</b></i></a></code> ✅</li>
</ul>
<br>
<h2>License & Copyright</h2>
<i>©. Project provided by: <a href="https://www.holbertonschool.com/" target="_blank"><b>Holberton School</a></i></b>
<br>
<i>©. Project developed by:<b> Francisco Ramírez </b><b>|&nbsp;<a href="https://github.com/FranRM15" target="_blank"> GitHub</a> <b>|</b>&nbsp;<a href="https://twitter.com/FranciscoR_15" target = "_blank" rel="nofollow"> Twitter</b></a></p>
