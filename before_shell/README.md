<h1>Everything you need to know to start coding your own shell</h1>
<br>
<h1><i>PID & PPID</i></h1>
<p>A process is an instance of an executing program, that has a unique process ID. This process ID is used by many functions and system calls to interact with and manipulate processes. In order to retrieve the current process&rsquo; ID, you can use the system call&nbsp;<code>getpid</code> (man 2&nbsp;<code>getpid</code>): </p>
<p><br></p>

![image](https://user-images.githubusercontent.com/98773774/162596626-952df1c7-0fb0-4da8-9f01-7b369e404f8d.png)

<p>Note in the example above, that every time you run the program, a new process is created, and its ID is different.</p>
<p>Each process has a parent: the process that created it. It is possible to get the PID of a parent process by using the&nbsp;<code>getppid</code> system call (man 2&nbsp;<code>getppid</code>), from within the child process.</p>
<br>
<h2>Exercises</h2>
<h2>0. getppid</h2>
<p>Write a program that prints the PID of the parent process. Run your program several times within the same shell. It should be the same. Does&nbsp;<code>echo $$</code> print the same value? Why?</p>
<h2>1. /proc/sys/kernel/pid_max</h2>
<p>Write a shell script that prints the maximum value a process ID can be.</p>
<br>
<h1><i>Arguments</i></h1>
<p>The command line arguments are passed through the&nbsp;<code>main</code> function:&nbsp;<code>int main(int ac, char **av);</code></p>
<ul>
    <li><code>av</code> is a&nbsp;<code>NULL</code> terminated array of strings</li>
    <li><code>ac</code> is the number of items in&nbsp;<code>av</code></li>
</ul>
<p><code>av[0]</code> usually contains the name used to invoke the current program.&nbsp;<code>av[1]</code> is the first argument of the program,&nbsp;<code>av[2]</code> the second, and so on.</p>
<br>
<h2>Exercises</h2>
<h2>0. av</h2>
<p>Write a program that prints all the arguments, without using&nbsp;<code>ac</code>.&nbsp;</p>
<h2>1. Read line</h2>
<p>Write a program that prints&nbsp;<code>&quot;$ &quot;</code>, wait for the user to enter a command, prints it on the next line.</p>
<p>man 3&nbsp;<code>getline</code></p>
<p><strong>important</strong> make sure you read the man, and the RETURN VALUE section, in order to know when to stop reading Keyword: &ldquo;end-of-file&rdquo;, or&nbsp;<code>EOF</code> (or&nbsp;<code>Ctrl+D</code>).</p>
<pre><code>julien@ubuntu:~/c/shell$ gcc -Wall -Wextra -Werror -pedantic prompt.c -o prompt
julien@ubuntu:~/c/shell$ ./prompt 
$ cat prompt.c
cat prompt.c
julien@ubuntu:~/c/shell$ </code></pre>
<h2>2. command line to av</h2>
<p>Write a function that splits a string and returns an array of each word of the string.</p>
<p>man&nbsp;<code>strtok</code></p>
<br>
<h1><i>Executing a program</i></h1>
<p>The system call&nbsp;<code>execve</code> allows a process to execute another program (man 2&nbsp;<code>execve</code>). Note that this system call does load the new program into the current process&rsquo; memory in place of the &ldquo;previous&rdquo; program: on success&nbsp;<code>execve</code> does not return to continue the rest of the &ldquo;previous&rdquo; program.&nbsp;</p>

<p>cat <code>exec.c</code> :</p>

![image](https://user-images.githubusercontent.com/98773774/162597028-417ede9b-31ce-4122-823c-bd7a10f8d297.png)

<h1><i>Creating processes</i></h1>
<p>The system call&nbsp;<code>fork</code> (man 2&nbsp;<code>fork</code>) creates a new child process, almost identical to the parent (the process that calls&nbsp;<code>fork</code>). Once&nbsp;<code>fork</code> successfully returns, two processes continue to run the same program, but with different stacks, datas and heaps.&nbsp;</p>

<p>cat <code>fork.c</code> :</p>

![image](https://user-images.githubusercontent.com/98773774/162597103-0aa392bf-52db-44eb-895b-38e78e162aec.png)

<p><em>Note: there is no typo in the above example</em></p>
<p>Using the return value of&nbsp;<code>fork</code>, it is possible to know if the current process is the father or the child:&nbsp;<code>fork</code> will return&nbsp;<code>0</code> to the child, and the PID of the child to the father.</p>

