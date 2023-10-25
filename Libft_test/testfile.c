// #include <stdio.h>

// //ft_memcpy
// int main()
// {
// 	char t[7];
// 	char s[7] = "Helloo";
// 	ft_memcpy(&t, &s, 7);
// 	printf("%s\n", t);
// 	return(0);
// }
// //ft_memchr
// int main()
// {
// 	char s1[] = "Hey Mmmama";
// 	char s2[] = "Johnny Bravo";

// 	printf("%s\n", (char*)ft_memchr(s1, 0, 11));
// 	printf("%s\n", (char*)memchr(s1, 0, 11));
// 	printf("%s\n", (char*)ft_memchr(s2, 0, 10));
// 	printf("%s\n", (char*)memchr(s2, 0, 10));
// }
// //ft_memcmp + ft_strncmp
// int main()
// {
// 	char s1[] = "Hello";
// 	char s2[] = "Dello";
// 	char s3[] = "Coucou";
// 	char s4[] = "Zoucuu";
// 	char s5[] = "abcdef";
// 	char s6[] = "abc\375xx";
// 	printf("%i\n", ft_strncmp(s1, s2, 0));
// 	printf("org = %i\n", strncmp(s1, s2, 0));
// 	printf("%i\n", ft_strncmp(s3, s4, 1));
// 	printf("org = %i\n", strncmp(s3, s4, 1));
// 	printf("%i\n", ft_strncmp(s5, s6, 5));
// 	printf("org = %i\n", strncmp(s5, s6, 5));
// }
// //ft_strnstr
// int main()
// {
// 	char str[] = "lhij";
// 	char cmp[] = "hi";
// 	// 9 = Hello err & 12 = Hello erreer

// 	printf("%s\n", ft_strnstr(str, cmp, 2));
// 	printf("%s\n", strnstr(str, cmp, 2));

// 	char str1[] = "Herro eelleelleur";
// 	char cmp1[] = "coc";
// 	printf("%s\n", ft_strnstr(str1, cmp1, 8));
// 	printf("%s\n", strnstr(str1, cmp1, 8));
// 	printf("%s\n", ft_strnstr(str, cmp, 7));
// 	printf("%s\n", strnstr(str, cmp, 7));
// 	printf("%s\n", ft_strnstr(str, cmp, 15));
// 	printf("%s\n", strnstr(str, cmp, 15));
// }
// //ft_atoi
// int main()
// {
// 	printf("%i\n", ft_atoi("   -+1235df23"));
// 	printf("%i\n", ft_atoi("   -1235555555df23"));
// 	printf("%i\n", ft_atoi("   -235df23"));
// 	printf("%i\n", ft_atoi("a   -1235df23"));
// 	printf("%i\n", ft_atoi("223   -+1235df23"));
// }
// //ft_memmove
// int main()
// {
// 	char s2[] = "123456..........";
// 	memmove(s2+3, s2, 4);
// 	printf("%s\n", s2);
// 	char s1[] = "123456.........."; 
// 	ft_memmove(s1+3, s1, 4);
// 	printf("%s\n", s1);
// }
// //ft_calloc
// int main()
// {
// 	char *c;
// 	c = ft_calloc(6, 1);
// 	int i = 0;
// 	while (i < 7)
// 	{
// 		if (c[i] == '\0')
// 			c[i] = '1';
// 		else 
// 			printf("1");
// 		i++;
// 	}
// 	printf("%s\n", c);
// }
// //ft_substr
// int main ()
// {
// 	char str[] = "Hello les khay";
// 	char *new = ft_substr(str, 3, 6);
// 	printf("%s\n", new);
// }
// //ft_strlen
// int main()
// {
// 	printf("%d\n", ft_strlen("Hello World"));
// 	printf("%d\n", ft_strlen("Hello"));
// 	printf("%d\n", ft_strlen(" World"));
// }
// //ft_strlcpy
// int main()
// {
// 	char s1[8] = "Coucoul";
// 	char s15[15];
// 	char sc1[15];
// 	char s2[9] = "";
// 	char s25[15];
// 	char sc2[15];
// 	int i1 = ft_strlcpy(s15, s1, 2);
// 	int i11 = strlcpy(sc1, s1, 2);
// 	int i2 = ft_strlcpy(s25, s2, 15);
// 	int i21 = strlcpy(sc2, s2, 15);
// 	printf("%s\n", s15);
// 	printf("%i\n", i1);
// 	printf("original = %s\n", sc1);	
// 	printf("original = %i\n", i11);
// 	printf("%s\n", s25);
// 	printf("%i\n", i2);
// 	printf("original = %s\n", sc2);
// 	printf("original = %i\n", i21);
// }
// //ft_strlcat
// int main()
// {
// 	char s1[15]=" World"; //6
// 	char d1[20] = "Hello"; //5
// 	printf("%s\n", d1);
// 	int i1; 
// 	i1 = ft_strlcat(d1, s1, 8);
// 	printf("%s\n", d1);
// 	printf("%i\n\n", i1);
// 	char s11[15]= " World";
// 	char d11[20] = "Hello";
// 	printf("%s\n", d11);
// 	int i11; 
// 	i11 = strlcat(d11, s11, 8);
// 	printf("or = %s\n", d11);
// 	printf("or = %i\n", i11);
// 	// char s2[7]="Coucou";
// 	// char d2[7]= "\0";
// 	// int i2 = ft_strlcat(d2, s2, 7);
// 	// char s3[1]= "\0";
// 	// char d3[10]="le monde";
// 	// int i3 = ft_strlcat(d3, s3, 9);
// 	// printf("%s\n", d2);
// 	// printf("%i\n", i2);
// 	// printf("%s\n", d3);
// 	// printf("%i\n", i3);
// }
// //ft_strjoin
// int main ()
// {
// 	char *s1 = "";
// 	char *s2 = "Connard";
// 	char *s3 = ft_strjoin(s1, s2);
// 	printf("%s\n", s3);
// }
// //ft_strtrim
// int main()
// {
// 	char set[] = "abcd";
// 	char str[] = "bacdbacacoucouuabcddbca";
// 	printf("%s\n", ft_strtrim(str, set));
// }
// //ft_split
// int main()
// {
// 	char s1[] = "C,oucou,Mr,Du,Connard,";
// 	char s2[] = "Je\%voudrais\%vraiment\%etre\%athenien\%";
// 	char s3[] = "ou/encore/spartiate";
// 	char s4[] = "!Mais!surtout!pas!troyen!!!";
// 	char **st1 = ft_split(s1, ',');
// 	char **st2 = ft_split(s2, '%');
// 	char **st3 = ft_split(s3, '/');
// 	char **st4 = ft_split(s4, '!');
// 	int n = -1;
// 	while(++n < 6)
// 		printf("%s = %i\n", st1[n], n);
// 	n = -1;
// 	while(++n < 6)
// 		printf("%s = %i\n", st2[n], n);
// 	n = -1;
// 	while(++n < 4)
// 		printf("%s = %i\n", st3[n], n);
// 	n = -1;
// 	while(++n < 7)
// 		printf("%s = %i\n", st4[n], n);
// }
// //ft_strmapi
// char	test_toupper (unsigned int n, char c)
// {
// 	if (n % 2 == 0)
// 		return (ft_toupper(c));
// 	return (ft_tolower(c));
// }
// int main()
// {
// 	printf("%s\n", ft_strmapi("HeLLoO WOooworld", &test_toupper));
// }
// //ft_striteri
// void	testg (unsigned int n, char *str)
// {
// 	while (str[n++])
// 	{
// 		if (str[n] >= 'a' && str[n] <= 'm')
// 			str[n] = str[n] + 10;
// 	}
// }
// int main()
// {
// 	char s[] = "Coucou, je peux etre athenien?";
// 	ft_striteri(s, &testg);
// 	printf("%s\n", s);
// }
// //ft_itoa
// int main()
// {
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(-2147483647));
// 	printf("%s\n", ft_itoa(32584));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(3));
// 	printf("%s\n", ft_itoa(-10));
// }
// //ft_str(r)chr
// int main()
// {
// 	char s[] = "Ceci n'est pas un test";

