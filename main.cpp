#include<iostream>
#include<ctime>
#include<algorithm>

using namespace std;

int main() {

	srand(time(NULL));

	cout << "Mild: " << endl;
	for (int i = 50; i <= 70; i += 2)
		cout << i << " ";
	cout << endl;

	for (int j = 100; j >= 50; j -= 5)
		cout << j << " ";
	cout << endl;
	for (int g = 2; g <= 2048; g *= 2)
		cout << g << " ";
	cout << endl;


	cout << "Medium: " << endl;

	for (int s = 0; s <= 10; s++) {
		for (int t = 0; t <= 6; t++)
			cout << "*";
		cout << endl;
	}
	cout << endl;
	for (int z = 0; z < 5; z++) {
		for (int x = 1; x <= 4; x++)
			cout << x<<" ";
		cout << endl;
	}

	cout << "Spicy: " << endl;

	int nums[8];

	for (int v = 0; v < 8; v++)
		nums[v] = rand() % 20 + 1;

	for (int l = 0; l < 8; l++)
		cout << nums[l]<<" ";
	cout << endl;

	sort(nums, nums + 8);

	cout << "smallest: " << nums[0] << " biggest: " << nums[7]<<endl;
	double range = nums[7] - nums[0];
	double average = nums[0];
	for (int c = 1; c < 8; c++)//im so funny C++
		average += nums[c];
	cout << "range: " << range << " average: " << average / 8 << endl;

}
