

//сортировка массива
void Sort(int arr[], const int n)				//ф-ия для интового одномерного массива
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[i] = buffer;
			}
		}
	}
}

void Sort(double arr[], const int n)				//ф-ия для дабловсокго одномерного массива
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[i] = buffer;
			}
		}
	}
}

void Sort(float arr[], const int n)				//ф-ия для дабловсокго одномерного массива
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[i] = buffer;
			}
		}
	}
}