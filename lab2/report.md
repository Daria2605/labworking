Отчет по лабораторной работе № 2
по курсу "Фундаментальная информатика"
Студент группы М8О-108Б-23 Жгенти Дарья Никитична

Работа выполнена

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

Тема: Bash, linux, terminal
Цель работы: Опробовать команды, работа с архивами и удаленной машиной


Протокол: 

~~~

dariazh@DESKTOP-C26U56G:~/labworking$ whoami
dariazh
dariazh@DESKTOP-C26U56G:~/labworking$ ls
README.md  lab1
dariazh@DESKTOP-C26U56G:~/labworking$ ls ..
README.md  exmpl.txt  git-project  lab  labworking  python
dariazh@DESKTOP-C26U56G:~/labworking$ ls /
bin   dev  home  lib    lib64   media  opt   root  sbin  srv  tmp  var
boot  etc  init  lib32  libx32  mnt    proc  run   snap  sys  usr
dariazh@DESKTOP-C26U56G:~/labworking$ ls - la
ls: cannot access '-': No such file or directory
ls: cannot access 'la': No such file or directory
dariazh@DESKTOP-C26U56G:~/labworking$ ls -la
total 0
drwxr-xr-x 1 dariazh dariazh 4096 Sep 18 09:25 .
drwxr-x--- 1 dariazh dariazh 4096 Sep 16 16:42 ..
drwxr-xr-x 1 dariazh dariazh 4096 Sep 18 09:29 .git
-rw-r--r-- 1 dariazh dariazh   12 Sep 12 19:55 README.md
drwxr-xr-x 1 dariazh dariazh 4096 Sep 18 09:25 lab1
dariazh@DESKTOP-C26U56G:~/labworking$   cd lab
-bash: cd: lab: No such file or directory
dariazh@DESKTOP-C26U56G:~/labworking$ ls ..
README.md  exmpl.txt  git-project  lab  labworking  python
dariazh@DESKTOP-C26U56G:~/labworking$ cd git
-bash: cd: git: No such file or directory
dariazh@DESKTOP-C26U56G:~/labworking$ cd git-project
-bash: cd: git-project: No such file or directory
dariazh@DESKTOP-C26U56G:~/labworking$  cd
dariazh@DESKTOP-C26U56G:~$  ssh d_jgenti@185.5.249.140
The authenticity of host '185.5.249.140 (185.5.249.140)' can't be established.
ED25519 key fingerprint is SHA256:gMWpghci4jH+8KckY83J+zLNE4DrwfrDZorZZU2IRGI.
This key is not known by any other names
Are you sure you want to continue connecting (yes/no/[fingerprint])? y
Please type 'yes', 'no' or the fingerprint: yes
Warning: Permanently added '185.5.249.140' (ED25519) to the list of known hosts.
d_jgenti@185.5.249.140's password:
Permission denied, please try again.
d_jgenti@185.5.249.140's password:
Permission denied, please try again.
d_jgenti@185.5.249.140's password:
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.


