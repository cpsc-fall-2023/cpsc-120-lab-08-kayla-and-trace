// TODO: Add the required header

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // TODO: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  int number_argument{static_cast<int>(arguments.size())-1};
  if (number_argument <1) {
    std::cout << "error: you must supply atleast one number";
    return 0;
  } 
    double sum{0.0};
    double average{0.0};
    bool first{true};
    for (std::string argument:arguments) {
      if(first)
      {
        first=false;
      }
      else{
        double number{std::stod(argument)};
      sum += number;
      }
    return 0;
    }
    average = (sum / number_argument);
    std::cout << "average = " << average; 
  
  
  // TODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.

  // TODO: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.

  // TODO: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.

  return 0;
}

