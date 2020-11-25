#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main()
{

	//C++ STL Vector
	vector<int> A={1,4,5,0,2};

	//print vector using for loop and with out iterators
	for(int x :A)
		cout << x << " ";

	cout << endl;

	//sort vector using sort algorithm
	sort(A.begin(),A.end());


	//verctor should be sorted before using binary search
	if (binary_search(A.begin(),A.end(), 12))
		cout << "Element found in the vector \n";
	else
		cout << "Element not found in the vector \n";

	//print vector using for loop and iterator

	for(auto it=A.begin() ; it != A.end(); it++)
		cout << *it << " "; 

	cout << endl;

	//reverse the vector
	reverse(A.begin(),A.end());

	//print vector using for loop and with out iterators
	for(int x :A)
		cout << x << " ";

	cout << endl;

	//find the max and min element 
	cout << "Max element of vector:" << *max_element(A.begin(),A.end())  << endl;
	cout << "Min element of vector:" << *min_element(A.begin(),A.end())  << endl;

	//find the sum of elements in vector 
	cout << "Sum of elements:" << accumulate(A.begin(), A.end(), 0) << endl;

	//find the num of acurence of element in vector
	cout << "count of element:" << count(A.begin(), A.end(), 14) << endl;

	// find() returns iterator to last address if element not present
	find(A.begin(), A.end(),15) != A.end()? cout << "Element found\n": cout << "Element not found\n";

	 sort(A.begin(),A.end());

	// Returns the first occurrence of 4
	auto q = lower_bound(A.begin(), A.end(),4);

	// Returns the last occurrence of 4
	auto p = upper_bound(A.begin(), A.end(),4);

	cout << "The lower bound is at position: ";
	cout << q-A.begin() << endl;

	cout << "The upper bound is at position: ";
	cout << p-A.begin() << endl;


}