The programs included with the Ubuntu system are free software;
the exact distribution terms for each program are described in the
individual files in /usr/share/doc/*/copyright.

Ubuntu comes with ABSOLUTELY NO WARRANTY, to the extent permitted by
applicable law.

d_jgenti@vds2476450:~$ who
v_romanov pts/0        2023-09-18 10:21 (178.176.72.6)
a_bolotin pts/1        2023-09-18 10:26 (85.143.224.13)
v_frolov pts/3        2023-09-18 10:21 (85.143.224.8)
m_vlasko pts/4        2023-09-18 10:19 (185.215.176.92)
a_ganyak pts/5        2023-09-18 10:20 (85.143.224.33)
m_yavmetdinov pts/6        2023-09-18 10:22 (85.143.224.27)
d_kuleshov pts/7        2023-09-18 10:22 (85.143.224.44)
t_grigoriev pts/8        2023-09-18 10:23 (85.143.224.26)
n_gavrilov pts/9        2023-09-18 10:23 (85.143.224.11)
d_jgenti pts/10       2023-09-18 10:24 (85.143.224.38)
d_nurgaliev pts/11       2023-09-18 10:24 (85.143.224.26)
n_stepanov pts/12       2023-09-18 10:24 (31.173.86.251)
a_popov  pts/13       2023-09-18 10:24 (185.215.176.92)
d_jgenti@vds2476450:~$ pwd
/home/d_jgenti
d_jgenti@vds2476450:~$ ls
d_jgenti@vds2476450:~$ cd
d_jgenti@vds2476450:~$ cp
cp: missing file operand
Try 'cp --help' for more information.
d_jgenti@vds2476450:~$ ssh-keygen
Generating public/private rsa key pair.
Enter file in which to save the key (/home/d_jgenti/.ssh/id_rsa): id_rsa
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Your identification has been saved in id_rsa
Your public key has been saved in id_rsa.pub
The key fingerprint is:
SHA256:VdpxBuh8aJ6TjSbvc1p9njKM3ZXhi7zOCI97ZuhsvRM d_jgenti@vds2476450
The key's randomart image is:
+---[RSA 3072]----+
|           .+.o  |
|          .+ +   |
|         oo..    |
|         .= .  . |
|        So *  . o|
|        . BE.. o.|
|         =o.B + +|
|        .o*O+B =.|
|        o*BB+++..|
+----[SHA256]-----+
d_jgenti@vds2476450:~$ ssh-copy-id d_jgenti@185.5.249.140
/usr/bin/ssh-copy-id: ERROR: No identities found
d_jgenti@vds2476450:~$ logout
Connection to 185.5.249.140 closed.















dariazh@DESKTOP-C26U56G:~$ ssh-keygen
Generating public/private rsa key pair.
Enter file in which to save the key (/home/dariazh/.ssh/id_rsa): id_rsa
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Your identification has been saved in id_rsa
Your public key has been saved in id_rsa.pub
The key fingerprint is:
SHA256:Ij118KA0s9qxHnkF4EDBb05O8jkSAl/PGZkxGRVaM5U dariazh@DESKTOP-C26U56G
The key's randomart image is:
+---[RSA 3072]----+
|   o+.OOXo..     |
|.   o+=O BE      |
| o . +*o. +      |
|  o o+O= o       |
|   .oXO.S        |
|    .o*=         |
|     ...         |
|                 |
|                 |
+----[SHA256]-----+
dariazh@DESKTOP-C26U56G:~$ ssh-copy-id d_jgenti@185.5.249.140
/usr/bin/ssh-copy-id: ERROR: No identities found
dariazh@DESKTOP-C26U56G:~$ ssh-keygen
Generating public/private rsa key pair.
Enter file in which to save the key (/home/dariazh/.ssh/id_rsa):
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Your identification has been saved in /home/dariazh/.ssh/id_rsa
Your public key has been saved in /home/dariazh/.ssh/id_rsa.pub
The key fingerprint is:
SHA256:c35Zr3vkRfVHLozyXrV0PqU0Fn96WCG3Ar+TQJim5Yo dariazh@DESKTOP-C26U56G
The key's randomart image is:
+---[RSA 3072]----+
|          o      |
|         = o ..oo|
|        = . ooo==|
|       . ....o*o%|
|      . S .o.o*@*|
|     E . +  .*=+=|
|          ..o..++|
|           ..  .o|
|              oo |
+----[SHA256]-----+
dariazh@DESKTOP-C26U56G:~$ ssh-copy-id d_jgenti@185.5.249.140
/usr/bin/ssh-copy-id: INFO: Source of key(s) to be installed: "/home/dariazh/.ssh/id_rsa.pub"
/usr/bin/ssh-copy-id: INFO: attempting to log in with the new key(s), to filter out any that are already installed
/usr/bin/ssh-copy-id: INFO: 1 key(s) remain to be installed -- if you are prompted now it is to install the new keys
d_jgenti@185.5.249.140's password:

Number of key(s) added: 1

Now try logging into the machine, with:   "ssh 'd_jgenti@185.5.249.140'"
and check to make sure that only the key(s) you wanted were added.

dariazh@DESKTOP-C26U56G:~$ ssh d_jgenti@185.5.249.140
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Mon Sep 18 10:24:05 2023 from 85.143.224.38
d_jgenti@vds2476450:~$
























dariazh@DESKTOP-C26U56G:~/labworking$ whoami
dariazh
dariazh@DESKTOP-C26U56G:~/labworking$ ls
README.md  lab1
dariazh@DESKTOP-C26U56G:~/labworking$ ls ..
README.md  exmpl.txt  git-project  lab  labworking  python
dariazh@DESKTOP-C26U56G:~/labworking$ ls /
bin   dev  home  lib    lib64   media  opt   root  sbin  srv  tmp  var
boot  etc  init  lib32  libx32  mnt    proc  run   snap  sys  usr
dariazh@DESKTOP-C26U56G:~/labworking$ ls - la
ls: cannot access '-': No such file or directory
ls: cannot access 'la': No such file or directory
dariazh@DESKTOP-C26U56G:~/labworking$ ls -la
total 0
drwxr-xr-x 1 dariazh dariazh 4096 Sep 18 09:25 .
drwxr-x--- 1 dariazh dariazh 4096 Sep 16 16:42 ..
drwxr-xr-x 1 dariazh dariazh 4096 Sep 18 09:29 .git
-rw-r--r-- 1 dariazh dariazh   12 Sep 12 19:55 README.md
drwxr-xr-x 1 dariazh dariazh 4096 Sep 18 09:25 lab1
dariazh@DESKTOP-C26U56G:~/labworking$   cd lab
-bash: cd: lab: No such file or directory
dariazh@DESKTOP-C26U56G:~/labworking$ ls ..
README.md  exmpl.txt  git-project  lab  labworking  python
dariazh@DESKTOP-C26U56G:~/labworking$ cd git
-bash: cd: git: No such file or directory
dariazh@DESKTOP-C26U56G:~/labworking$ cd git-project
-bash: cd: git-project: No such file or directory
dariazh@DESKTOP-C26U56G:~/labworking$  cd
dariazh@DESKTOP-C26U56G:~$  ssh d_jgenti@185.5.249.140
The authenticity of host '185.5.249.140 (185.5.249.140)' can't be established.
ED25519 key fingerprint is SHA256:gMWpghci4jH+8KckY83J+zLNE4DrwfrDZorZZU2IRGI.
This key is not known by any other names
Are you sure you want to continue connecting (yes/no/[fingerprint])? y
Please type 'yes', 'no' or the fingerprint: yes
Warning: Permanently added '185.5.249.140' (ED25519) to the list of known hosts.
d_jgenti@185.5.249.140's password:
Permission denied, please try again.
d_jgenti@185.5.249.140's password:
Permission denied, please try again.
d_jgenti@185.5.249.140's password:
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.


The programs included with the Ubuntu system are free software;
the exact distribution terms for each program are described in the
individual files in /usr/share/doc/*/copyright.

Ubuntu comes with ABSOLUTELY NO WARRANTY, to the extent permitted by
applicable law.

