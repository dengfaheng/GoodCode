#include <ilcplex/ilocplex.h>

ILOSTLBEGIN

int main()
{
	IloEnv env;

	try {
		IloInt i, j;

		IloModel model(env);

		// Objective Function: Maximize Profit
		

		// Min and max quantity of each element in alloy
		

		// Constraint: produce requested quantity of alloy
		

		// Constraints: Satisfy element quantity requirements for alloy
		

		// Optimize
		IloCplex cplex(model);
		cplex.setOut(env.getNullStream());
		cplex.setWarning(env.getNullStream());
		cplex.solve();

		if (cplex.getStatus() == IloAlgorithm::Infeasible)
			env.out() << "No Solution" << endl;

		env.out() << "Solution status: " << cplex.getStatus() << endl;

		// Print results
		env.out() << "Cost:" << cplex.getObjValue() << endl;
	}
	catch (IloException& ex) {
		cerr << "Error: " << ex << endl;
	}
	catch (...) {
		cerr << "Error" << endl;
	}
	env.end();
	return 0;
}
