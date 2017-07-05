int mystrcmp (const char str1[],const char str2[])
{

	int i ;
	i = 0 ;
	while ( str1[i] == str2[i])
	{
		if ( str1[i]==0 || str2[i]==0 )
		{
			return(0);
		}

		i++;
	}
	int x = str1[i];
	int y = str2[i];

	return(x-y);
}



