using namespace std;
class midterm1{
	private:
		int arr[100];
		int N;
		int i;
	public:
		int curIndex;
		// constructor
		midterm1(int n){
			N=n;
			curIndex = 0;
			for (i = 0; i<N; i++)
				arr[i]=0;
		}
		~midterm1(){
			;
		}
		//destructor
		void initial(){
			for (i=0; i<N; i++)
					arr[i]=rand() % 100 + 1;
			curIndex=i;
		}
		void initial(int temp){
			for (i=0; i<temp; i++)
					arr[i]=rand() % 100 + 1;
			curIndex=i;
		}
		void displayAll(){
			cout << "{";
			for(i=0; i<curIndex;i++)
				cout << arr[i] << ",";
			cout << "\b";
			cout<< "}";
		}
			void displayAll1(){
			cout << "{";
			for(i=0; i<N;i++)
				cout << arr[i] << ",";
			cout << "\b";
			cout<< "}";
		}
		// display only the data
		void reverseAll(){
			cout << "{";
			for (i = curIndex - 1; i >= 0; i--)
				cout << arr[i]  << ",";
			cout << "\b";
			cout<< "}";
		}

};
