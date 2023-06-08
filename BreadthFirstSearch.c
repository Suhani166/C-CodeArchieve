#include<stdio.h>
#include<stdlib.h>
#define SIZE 40

struct queue {
    int items[SIZE];
    int front;
    int rear;
};
struct node{
    int vertexNum;
    struct node *next;
};

struct Graph{
    int numberOfVertices;
    int *visited;
    struct node **adjacencyList;
};

struct node *createNode(int v){
    struct node *newNode = malloc(sizeof(struct node));
    newNode->vertexNum = v;
    newNode->next = NULL;
    return newNode;
}

struct Graph *createGraph(int vertices){
    struct Graph *graph = malloc(sizeof(struct Graph));
    graph->numberOfVertices = vertices;
    graph->visited = malloc(vertices*sizeof(int));
    graph->adjacencyList = malloc(vertices*sizeof(struct node));

    for(int i=0;i<vertices;i++){
        graph->adjacencyList[i]=NULL;
        graph->visited[i]=0;
    }
    return graph;
}
struct queue* createQueue(){
    struct queue *queue = malloc(sizeof(struct queue));
    queue->front = queue->rear = -1;
    return queue;
}

void addEdge(struct Graph* graph, int source, int destination){
    struct node * newNode= createNode(destination);
    newNode->next = graph->adjacencyList[source];
    graph->adjacencyList[source]= newNode;
    
    newNode = createNode(source);
    newNode->next = graph->adjacencyList[destination];
    graph->adjacencyList[destination] = newNode;
}



int isEmpty(struct queue* q) {
    if (q->rear == -1)
        return 1;
    else
        return 0;
}


void enqueue(struct queue* q, int value) {
    if (q->rear == SIZE - 1)
        printf("\nQueue is Full!!");
    else {
        if (q->front == -1)
        q->front = 0;
        q->rear++;
        q->items[q->rear] = value;
    }
}

// Removing elements from queue
int dequeue(struct queue* q) {
    int item;
    if (isEmpty(q)) {
        printf("Queue is empty");
        item = -1;
    } else {
        item = q->items[q->front];
        q->front++;
        if (q->front > q->rear) {
        printf("Resetting queue ");
        q->front = q->rear = -1;
        }
    }
    return item;
}

// Print the queue
void printQueue(struct queue* q) {
    int i = q->front;

    if (isEmpty(q)) {
        printf("Queue is empty");
    } else {
        printf("\nQueue contains \n");
        for (i = q->front; i < q->rear + 1; i++) {
        printf("%d ", q->items[i]);
        }
    }
}

void bfs(struct Graph* graph, int startVertex) {
    struct queue* q = createQueue();

    graph->visited[startVertex] = 1;
    enqueue(q, startVertex);

    while (!isEmpty(q)) {
        printQueue(q);
        int currentVertex = dequeue(q);
        printf("Visited %d\n", currentVertex);

        struct node* temp = graph->adjacencyList[currentVertex];

        while (temp) {
        int adjVertex = temp->vertexNum;

        if (graph->visited[adjVertex] == 0) {
            graph->visited[adjVertex] = 1;
            enqueue(q, adjVertex);
        }
        temp = temp->next;
        }
    }
}
int main() {
    struct Graph* graph = createGraph(6);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 4);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 4);

    bfs(graph, 0);

    return 0;
}