d_jgenti@vds2476450:~$ who
v_romanov pts/0        2023-09-18 10:21 (178.176.72.6)
a_bolotin pts/1        2023-09-18 10:26 (85.143.224.13)
v_frolov pts/3        2023-09-18 10:21 (85.143.224.8)
m_vlasko pts/4        2023-09-18 10:19 (185.215.176.92)
a_ganyak pts/5        2023-09-18 10:20 (85.143.224.33)
m_yavmetdinov pts/6        2023-09-18 10:22 (85.143.224.27)
d_kuleshov pts/7        2023-09-18 10:22 (85.143.224.44)
t_grigoriev pts/8        2023-09-18 10:23 (85.143.224.26)
n_gavrilov pts/9        2023-09-18 10:23 (85.143.224.11)
d_jgenti pts/10       2023-09-18 10:24 (85.143.224.38)
d_nurgaliev pts/11       2023-09-18 10:24 (85.143.224.26)
n_stepanov pts/12       2023-09-18 10:24 (31.173.86.251)
a_popov  pts/13       2023-09-18 10:24 (185.215.176.92)
d_jgenti@vds2476450:~$ pwd
/home/d_jgenti
d_jgenti@vds2476450:~$ ls
d_jgenti@vds2476450:~$ cd
d_jgenti@vds2476450:~$ cp
cp: missing file operand
Try 'cp --help' for more information.
d_jgenti@vds2476450:~$ ssh-keygen
Generating public/private rsa key pair.
Enter file in which to save the key (/home/d_jgenti/.ssh/id_rsa): id_rsa
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Your identification has been saved in id_rsa
Your public key has been saved in id_rsa.pub
The key fingerprint is:
SHA256:VdpxBuh8aJ6TjSbvc1p9njKM3ZXhi7zOCI97ZuhsvRM d_jgenti@vds2476450
The key's randomart image is:
+---[RSA 3072]----+
|           .+.o  |
|          .+ +   |
|         oo..    |
|         .= .  . |
|        So *  . o|
|        . BE.. o.|
|         =o.B + +|
|        .o*O+B =.|
|        o*BB+++..|
+----[SHA256]-----+
d_jgenti@vds2476450:~$ ssh-copy-id d_jgenti@185.5.249.140
/usr/bin/ssh-copy-id: ERROR: No identities found
d_jgenti@vds2476450:~$ logout
Connection to 185.5.249.140 closed.
dariazh@DESKTOP-C26U56G:~$ ssh-keygen
Generating public/private rsa key pair.
Enter file in which to save the key (/home/dariazh/.ssh/id_rsa): id_rsa
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Your identification has been saved in id_rsa
Your public key has been saved in id_rsa.pub
The key fingerprint is:
SHA256:Ij118KA0s9qxHnkF4EDBb05O8jkSAl/PGZkxGRVaM5U dariazh@DESKTOP-C26U56G
The key's randomart image is:
+---[RSA 3072]----+
|   o+.OOXo..     |
|.   o+=O BE      |
| o . +*o. +      |
|  o o+O= o       |
|   .oXO.S        |
|    .o*=         |
|     ...         |
|                 |
|                 |
+----[SHA256]-----+
dariazh@DESKTOP-C26U56G:~$ ssh-copy-id d_jgenti@185.5.249.140
/usr/bin/ssh-copy-id: ERROR: No identities found
dariazh@DESKTOP-C26U56G:~$ ssh-keygen
Generating public/private rsa key pair.
Enter file in which to save the key (/home/dariazh/.ssh/id_rsa):
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Your identification has been saved in /home/dariazh/.ssh/id_rsa
Your public key has been saved in /home/dariazh/.ssh/id_rsa.pub
The key fingerprint is:
SHA256:c35Zr3vkRfVHLozyXrV0PqU0Fn96WCG3Ar+TQJim5Yo dariazh@DESKTOP-C26U56G
The key's randomart image is:
+---[RSA 3072]----+
|          o      |
|         = o ..oo|
|        = . ooo==|
|       . ....o*o%|
|      . S .o.o*@*|
|     E . +  .*=+=|
|          ..o..++|
|           ..  .o|
|              oo |
+----[SHA256]-----+
dariazh@DESKTOP-C26U56G:~$ ssh-copy-id d_jgenti@185.5.249.140
/usr/bin/ssh-copy-id: INFO: Source of key(s) to be installed: "/home/dariazh/.ssh/id_rsa.pub"
/usr/bin/ssh-copy-id: INFO: attempting to log in with the new key(s), to filter out any that are already installed
/usr/bin/ssh-copy-id: INFO: 1 key(s) remain to be installed -- if you are prompted now it is to install the new keys
d_jgenti@185.5.249.140's password:

Number of key(s) added: 1

Now try logging into the machine, with:   "ssh 'd_jgenti@185.5.249.140'"
and check to make sure that only the key(s) you wanted were added.

dariazh@DESKTOP-C26U56G:~$ ssh d_jgenti@185.5.249.140
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Mon Sep 18 10:24:05 2023 from 85.143.224.38






















dariazh@DESKTOP-C26U56G:~$ whoami
dariazh
dariazh@DESKTOP-C26U56G:~$ pwd
/home/dariazh
dariazh@DESKTOP-C26U56G:~$ ls
README.md  exmpl.txt  git-project  id_rsa  id_rsa.pub  lab  labworking  python  tmp
dariazh@DESKTOP-C26U56G:~$ who
dariazh@DESKTOP-C26U56G:~$ cd
dariazh@DESKTOP-C26U56G:~$ cp
cp: missing file operand
Try 'cp --help' for more information.
dariazh@DESKTOP-C26U56G:~$ touch test
dariazh@DESKTOP-C26U56G:~$ ls
README.md  exmpl.txt  git-project  id_rsa  id_rsa.pub  lab  labworking  python  test  tmp
dariazh@DESKTOP-C26U56G:~$ nano test
dariazh@DESKTOP-C26U56G:~$ tail test
1234567

dariazh@DESKTOP-C26U56G:~$ cp test
cp: missing destination file operand after 'test'
Try 'cp --help' for more information.
dariazh@DESKTOP-C26U56G:~$ cp --help
Usage: cp [OPTION]... [-T] SOURCE DEST
  or:  cp [OPTION]... SOURCE... DIRECTORY
  or:  cp [OPTION]... -t DIRECTORY SOURCE...
Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.

Mandatory arguments to long options are mandatory for short options too.
  -a, --archive                same as -dR --preserve=all
      --attributes-only        don't copy the file data, just the attributes
      --backup[=CONTROL]       make a backup of each existing destination file
  -b                           like --backup but does not accept an argument
      --copy-contents          copy contents of special files when recursive
  -d                           same as --no-dereference --preserve=links
  -f, --force                  if an existing destination file cannot be
                                 opened, remove it and try again (this option
                                 is ignored when the -n option is also used)
  -i, --interactive            prompt before overwrite (overrides a previous -n
                                  option)
  -H                           follow command-line symbolic links in SOURCE
  -l, --link                   hard link files instead of copying
  -L, --dereference            always follow symbolic links in SOURCE
  -n, --no-clobber             do not overwrite an existing file (overrides
                                 a previous -i option)
  -P, --no-dereference         never follow symbolic links in SOURCE
  -p                           same as --preserve=mode,ownership,timestamps
      --preserve[=ATTR_LIST]   preserve the specified attributes (default:
                                 mode,ownership,timestamps), if possible
                                 additional attributes: context, links, xattr,
                                 all
      --no-preserve=ATTR_LIST  don't preserve the specified attributes
      --parents                use full source file name under DIRECTORY
  -R, -r, --recursive          copy directories recursively
      --reflink[=WHEN]         control clone/CoW copies. See below
      --remove-destination     remove each existing destination file before
                                 attempting to open it (contrast with --force)
      --sparse=WHEN            control creation of sparse files. See below
      --strip-trailing-slashes  remove any trailing slashes from each SOURCE
                                 argument
  -s, --symbolic-link          make symbolic links instead of copying
  -S, --suffix=SUFFIX          override the usual backup suffix
  -t, --target-directory=DIRECTORY  copy all SOURCE arguments into DIRECTORY
  -T, --no-target-directory    treat DEST as a normal file
  -u, --update                 copy only when the SOURCE file is newer
                                 than the destination file or when the
                                 destination file is missing
  -v, --verbose                explain what is being done
  -x, --one-file-system        stay on this file system
  -Z                           set SELinux security context of destination
                                 file to default type
      --context[=CTX]          like -Z, or if CTX is specified then set the
                                 SELinux or SMACK security context to CTX
      --help     display this help and exit
      --version  output version information and exit

