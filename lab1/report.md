# Отчет по лабораторной работе № 1
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Жгенти Дарья Никитична

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: GIT
2. **Цель работы**: научиться работать с GIT

3. **Протокол**:

```
dariazh@DESKTOP-C26U56G:~$ cd labworking/
dariazh@DESKTOP-C26U56G:~/labworking$ git checkout -b LAB_1
Switched to a new branch 'LAB_1'
dariazh@DESKTOP-C26U56G:~/labworking$ git add .
dariazh@DESKTOP-C26U56G:~/labworking$ git commit -m "Lab_1"
On branch LAB_1
nothing to commit, working tree clean
dariazh@DESKTOP-C26U56G:~/labworking$ ls
Lab_1  README.md  lab1  lab_1
dariazh@DESKTOP-C26U56G:~/labworking$ cd Lab_1
dariazh@DESKTOP-C26U56G:~/labworking/Lab_1$ ls
report.md
dariazh@DESKTOP-C26U56G:~/labworking/Lab_1$ cd ../
dariazh@DESKTOP-C26U56G:~/labworking$ ls
Lab_1  README.md  lab1  lab_1
dariazh@DESKTOP-C26U56G:~/labworking$ rm lab_1
rm: cannot remove 'lab_1': Is a directory
dariazh@DESKTOP-C26U56G:~/labworking$ git add .
dariazh@DESKTOP-C26U56G:~/labworking$ git commit -m "dh'
>
-bash: unexpected EOF while looking for matching `"'
-bash: syntax error: unexpected end of file
dariazh@DESKTOP-C26U56G:~/labworking$ git commit -m "dh"
On branch LAB_1
nothing to commit, working tree clean
dariazh@DESKTOP-C26U56G:~/labworking$ git push
fatal: The current branch LAB_1 has no upstream branch.
To push the current branch and set the remote as upstream, use

    git push --set-upstream origin LAB_1

dariazh@DESKTOP-C26U56G:~/labworking$ git push --set-upstream origin LAB_1
Password for 'https://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@github.com':
remote: Support for password authentication was removed on August 13, 2021.
remote: Please see https://docs.github.com/en/get-started/getting-started-with-git/about-remote-repositories#cloning-with-https-urls for information on currently recommended modes of authentication.
fatal: Authentication failed for 'https://github.com/Daria2605/labworking.git/'
dariazh@DESKTOP-C26U56G:~/labworking$ git push --set-upstream origin LAB_1
Password for 'https://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@github.com':
remote: Invalid username or password.
fatal: Authentication failed for 'https://github.com/Daria2605/labworking.git/'
dariazh@DESKTOP-C26U56G:~/labworking$ git push --set-upstream origin LAB_1
Password for 'https://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@github.com':
remote: Support for password authentication was removed on August 13, 2021.
remote: Please see https://docs.github.com/en/get-started/getting-started-with-git/about-remote-repositories#cloning-with-https-urls for information on currently recommended modes of authentication.
fatal: Authentication failed for 'https://github.com/Daria2605/labworking.git/'
dariazh@DESKTOP-C26U56G:~/labworking$ git remote set-url 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@github.com/Daria2605/labworking.git
usage: git remote set-url [--push] <name> <newurl> [<oldurl>]
   or: git remote set-url --add <name> <newurl>
   or: git remote set-url --delete <name> <url>

    --push                manipulate push URLs
    --add                 add URL
    --delete              delete URLs

dariazh@DESKTOP-C26U56G:~/labworking$ git push --set-upstream origin LAB_1
Password for 'https://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@github.com':
remote: Support for password authentication was removed on August 13, 2021.
remote: Please see https://docs.github.com/en/get-started/getting-started-with-git/about-remote-repositories#cloning-with-https-urls for information on currently recommended modes of authentication.
fatal: Authentication failed for 'https://github.com/Daria2605/labworking.git/'
dariazh@DESKTOP-C26U56G:~/labworking$ git remote set-url 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@github.com/Daria2605/labworking.git
usage: git remote set-url [--push] <name> <newurl> [<oldurl>]
   or: git remote set-url --add <name> <newurl>
   or: git remote set-url --delete <name> <url>

    --push                manipulate push URLs
    --add                 add URL
    --delete              delete URLs

dariazh@DESKTOP-C26U56G:~/labworking$ git remote set-url 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@github.com/Daria2605/labworking.git
usage: git remote set-url [--push] <name> <newurl> [<oldurl>]
   or: git remote set-url --add <name> <newurl>
   or: git remote set-url --delete <name> <url>

    --push                manipulate push URLs
    --add                 add URL
    --delete              delete URLs

