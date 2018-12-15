#include <iostream>
#include <cstdlib> 
#include <cmath> 

using namespace std;

// Returns a uniformly-distributed number in the range [0,1]
double randUniform() {
  double r; 
  r = ((double) rand() / (RAND_MAX)); 
  return r;  //determines whether patron big- or little- chooser
}

/* Return the number of squares on the non-empty roll for this simulation
   of the problem */
int singleSim(int N, double p) {   
  int sqleft1, sqleft2; 
  //both rolls are assigned the initial number of squares
  int roll_1 = N;    
  int roll_2 = N;    

  // loop continues until one roll is less than zero
  while  (roll_1 > 0 && roll_2 > 0) { 
    if (roll_1 == roll_2) {
      roll_1 = roll_1 - 1;
    }
    else if (roll_1 < roll_2) { 
      if (randUniform() > p) {   // expressions used to define big/little chooser
        roll_1 = roll_1 - 1;  
      }
      else if (randUniform() <= p) {
      roll_2 = roll_2 - 1;
      }
    }
  } 
  // if-else used to return squares left on non-empty roll 
  if (roll_1 != 0) {
    sqleft1 = roll_1;
    return sqleft1;   
  }
  else {
    sqleft2 = roll_2;
    return sqleft2; 
  }
  return 0; 
} 

int main() {
  int N;        // initial number of squares on each roll
  double p;     // probability of a big-chooser
  int sims;     // number of trials for our simulation 
  double avg_sqr; 
  double sqr_total = 0;  

  srand(time(0));  //setting seed & function time() will return a diff. num each run
  
  cout << "Enter initial number of squares: " << endl; 
  cin >> N; 
  cout << "Enter probability of a big chooser:";  
  cin >> p; 
  cout << "Enter number of trials for simulation: " << endl; 
  cin >> sims;
  
  for  (int i = 0; i < sims; ++i) {
    sqr_total = sqr_total + singleSim(N, p); 
  } 

  avg_sqr = sqr_total / sims;      // calculates avg. num. of squares used

  cout << "Average: " << avg_sqr << endl;  

  return 0; 
}