By default, sparse SOURCE files are detected by a crude heuristic and the
corresponding DEST file is made sparse as well.  That is the behavior
selected by --sparse=auto.  Specify --sparse=always to create a sparse DEST
file whenever the SOURCE file contains a long enough sequence of zero bytes.
Use --sparse=never to inhibit creation of sparse files.

When --reflink[=always] is specified, perform a lightweight copy, where the
data blocks are copied only when modified.  If this is not possible the copy
fails, or if --reflink=auto is specified, fall back to a standard copy.
Use --reflink=never to ensure a standard copy is performed.

The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.
The version control method may be selected via the --backup option or through
the VERSION_CONTROL environment variable.  Here are the values:

  none, off       never make backups (even if --backup is given)
  numbered, t     make numbered backups
  existing, nil   numbered if numbered backups exist, simple otherwise
  simple, never   always make simple backups

As a special case, cp makes a backup of SOURCE when the force and backup
options are given and SOURCE and DEST are the same name for an existing,
regular file.

GNU coreutils online help: <https://www.gnu.org/software/coreutils/>
Report any translation bugs to <https://translationproject.org/team/>
Full documentation <https://www.gnu.org/software/coreutils/cp>
or available locally via: info '(coreutils) cp invocation'
dariazh@DESKTOP-C26U56G:~$ cp --copy-contests
cp: unrecognized option '--copy-contests'
Try 'cp --help' for more information.
dariazh@DESKTOP-C26U56G:~$ cp --copy-contents test
cp: missing destination file operand after 'test'
Try 'cp --help' for more information.
dariazh@DESKTOP-C26U56G:~$ touch g.txt
dariazh@DESKTOP-C26U56G:~$ cp --copy-contents test -g.txt
cp: invalid option -- 'g'
Try 'cp --help' for more information.
dariazh@DESKTOP-C26U56G:~$ cp--help
cp--help: command not found
dariazh@DESKTOP-C26U56G:~$ cp --help
Usage: cp [OPTION]... [-T] SOURCE DEST
  or:  cp [OPTION]... SOURCE... DIRECTORY
  or:  cp [OPTION]... -t DIRECTORY SOURCE...
Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.

Mandatory arguments to long options are mandatory for short options too.
  -a, --archive                same as -dR --preserve=all
      --attributes-only        don't copy the file data, just the attributes
      --backup[=CONTROL]       make a backup of each existing destination file
  -b                           like --backup but does not accept an argument
      --copy-contents          copy contents of special files when recursive
  -d                           same as --no-dereference --preserve=links
  -f, --force                  if an existing destination file cannot be
                                 opened, remove it and try again (this option
                                 is ignored when the -n option is also used)
  -i, --interactive            prompt before overwrite (overrides a previous -n
                                  option)
  -H                           follow command-line symbolic links in SOURCE
  -l, --link                   hard link files instead of copying
  -L, --dereference            always follow symbolic links in SOURCE
  -n, --no-clobber             do not overwrite an existing file (overrides
                                 a previous -i option)
  -P, --no-dereference         never follow symbolic links in SOURCE
  -p                           same as --preserve=mode,ownership,timestamps
      --preserve[=ATTR_LIST]   preserve the specified attributes (default:
                                 mode,ownership,timestamps), if possible
                                 additional attributes: context, links, xattr,
                                 all
      --no-preserve=ATTR_LIST  don't preserve the specified attributes
      --parents                use full source file name under DIRECTORY
  -R, -r, --recursive          copy directories recursively
      --reflink[=WHEN]         control clone/CoW copies. See below
      --remove-destination     remove each existing destination file before
                                 attempting to open it (contrast with --force)
      --sparse=WHEN            control creation of sparse files. See below
      --strip-trailing-slashes  remove any trailing slashes from each SOURCE
                                 argument
  -s, --symbolic-link          make symbolic links instead of copying
  -S, --suffix=SUFFIX          override the usual backup suffix
  -t, --target-directory=DIRECTORY  copy all SOURCE arguments into DIRECTORY
  -T, --no-target-directory    treat DEST as a normal file
  -u, --update                 copy only when the SOURCE file is newer
                                 than the destination file or when the
                                 destination file is missing
  -v, --verbose                explain what is being done
  -x, --one-file-system        stay on this file system
  -Z                           set SELinux security context of destination
                                 file to default type
      --context[=CTX]          like -Z, or if CTX is specified then set the
                                 SELinux or SMACK security context to CTX
      --help     display this help and exit
      --version  output version information and exit

By default, sparse SOURCE files are detected by a crude heuristic and the
corresponding DEST file is made sparse as well.  That is the behavior
selected by --sparse=auto.  Specify --sparse=always to create a sparse DEST
file whenever the SOURCE file contains a long enough sequence of zero bytes.
Use --sparse=never to inhibit creation of sparse files.

When --reflink[=always] is specified, perform a lightweight copy, where the
data blocks are copied only when modified.  If this is not possible the copy
fails, or if --reflink=auto is specified, fall back to a standard copy.
Use --reflink=never to ensure a standard copy is performed.

The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.
The version control method may be selected via the --backup option or through
the VERSION_CONTROL environment variable.  Here are the values:

  none, off       never make backups (even if --backup is given)
  numbered, t     make numbered backups
  existing, nil   numbered if numbered backups exist, simple otherwise
  simple, never   always make simple backups

