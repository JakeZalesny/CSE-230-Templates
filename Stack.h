#pragma once

namespace templateClassProblem {
    template <class T>
    class Stack
    {
    public:
        Stack() : numElements(0) {}

        // Add an element to the stack
        void push(const T& value)
        {
            if (numElements < 10)
                data[numElements++] = value;
        }

        // Remove an element from the stack
        void pop()
        {
            if (numElements)
                numElements--;
        }

        // Retrieve the top-most element
        double top()
        {
            if (numElements)
                return data[numElements - 1];
            return -1.0;
        }

        /***************************************
         * PROMPT
        **************************************/
        T prompt(const T& value, const char* message)
        {
            while (true)
            {
                // Instructions
                cout << message << ": ";
                cin >> value;

                // Check for error
                if (cin.fail())
                {
                    cerr << "ERROR, try again\n";
                    cin.clear();
                    cin.ignore(256, '\n');
                }
                else
                    return value;
            }
        }


    private:
        double data[10];
        int numElements;
        T value; 
    };
}