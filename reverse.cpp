#include<iostream>
#include<vector>
#include<limits>
#include<algorithm>
#include<math.h>
#include<iomanip>
#include<string>
#include<array>
#include<stack>

using namespace std;
int main()
{
  int n,a,b,c,d;
  cout<<"enter th number";
  cin>>n;
  int arr[n];
  cout<<"enter"<<" "<<n<<" "<<"element"<<"\n";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);
  cout<<"sorted array are"<<"\n";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
   int sum=0;
   for(int i=0;i<n;i++)
   {
    sum +=arr[i];
   }
   int avg=sum/n;
   cout<<"avg is"<<" "<<avg<<"\n";

   char name[100];
   cout<<"enter your name:";
   cin>>name;
    cout<<name;
 cin.ignore(numeric_limits<streamsize>::max(),'\n');
 string address; 
 cout<<"enter your address:"<<"\n";
 getline(cin,address);
  
  return 0;
}





// improved code for learner




#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include <math.h>     // Note: In C++, <cmath> is preferred over <math.h>
#include <iomanip>
#include <string>
#include <array>
#include <stack>

using namespace std;

int main() {

    string name;
    string address; 

    cout << "=== Student Profile System ===" << "\n";
    cout << "Enter your first name: ";
    cin >> name;

    // ---------------------------------------------------------
    // 2. <limits> : Clearing the input buffer
    // ---------------------------------------------------------
    // After using cin >>, a newline character is left in the buffer. 
    // We must clear it before using getline, otherwise getline will skip.
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter your full address: ";
    getline(cin, address); // Reads spaces as well

    // ---------------------------------------------------------
    // 3. Dynamic Arrays & <algorithm> : Sorting numbers
    // ---------------------------------------------------------
    int n;
    cout << "\nHow many test scores do you want to enter? ";
    cin >> n;

    // Using dynamic memory allocation instead of int arr[n] (which isn't standard C++)
    int* arr = new int[n]; 
    
    cout << "Enter " << n << " test scores:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // std::sort from <algorithm>
    sort(arr, arr + n);
    
    cout << "Sorted scores: ";
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << "\n";

    // ---------------------------------------------------------
    // 4. <iomanip> and <math.h> : Advanced Math & Formatting
    // ---------------------------------------------------------
    // Cast to double for accurate decimal division
    double exact_avg = static_cast<double>(sum) / n; 

    // std::fixed and std::setprecision from <iomanip> force 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Exact Average: " << exact_avg << "\n";

    // sqrt() and pow() from <math.h>
    double root = sqrt(sum);
    cout << "Square root of the sum (" << sum << ") is: " << root << "\n";
    cout << n << " to the power of 2 is: " << pow(n, 2) << "\n\n";

    // Clean up our dynamically allocated array to prevent memory leaks!
    delete[] arr;

    // ---------------------------------------------------------
    // 5. <vector> : A dynamically resizing array
    // ---------------------------------------------------------
    // Vectors are the modern, standard way to handle arrays in C++
    vector<string> subjects;
    subjects.push_back("Math");
    subjects.push_back("Physics");
    subjects.push_back("Computer Science");

    cout << "=== " << name << "'s Enrolled Subjects ===" << "\n";
    for(size_t i = 0; i < subjects.size(); i++) {
        cout << "- " << subjects[i] << "\n";
    }
    cout << "\n";

    // ---------------------------------------------------------
    // 6. <array> : A fixed-size, safer C++ array
    // ---------------------------------------------------------
    // std::array is preferred over standard C-arrays like int arr[5]
    // when you know the exact size ahead of time.
    array<int, 3> top_scores = {99, 95, 92};
    cout << "Top 3 historical scores from <array>: ";
    for (int score : top_scores) { // Range-based for loop (beginner friendly!)
        cout << score << " ";
    }
    cout << "\n\n";

    // ---------------------------------------------------------
    // 7. <stack> : Last-In-First-Out (LIFO) Data Structure
    // ---------------------------------------------------------
    // Think of a stack like a pile of plates. You can only take the top one off.
    stack<string> browser_history;
    browser_history.push("google.com");
    browser_history.push("cppreference.com");
    browser_history.push("stackoverflow.com");

    cout << "=== Browsing History (Stack) ===\n";
    cout << "Currently viewing (Top of stack): " << browser_history.top() << "\n";
    
    browser_history.pop(); // Removes stackoverflow.com
    cout << "Hit 'Back'. Now viewing: " << browser_history.top() << "\n";

    // Final closing statement
    cout << "\nProfile generated for " << name << " living at: " << address << "\n";

    return 0;
}