As a special case, cp makes a backup of SOURCE when the force and backup
options are given and SOURCE and DEST are the same name for an existing,
regular file.

GNU coreutils online help: <https://www.gnu.org/software/coreutils/>
Report any translation bugs to <https://translationproject.org/team/>
Full documentation <https://www.gnu.org/software/coreutils/cp>
or available locally via: info '(coreutils) cp invocation'
dariazh@DESKTOP-C26U56G:~$ cp -b test g.txt
dariazh@DESKTOP-C26U56G:~$ tail g.txt
1234567

dariazh@DESKTOP-C26U56G:~$ mv
mv: missing file operand
Try 'mv --help' for more information.
dariazh@DESKTOP-C26U56G:~$ mv --help
Usage: mv [OPTION]... [-T] SOURCE DEST
  or:  mv [OPTION]... SOURCE... DIRECTORY
  or:  mv [OPTION]... -t DIRECTORY SOURCE...
Rename SOURCE to DEST, or move SOURCE(s) to DIRECTORY.

Mandatory arguments to long options are mandatory for short options too.
      --backup[=CONTROL]       make a backup of each existing destination file
  -b                           like --backup but does not accept an argument
  -f, --force                  do not prompt before overwriting
  -i, --interactive            prompt before overwrite
  -n, --no-clobber             do not overwrite an existing file
If you specify more than one of -i, -f, -n, only the final one takes effect.
      --strip-trailing-slashes  remove any trailing slashes from each SOURCE
                                 argument
  -S, --suffix=SUFFIX          override the usual backup suffix
  -t, --target-directory=DIRECTORY  move all SOURCE arguments into DIRECTORY
  -T, --no-target-directory    treat DEST as a normal file
  -u, --update                 move only when the SOURCE file is newer
                                 than the destination file or when the
                                 destination file is missing
  -v, --verbose                explain what is being done
  -Z, --context                set SELinux security context of destination
                                 file to default type
      --help     display this help and exit
      --version  output version information and exit

The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.
The version control method may be selected via the --backup option or through
the VERSION_CONTROL environment variable.  Here are the values:

  none, off       never make backups (even if --backup is given)
  numbered, t     make numbered backups
  existing, nil   numbered if numbered backups exist, simple otherwise
  simple, never   always make simple backups

GNU coreutils online help: <https://www.gnu.org/software/coreutils/>
Report any translation bugs to <https://translationproject.org/team/>
Full documentation <https://www.gnu.org/software/coreutils/mv>
or available locally via: info '(coreutils) mv invocation'
dariazh@DESKTOP-C26U56G:~$ rm g.txt
dariazh@DESKTOP-C26U56G:~$ ls
README.md  exmpl.txt  g.txt~  git-project  id_rsa  id_rsa.pub  lab  labworking  python  test  tmp
dariazh@DESKTOP-C26U56G:~$ tsil g.txt~
Command 'tsil' not found, did you mean:
  command 'tail' from deb coreutils (8.32-4.1ubuntu1)
  command 'tsql' from deb freetds-bin (1.3.6-1)
Try: sudo apt install <deb name>
dariazh@DESKTOP-C26U56G:~$ tail g.txt~
dariazh@DESKTOP-C26U56G:~$ ls
README.md  exmpl.txt  g.txt~  git-project  id_rsa  id_rsa.pub  lab  labworking  python  test  tmp
dariazh@DESKTOP-C26U56G:~$ rm g.txt~
dariazh@DESKTOP-C26U56G:~$ ls
README.md  exmpl.txt  git-project  id_rsa  id_rsa.pub  lab  labworking  python  test  tmp
dariazh@DESKTOP-C26U56G:~$ head --help
Usage: head [OPTION]... [FILE]...
Print the first 10 lines of each FILE to standard output.
With more than one FILE, precede each with a header giving the file name.

With no FILE, or when FILE is -, read standard input.

Mandatory arguments to long options are mandatory for short options too.
  -c, --bytes=[-]NUM       print the first NUM bytes of each file;
                             with the leading '-', print all but the last
                             NUM bytes of each file
  -n, --lines=[-]NUM       print the first NUM lines instead of the first 10;
                             with the leading '-', print all but the last
                             NUM lines of each file
  -q, --quiet, --silent    never print headers giving file names
  -v, --verbose            always print headers giving file names
  -z, --zero-terminated    line delimiter is NUL, not newline
      --help     display this help and exit
      --version  output version information and exit

NUM may have a multiplier suffix:
b 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,
GB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y.
Binary prefixes can be used, too: KiB=K, MiB=M, and so on.

GNU coreutils online help: <https://www.gnu.org/software/coreutils/>
Report any translation bugs to <https://translationproject.org/team/>
Full documentation <https://www.gnu.org/software/coreutils/head>
or available locally via: info '(coreutils) head invocation'
dariazh@DESKTOP-C26U56G:~$ head -n2 test
1234567

