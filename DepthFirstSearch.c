#include<stdio.h>
#include<stdlib.h>


struct node{
    int vertexNum;
    struct node *next;
};

struct Graph{
    int numberofVertices;
    int *visited;
    struct node **adjacencyList;
};

struct node* createNode( int v){
    struct node *newNode = malloc(sizeof(struct node));
    newNode->vertexNum = v;
    newNode->next=  NULL;
    return newNode;
}


void addEdge(struct Graph *graph, int source, int destination){
    struct node *newNode = createNode(destination);
    newNode->next = graph->adjacencyList[source];
    graph->adjacencyList[source] = newNode;

    newNode = createNode(source);
    newNode->next = graph->adjacencyList[destination];
    graph->adjacencyList[destination] = newNode;
}

struct Graph* createGraph(int vertices){
    int i;
    struct Graph* graph = malloc(sizeof(struct Graph));
    graph->numberofVertices = vertices;
    graph->visited = malloc(vertices* sizeof(int));
    graph->adjacencyList = malloc(vertices* sizeof(struct node*));

    for(int i=0;i< vertices;i++){
        graph->adjacencyList[i]=NULL;
        graph->visited[i]=0;
    }
    return graph;
}

void depthFirstSearch(struct Graph *graph, int vertexNum){

    struct node *adjList = graph->adjacencyList[vertexNum];
    struct node *temp = adjList;

    graph->visited[vertexNum] = 1;
    printf("%d ", vertexNum);

    while(temp!=NULL){

        int connected = temp->vertexNum;
        if(graph->visited[connected] == 0){
            depthFirstSearch(graph,connected);
        }
        temp = temp->next;
    }

}

int main(){

    int numberofEdges,numberofVertices, i;
    int startingIndex;
    int source, destination;

    printf("Enter number of Vertices and Edges in the graph: ");
    scanf("%d %d", &numberofVertices,&numberofEdges);
    struct Graph *graph = createGraph(numberofVertices);

    printf("Enter %d edges with vertex numbering from 0 to %d\n", numberofEdges, numberofVertices-1);
    for(i =0;i<numberofEdges;i++){
        scanf("%d %d",&source,&destination);
        addEdge(graph,source,destination);
    }

    printf("Enter starting index: \n");
    scanf("%d", &startingIndex);

    if (startingIndex < numberofVertices)
    {
        printf("DFS Traversal: ");
        depthFirstSearch(graph, startingIndex);
    }
    return 0;
}