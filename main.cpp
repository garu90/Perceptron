#include "perceptron.h"

using namespace std;

int main()
{
    Perceptron a1;
    vector<double> X;
    vector<double> W;
    double theta;



//    //pesos
//    theta=0.2;
//    W.push_back(0.5);
//    W.push_back(0.3);


//    a1.clearFile("out.csv");
//    a1.clearFile("train.csv");

//    X.push_back(0.1);
//    X.push_back(1.0);
//    a1.setPerceptron(X,W,theta);
//    a1.solve(SIGMOIDAF,LAMBDA);
//    a1.saveResults("out.csv");
//    a1.showAll();

//    X.clear();
//    X.push_back(1.0);
//    X.push_back(0.5);
//    a1.setPerceptron(X,W,theta);
//    a1.solve(SIGMOIDAF,LAMBDA);
//    a1.saveResults("out.csv");
//    a1.showAll();

//    X.clear();
//    X.push_back(0.7);
//    X.push_back(0.3);
//    a1.setPerceptron(X,W,theta);
//    a1.solve(SIGMOIDAF,LAMBDA);
//    a1.saveResults("out.csv");
//    a1.showAll();

//    X.clear();
//    X.push_back(0.1);
//    X.push_back(0.1);
//    a1.setPerceptron(X,W,theta);
//    a1.solve(SIGMOIDAF,LAMBDA);
//    a1.saveResults("out.csv");
//    a1.showAll();

//    X.clear();
//    X.push_back(0.2);
//    X.push_back(0.1);
//    a1.setPerceptron(X,W,theta);
//    a1.solve(SIGMOIDAF,LAMBDA);
//    a1.saveResults("out.csv");
//    a1.showAll();



    a1.train("train.csv",1000);
    a1.showAll();

    a1.clearInputs();
    a1.setInput(0.1);
    a1.setInput(1.0);
    a1.solve(SIGMOIDAF,LAMBDA);
    a1.showResults();

    a1.clearInputs();
    a1.setInput(1.0);
    a1.setInput(0.5);
    a1.solve(SIGMOIDAF,LAMBDA);
    a1.showResults();

    a1.clearInputs();
    a1.setInput(0.7);
    a1.setInput(0.3);
    a1.solve(SIGMOIDAF,LAMBDA);
    a1.showResults();

    a1.clearInputs();
    a1.setInput(0.1);
    a1.setInput(0.1);
    a1.solve(SIGMOIDAF,LAMBDA);
    a1.showResults();

    a1.clearInputs();
    a1.setInput(0.2);
    a1.setInput(0.1);
    a1.solve(SIGMOIDAF,LAMBDA);
    a1.showResults();




    return 0;
}