dariazh@DESKTOP-C26U56G:~$ nano test
dariazh@DESKTOP-C26U56G:~$ grep dzh teat
grep: teat: No such file or directory
dariazh@DESKTOP-C26U56G:~$ grep dzh test
dzh
dariazh@DESKTOP-C26U56G:~$ history
    1  vi .bashrc
    2  sudo apt-get install git
    3  mkdir lab
    4  cd lab
    5  mkdir lab1
    6  cd lab1/
    7  git init
    8  exit
    9  cd lab/lab1
   10  cd lab/lab1/
   11  git add *.c
   12  hostname
   13  whoami
   14  tree -d / |less
   15  pwd
   16  ls
   17  ls/lab
   18  hostname
   19  ls -l
   20  date +"%y-%m-%d, %A"
   21  man
   22  man grep
   23  man atoi
   24  man chdir
   25  man man
   26  git init
   27  git status
   28  git add .
   29  git commit -m "first commit"
   30  cd C:/Users/user/my_project
   31  git init
   32  git status
   33  echo
   34  echo "#po" >> README.md
   35  echo "#labworking" >> README.md
   36  git init
   37  git add README.md
   38  git commit -m "first commit"
   39  git clone https://github.com/Daria2605/labworking
   40  ls
   41  cd io1
   42  cat > exmpl.txt
   43  git status\
   44  git add *
   45  git config --global user.name "Daria2605"
   46  mkdir git-project
   47  cd git-project
   48  git init
   49  ls -al
   50  ls -l .git/
   51  git add .
   52  git commit -m 'first commit'
   53  git config --global user.name "Daria2605"
   54  git commit -m 'first commit'
   55  git remote add origin https://github.com/Daria2605/labworking.git
   56  git branch
   57  git branch -M main
   58  git push -u origin pd
   59  git push -u origin labworking
   60  git remote set-url origin https://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@github.com/aer/io1.git
   61  git push -u origin main
   62  mkdir python
   63  git status
   64  ls
   65  cd labworking
   66  git checkout -b for_labs
   67  git add .
   68  git commit -m "first lab"
   69  ls
   70  mkdir lab1
   71  ls
   72  cd lab1
   73  cat > report.md
   74  ls
   75  cd ../
   76  ls
   77  git add *
   78  git commit -m "dh"
   79  git push
   80  git push --set-upstream origin for_labs
   81  git remote set-url https://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@github.com/Daria2605/labworking.git
   82  git remote set-url origin https://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@github.com/Daria2605/labworking.git
   83  git push --set-upstream origin for_labs
   84  whoami
   85  ls
   86  clear
   87  whoami
   88  ls
   89  ls ..
   90  ls /
   91  ls - la
   92  ls -la
   93  ls ..
   94  cd git
   95  cd git-project
   96  ssh-keygen
   97  ssh-copy-id d_jgenti@185.5.249.140
   98  ssh-keygen
   99  ssh-copy-id d_jgenti@185.5.249.140
  100  ssh d_jgenti@185.5.249.140
  101  whoami
  102  pwd
  103  ls
  104  cd
  105  mkdir tmp
  106  ~ cd tmp
  107  cd labworking
  108  cd
  109  tmp mkdir tmp2
  110  whoami
  111  pwd
  112  ls
  113  who
  114  cd
  115  cp
  116  touch test
  117  ls
  118  nano test
  119  tail test
  120  cp test
  121  cp --help
  122  cp --copy-contests
  123  cp --copy-contents test
  124  touch g.txt
  125  cp --copy-contents test -g.txt
  126  cp--help
  127  cp --help
  128  cp -b test g.txt
  129  tail g.txt
  130  mv
  131  mv --help
  132  rm g.txt
  133  ls
  134  tsil g.txt~
  135  tail g.txt~
  136  ls
  137  rm g.txt~
  138  ls
  139  head --help
  140  head -n2 test
  141  nano test
  142  grep dzh teat
  143  grep dzh test
  144  history
dariazh@DESKTOP-C26U56G:~$ history | grep ls
   16  ls
   17  ls/lab
   19  ls -l
   40  ls
   49  ls -al
   50  ls -l .git/
   64  ls
   69  ls
   71  ls
   74  ls
   76  ls
   85  ls
   88  ls
   89  ls ..
   90  ls /
   91  ls - la
   92  ls -la
   93  ls ..
  103  ls
  112  ls
  117  ls
  133  ls
  136  ls
  138  ls
  145  history | grep ls
dariazh@DESKTOP-C26U56G:~$ mkdir g
dariazh@DESKTOP-C26U56G:~$ rmdir g
dariazh@DESKTOP-C26U56G:~$ ls
README.md  exmpl.txt  git-project  id_rsa  id_rsa.pub  lab  labworking  python  test  tmp
dariazh@DESKTOP-C26U56G:~$ sudo ls -l
[sudo] password for dariazh:
total 4
-rw-r--r-- 1 dariazh dariazh   16 Sep 12 19:53 README.md
-rw-r--r-- 1 dariazh dariazh    0 Sep 12 19:57 exmpl.txt
drwxr-xr-x 1 dariazh dariazh 4096 Sep 12 20:10 git-project
-rw------- 1 dariazh dariazh 2655 Sep 18 10:34 id_rsa
-rw-r--r-- 1 dariazh dariazh  577 Sep 18 10:34 id_rsa.pub
drwxr-xr-x 1 dariazh dariazh 4096 Sep 12 19:37 lab
drwxr-xr-x 1 dariazh dariazh 4096 Sep 18 09:25 labworking
drwxr-xr-x 1 dariazh dariazh 4096 Sep 16 16:42 python
-rw-r--r-- 1 dariazh dariazh   16 Sep 18 11:38 test
drwxr-xr-x 1 dariazh dariazh 4096 Sep 18 11:24 tmp
dariazh@DESKTOP-C26U56G:~$ echo 234
234
dariazh@DESKTOP-C26U56G:~$ echo org
org