dariazh@DESKTOP-C26U56G:~/labworking$ git remote set-url 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@github.com/Daria2605/labworking.git
usage: git remote set-url [--push] <name> <newurl> [<oldurl>]
   or: git remote set-url --add <name> <newurl>
   or: git remote set-url --delete <name> <url>

    --push                manipulate push URLs
    --add                 add URL
    --delete              delete URLs

dariazh@DESKTOP-C26U56G:~/labworking$ git remote set-url origin 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@github.com/Dari
a2605/labworking.git
dariazh@DESKTOP-C26U56G:~/labworking$ git push --set-upstream origin LAB_1
fatal: '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@github.com/Daria2605/labworking.git' does not appear to be a git repository
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
dariazh@DESKTOP-C26U56G:~/labworking$ git remote set-url origin https://github.com/Daria2605/labworking
dariazh@DESKTOP-C26U56G:~/labworking$ git push --set-upstream origin LAB_1
Username for 'https://github.com': Daria2605
Password for 'https://Daria2605@github.com':
remote: Support for password authentication was removed on August 13, 2021.
remote: Please see https://docs.github.com/en/get-started/getting-started-with-git/about-remote-repositories#cloning-with-https-urls for information on currently recommended modes of authentication.
fatal: Authentication failed for 'https://github.com/Daria2605/labworking/'
dariazh@DESKTOP-C26U56G:~/labworking$ git push --set-upstream origin LAB_1
Username for 'https://github.com': zhgentid00@mail.ru
Password for 'https://zhgentid00@mail.ru@github.com':
remote: Support for password authentication was removed on August 13, 2021.
remote: Please see https://docs.github.com/en/get-started/getting-started-with-git/about-remote-repositories#cloning-with-https-urls for information on currently recommended modes of authentication.
fatal: Authentication failed for 'https://github.com/Daria2605/labworking/'
dariazh@DESKTOP-C26U56G:~/labworking$ git merge main
Already up to date.
dariazh@DESKTOP-C26U56G:~/labworking$ git add -A
dariazh@DESKTOP-C26U56G:~/labworking$ git commit -m "ZH"
On branch LAB_1
nothing to commit, working tree clean
dariazh@DESKTOP-C26U56G:~/labworking$ git push origin Lab_1
error: src refspec Lab_1 does not match any
error: failed to push some refs to 'https://github.com/Daria2605/labworking'
dariazh@DESKTOP-C26U56G:~/labworking$ git push origin LAB_!
error: src refspec LAB_! does not match any
error: failed to push some refs to 'https://github.com/Daria2605/labworking'
dariazh@DESKTOP-C26U56G:~/labworking$ git push origin LAB_1
Username for 'https://github.com': Daria2605
Password for 'https://Daria2605@github.com':
remote: Support for password authentication was removed on August 13, 2021.
remote: Please see https://docs.github.com/en/get-started/getting-started-with-git/about-remote-repositories#cloning-with-https-urls for information on currently recommended modes of authentication.
fatal: Authentication failed for 'https://github.com/Daria2605/labworking/'
dariazh@DESKTOP-C26U56G:~/labworking$ git remote set-url origin https://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@github.com/Daria2605/labworking.git
dariazh@DESKTOP-C26U56G:~/labworking$ git push --set-upstream origin LAB_1
Enumerating objects: 12, done.
Counting objects: 100% (12/12), done.
Delta compression using up to 8 threads
Compressing objects: 100% (8/8), done.
Writing objects: 100% (12/12), 1.41 KiB | 723.00 KiB/s, done.
Total 12 (delta 1), reused 3 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), done.
remote:
remote: Create a pull request for 'LAB_1' on GitHub by visiting:
remote:      https://github.com/Daria2605/labworking/pull/new/LAB_1
remote:
To https://github.com/Daria2605/labworking.git
 * [new branch]      LAB_1 -> LAB_1
Branch 'LAB_1' set up to track remote branch 'LAB_1' from 'origin'.
dariazh@DESKTOP-C26U56G:~/labworking$ git merge main
Already up to date.
dariazh@DESKTOP-C26U56G:~/labworking$

```

8. **Выводы**: Потратив время на разработку решения, я научилась базовым командам гита, полученные знания пригодятся мне в дальнейшем. Также я разобралась в оформлении файлов .md
