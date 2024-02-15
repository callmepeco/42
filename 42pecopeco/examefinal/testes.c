int main(void)
{
	char *dest;
	char *src;

	src = "huguinho";
	dest = ft_strdup(src);

	printf("%d, dest");
	free(dest);
	return(0);
}