dariazh@DESKTOP-C26U56G:~$ ls
README.md  exmpl.txt  git-project  id_rsa  id_rsa.pub  lab  labworking  python  test  tmp
dariazh@DESKTOP-C26U56G:~$ sudo ls -l
[sudo] password for dariazh:
total 4
-rw-r--r-- 1 dariazh dariazh   16 Sep 12 19:53 README.md
-rw-r--r-- 1 dariazh dariazh    0 Sep 12 19:57 exmpl.txt
drwxr-xr-x 1 dariazh dariazh 4096 Sep 12 20:10 git-project
-rw------- 1 dariazh dariazh 2655 Sep 18 10:34 id_rsa
-rw-r--r-- 1 dariazh dariazh  577 Sep 18 10:34 id_rsa.pub
drwxr-xr-x 1 dariazh dariazh 4096 Sep 12 19:37 lab
drwxr-xr-x 1 dariazh dariazh 4096 Sep 18 09:25 labworking
drwxr-xr-x 1 dariazh dariazh 4096 Sep 16 16:42 python
-rw-r--r-- 1 dariazh dariazh   16 Sep 18 11:38 test
drwxr-xr-x 1 dariazh dariazh 4096 Sep 18 11:24 tmp
dariazh@DESKTOP-C26U56G:~$ echo 234
234
dariazh@DESKTOP-C26U56G:~$ echo org
org
dariazh@DESKTOP-C26U56G:~$ touch listing
dariazh@DESKTOP-C26U56G:~$ rm listing
dariazh@DESKTOP-C26U56G:~$ touch listing.md
dariazh@DESKTOP-C26U56G:~$ nano listing.md
dariazh@DESKTOP-C26U56G:~$ nano listing.md
dariazh@DESKTOP-C26U56G:~$ nano listing.md
dariazh@DESKTOP-C26U56G:~$ tar -c listing.md -f listing_arch.tar.gz -z
dariazh@DESKTOP-C26U56G:~$ ls
README.md  git-project  id_rsa.pub  labworking  listing_arch.tar.gz  test
exmpl.txt  id_rsa       lab         listing.md  python               tmp
dariazh@DESKTOP-C26U56G:~$ ssh
ssh              ssh-add.exe      ssh-agent.exe    ssh-copy-id      ssh-keygen.exe   ssh-keyscan.exe
ssh-add          ssh-agent        ssh-argv0        ssh-keygen       ssh-keyscan      ssh.exe
dariazh@DESKTOP-C26U56G:~$ ssh d_jgenti@185.5.249.140
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Mon Sep 18 10:36:30 2023 from 85.143.224.38
d_jgenti@vds2476450:~$ exit
logout
Connection to 185.5.249.140 closed.
dariazh@DESKTOP-C26U56G:~$ scp listing_arch.tar.gz d_jgenti@185.5.249.140:/home/d_jgenti
ssh: connect to host 185.5.249.140 port 22: Resource temporarily unavailable
lost connection
dariazh@DESKTOP-C26U56G:~$ scp listing_arch.tar.gz d_jgenti@185.5.249.140:/home/d_jgenti
listing_arch.tar.gz                                                         100% 5294   406.9KB/s   00:00
dariazh@DESKTOP-C26U56G:~$ ssh d_jgenti@185.5.249.140
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Mon Sep 18 11:55:46 2023 from 85.143.224.38
d_jgenti@vds2476450:~$ mkdir p
d_jgenti@vds2476450:~$ ls
id_rsa  id_rsa.pub  listing_arch.tar.gz  p
d_jgenti@vds2476450:~$ tar -x -z -f listing_arch.tar.gz -C p
d_jgenti@vds2476450:~$ ls
id_rsa  id_rsa.pub  listing_arch.tar.gz  p
d_jgenti@vds2476450:~$ logout
Connection to 185.5.249.140 closed.
dariazh@DESKTOP-C26U56G:~$ ls
README.md  git-project  id_rsa.pub  labworking  listing_arch.tar.gz  test
exmpl.txt  id_rsa       lab         listing.md  python               tmp
dariazh@DESKTOP-C26U56G:~$ mkdir pap
dariazh@DESKTOP-C26U56G:~$ cd pap
dariazh@DESKTOP-C26U56G:~/pap$ scp listing.md
usage: scp [-346ABCOpqRrsTv] [-c cipher] [-D sftp_server_path] [-F ssh_config]
           [-i identity_file] [-J destination] [-l limit]
           [-o ssh_option] [-P port] [-S program] source ... target
dariazh@DESKTOP-C26U56G:~/pap$ scp listing.md d_jgenti@185.5.249.140:/home/d_jgenti/pap
listing.md: No such file or directory
dariazh@DESKTOP-C26U56G:~/pap$ scp d_jgenti@185.5.249.140:/home/d_jgenti/pap listing.md
scp: /home/d_jgenti/pap: No such file or directory
dariazh@DESKTOP-C26U56G:~/pap$ scp d_jgenti@185.5.249.140:/home/d_jgenti/pap/listing.md listing.md
scp: /home/d_jgenti/pap/listing.md: No such file or directory
dariazh@DESKTOP-C26U56G:~/pap$ ssh d_jgenti@185.5.249.140
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Mon Sep 18 11:58:14 2023 from 85.143.224.38
d_jgenti@vds2476450:~$ ls
id_rsa  id_rsa.pub  listing_arch.tar.gz  p
d_jgenti@vds2476450:~$ cd p
d_jgenti@vds2476450:~/p$ ls
listing.md
d_jgenti@vds2476450:~/p$ exit
logout
Connection to 185.5.249.140 closed.
dariazh@DESKTOP-C26U56G:~/pap$ scp d_jgenti@185.5.249.140:/home/d_jgenti/p/listing.md listing.md
listing.md                                                                  100%   22KB 844.0KB/s   00:00
dariazh@DESKTOP-C26U56G:~/pap$ git init
hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint:
hint:   git config --global init.defaultBranch <name>
hint:
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint:
hint:   git branch -m <name>
Initialized empty Git repository in /home/dariazh/pap/.git/
dariazh@DESKTOP-C26U56G:~/pap$ git add listing.md
dariazh@DESKTOP-C26U56G:~/pap$ git commit -m "add listing"
[master (root-commit) caa65c2] add listing
 Committer: Daria2605 <dariazh@DESKTOP-C26U56G.localdomain>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly:

    git config --global user.name "Your Name"
    git config --global user.email you@example.com

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 1 file changed, 557 insertions(+)
 create mode 100644 listing.md
