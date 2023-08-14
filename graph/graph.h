#pragma once
#include <vector>
#include <map>
#include <list>



template <typename T>
struct Edge {
    T destination;
    unsigned int weight;
};

template <typename T>
class Graph {
    public:
    Graph();
    Graph(const std::vector<std::vector<T>>& vec);
    std::list<Edge<T>> adjEdge(T& src);
    void print();


    private:
    std::vector<T> vertices;
    std::map<T, unsigned int> vertexToIndex;
    std::vector<std::list<Edge<T>>> adjList;
    std::vector<std::vector<unsigned int>> adjMatrix;
    void addEdge(T& src, T& dest, unsigned int weight);

};



#include "graph.hpp"