void test_call()
{
	int arr[10];           // BAD, warning 26494 will be fired
	int* p = arr;          // BAD, warning 26485 will be fired

	{
		int* q = p + 1;    // BAD, warning 26481 would be fired
		p = q++;           // BAD, warning 26481 would be fired
	}
}