dariazh@DESKTOP-C26U56G:~/pap$ git branch -M mylab2
dariazh@DESKTOP-C26U56G:~/pap$ ls
listing.md
dariazh@DESKTOP-C26U56G:~/pap$ cd
dariazh@DESKTOP-C26U56G:~$ cd labworking
dariazh@DESKTOP-C26U56G:~/labworking$ git branch -M mylab2
dariazh@DESKTOP-C26U56G:~/labworking$ git push -u origin mylab2
Password for 'https://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@github.com':
remote: Permission to Daria2605/labworking.git denied to Daria2605.
fatal: unable to access 'https://github.com/Daria2605/labworking.git/': The requested URL returned error: 403
dariazh@DESKTOP-C26U56G:~/labworking$ git push -u origin mylab2
Password for 'https://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@github.com':
remote: Permission to Daria2605/labworking.git denied to Daria2605.
fatal: unable to access 'https://github.com/Daria2605/labworking.git/': The requested URL returned error: 403
dariazh@DESKTOP-C26U56G:~/labworking$ git push -u origin mylab2
Password for 'https://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@github.com':
remote: Invalid username or password.
fatal: Authentication failed for 'https://github.com/Daria2605/labworking.git/'
dariazh@DESKTOP-C26U56G:~/labworking$ git push -u origin mylab2
Password for 'https://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@github.com':
remote: Invalid username or password.
fatal: Authentication failed for 'https://github.com/Daria2605/labworking.git/'
dariazh@DESKTOP-C26U56G:~/labworking$ git checkout -b
error: switch `b' requires a value
dariazh@DESKTOP-C26U56G:~/labworking$ git checkout -b
dariazh@DESKTOP-C26U56G:~$ git status
On branch master

No commits yet

Changes to be committed:
  (use "git rm --cached <file>..." to unstage)
        new file:   README.md

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        .bash_history
        .bash_logout
        .bashrc
        .gitconfig
        .lesshst
        .motd_shown
        .profile
        .ssh/
        .sudo_as_admin_successful
        .viminfo
        exmpl.txt
        git-project/
        id_rsa
        id_rsa.pub
        lab/
        labworking/
        listing.md
        listing_arch.tar.gz
        pap/
        test

dariazh@DESKTOP-C26U56G:~$ ls
README.md  git-project  id_rsa.pub  labworking  listing_arch.tar.gz  python  tmp
exmpl.txt  id_rsa       lab         listing.md  pap                  test
dariazh@DESKTOP-C26U56G:~$ cd labworking/
dariazh@DESKTOP-C26U56G:~/labworking$ mkdir lab2
dariazh@DESKTOP-C26U56G:~/labworking$ cat > report.md
none
dariazh@DESKTOP-C26U56G:~/labworking$ ls
Lab_1  README.md  lab1  lab2  lab_1  report.md
dariazh@DESKTOP-C26U56G:~/labworking$ git checkout -b "LAB_2"
Switched to a new branch 'LAB_2'
dariazh@DESKTOP-C26U56G:~/labworking$ git branch -m main
fatal: A branch named 'main' already exists.
dariazh@DESKTOP-C26U56G:~/labworking$ git branch origin main
dariazh@DESKTOP-C26U56G:~/labworking$ git status
On branch LAB_2
Untracked files:
  (use "git add <file>..." to include in what will be committed)
        report.md

nothing added to commit but untracked files present (use "git add" to track)
dariazh@DESKTOP-C26U56G:~/labworking$ git checkout main
\Switched to branch 'main'
Your branch is ahead of 'origin/main' by 3 commits.
  (use "git push" to publish your local commits)
dariazh@DESKTOP-C26U56G:~/labworking$ rmdir lab2
dariazh@DESKTOP-C26U56G:~/labworking$ ls
Lab_1  README.md  lab1  lab_1  report.md
dariazh@DESKTOP-C26U56G:~/labworking$ git checkout LAB_2
Switched to branch 'LAB_2'
dariazh@DESKTOP-C26U56G:~/labworking$ mkdir lab2
dariazh@DESKTOP-C26U56G:~/labworking$ cat > report.md
none
dariazh@DESKTOP-C26U56G:~/labworking$ ls
Lab_1  README.md  lab1  lab2  lab_1  report.md
dariazh@DESKTOP-C26U56G:~/labworking$ whoami
dariazh
dariazh@DESKTOP-C26U56G:~/labworking$ ls
Lab_1  README.md  lab1  lab2  lab_1  report.md
dariazh@DESKTOP-C26U56G:~/labworking$ ls ..
README.md  git-project  id_rsa.pub  labworking  listing_arch.tar.gz  python  tmp
exmpl.txt  id_rsa       lab         listing.md  pap                  test
dariazh@DESKTOP-C26U56G:~/labworking$ ls /
bin   dev  home  lib    lib64   media  opt   root  sbin  srv  tmp  var
boot  etc  init  lib32  libx32  mnt    proc  run   snap  sys  usr
dariazh@DESKTOP-C26U56G:~/labworking$ git add .
dariazh@DESKTOP-C26U56G:~/labworking$ git status
On branch LAB_2
Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        new file:   report.md

dariazh@DESKTOP-C26U56G:~/labworking$ git commit -m "add"
[LAB_2 065095c] add
 Committer: Daria2605 <dariazh@DESKTOP-C26U56G.localdomain>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly:

    git config --global user.name "Your Name"
    git config --global user.email you@example.com

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 1 file changed, 1 insertion(+)
 create mode 100644 report.md
dariazh@DESKTOP-C26U56G:~/labworking$ git push -u origin LAB_2
Password for 'https://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@github.com':
remote: Invalid username or password.
fatal: Authentication failed for 'https://github.com/Daria2605/labworking.git/'
dariazh@DESKTOP-C26U56G:~/labworking$ git push -uf origin LAB_2
Password for 'https://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@github.com':
Enumerating objects: 14, done.
Counting objects: 100% (14/14), done.
Delta compression using up to 8 threads
Compressing objects: 100% (10/10), done.
Writing objects: 100% (14/14), 1.62 KiB | 553.00 KiB/s, done.
Total 14 (delta 2), reused 3 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (2/2), done.
remote:
remote: Create a pull request for 'LAB_2' on GitHub by visiting:
remote:      https://github.com/Daria2605/labworking/pull/new/LAB_2
remote:
To https://github.com/Daria2605/labworking.git
 * [new branch]      LAB_2 -> LAB_2
Branch 'LAB_2' set up to track remote branch 'LAB_2' from 'origin'.
dariazh@DESKTOP-C26U56G:~/labworking$ git checkout main
Switched to branch 'main'
Your branch is ahead of 'origin/main' by 3 commits.
  (use "git push" to publish your local commits)
dariazh@DESKTOP-C26U56G:~/labworking$ git merge LAB_2
Updating f198494..065095c
Fast-forward
 report.md | 1 +
 1 file changed, 1 insertion(+)
 create mode 100644 report.md
dariazh@DESKTOP-C26U56G:~/labworking$ git push -uf origin main
Password for 'https://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@github.com':
Total 0 (delta 0), reused 0 (delta 0), pack-reused 0
To https://github.com/Daria2605/labworking.git
 + dde9a85...065095c main -> main (forced update)
Branch 'main' set up to track remote branch 'main' from 'origin'.
dariazh@DESKTOP-C26U56G:~/labworking$ ls
Lab_1  README.md  lab1  lab2  lab_1  report.md

~~~

Выводы: На этой лабораторной работе я научилась прописывать новые команды, работать с удаленной машиной и работать с архивами. 
