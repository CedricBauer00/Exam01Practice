#include <unistd.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;

	j = 0;
	i =0;
	while (s[i] != '\0')
	{
		// write(1, &s[i], 1);
		// write(1, "\npassed\n", 6);
		// printf("%d\n", i);
		while (s[i] != reject[j])
			j++;			
		if (s[i] == reject[j])
			return (s[i]);
		i++;
	}
	return (s[i]);
}

int main()
{
	char *str = "Hello World";
	char *reject = "World";
	size_t t;
	t = ft_strcspn(str, reject);
	printf("%zu\n", t);
	return (0);
}

// cmd1 | cmd2   

// pipe (fd)  -> fd[0] , fd[1] - in .. fd[1] out  i/o  

// pid_t pid;
// fork(pid);
// if (pid == 0 ) // cmd2 it is childprocess
// {

// }
// else 
// {
// 	//parent process 
// }


// fd  i/ o 

// wirte(  ) 0 , 1 ,2  0 stdin  i.  1 stdout ,o  2 error.

// < redirection 

// < file1
// int file1;
// int readbytes = read(file1 )
// dup2(file1, STDIN_FILENO)  0 // file1 - > 3 ,,  0 -- > 3



// file1 = 3


