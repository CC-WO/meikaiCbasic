//文字列の長さを返す関数のみ

size_t strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
		len++;
	return(len);
}