// 	printf("%s\n", ft_strchr(s, 'n'));
// }
// //bonus 
// //ft_lstadd_front
// int main()
// {
// 	t_list *s1;
// 	s1 = ft_lstnew("ceci n'est pas le debut");
// 	t_list *s2;
// 	s2 = ft_lstnew("ceci n'est pas le milieu?");
// 	t_list *s3;
// 	s3 = ft_lstnew("ceci n'est pas la fin");
// 	s1->next = s2;
// 	ft_lstadd_front(&s1, s3);
// 	printlist(s3);
// }
// //ft_lstsize + last
// int main()
// {
// 	t_list *s1;
// 	s1 = ft_lstnew("ceci n'est pas le debut");
// 	t_list *s2;
// 	s2 = ft_lstnew("ceci n'est pas le milieu?");
// 	t_list *s3;
// 	s3 = ft_lstnew("ceci n'est pas la fin");
// 	t_list *s4 = ft_lstnew("ceci n'est pas la fin4");
// 	t_list *s5 = ft_lstnew("ceci n'est pas la fin5");
// 	//t_list *s6 = ft_lstnew("ceci est la fin");
// 	s1->next = s2;
// 	s2->next = s3;
// 	s3->next = s4;
// 	s4->next = s5;
// 	s5->next = NULL;
// 	// last > printf("%s\n", ft_lstlast(s1)->content);
// 	// size > printf("%d\n", ft_lstsize(NULL));
// }
// ft_lstadd_back
void ft_printlst (t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while (temp != NULL)
	{
		printf("%s\n", temp->content);
		temp = temp->next;
	}
}
int main()
{
	t_list *s1;
	s1 = ft_lstnew("ceci n'est pas le debut");
	t_list *s2;
	s2 = ft_lstnew("ceci n'est pas le milieu?");
	t_list *s3;
	s3 = ft_lstnew("ceci n'est pas la fin");
	t_list *s4 = ft_lstnew("ceci n'est pas la fin4");
	t_list *s5 = ft_lstnew("ceci n'est pas la fin5");
	//t_list *s6 = ft_lstnew("ceci est la fin");
	s1->next = s2;
	s2->next = s3;
	s3->next = s4;
	s4->next = s5;
	//ft_lstadd_back(&s1, s6);
	ft_printlst(s1);
	return (0);
}
