
#include "GraphColoring.h"
#include <istream>
using namespace std;

GraphColoring::GraphColoring(const vector<vector<int>> &graph, int _numOfColors)
    : graphMatrix(graph), numOfColors(_numOfColors)
{
    colors.resize(graphMatrix.size());
}

void GraphColoring::operator()()
{
    if (solve(0))
    {
        showResult();
    }
    else
    {
        cout << "No solution with the given parameters ... \n";
    }
}

//function to assign colors recursively
bool GraphColoring::solve(size_t nodeIndex)
{
    // if we have considered all the nodes in the graph and assign colors accordingly
    // solve coloring problem with backtracking
    if (nodeIndex == graphMatrix.size())
    {
        return true;
    }
    // try all colors
    for (int colorIndex = 1; colorIndex <= numOfColors; colorIndex++)
    {

        //check if the given color is valid
        if (isColorValid(nodeIndex, colorIndex))
        {
            // the color is valid: assign and proceed with next vertex
            colors[nodeIndex] = colorIndex;

            // try to find the color for the next node

            if (solve(nodeIndex + 1))
                return true;
            // Backtrack : keep checking the next colorIndex
        }
    }
    // we have considered all the colors without any result which means there is no solution
    // we are not able to use different colors for adjacent nodes in the graph
    //so we backtrack
    return false;
}

// function to check if it is valid to use that color to a given vertex
bool GraphColoring::isColorValid(size_t nodeIndex, size_t colorIndex)
{
    for (size_t i = 0; i < graphMatrix.size(); i++)
    {
        // we have to check adjacent nodes (Matrix value is 1) and whether they have the same color or not
        if (graphMatrix[nodeIndex][i] == 1 && colorIndex == colors[i])
        {
            return false;
        }
    }
    return true;
}

void GraphColoring::showResult()
{
    for (size_t i = 0; i < graphMatrix.size(); i++)
        cout << "Node " << (i + 1) << " has color index: " << colors[i] << "\n";
    cout << '\n';
}