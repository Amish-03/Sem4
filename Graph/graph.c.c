#include <stdio.h>
#include <stdbool.h>

#define MAX_VERTICES 100

int graph[MAX_VERTICES][MAX_VERTICES];
int num_vertices;

void initGraph(int n)
{
    num_vertices = n;
    for (int i = 0; i <= num_vertices; ++i)
    {
        for (int j = 0; j <= num_vertices; ++j)
        {
            graph[i][j] = 0;
        }
    }
}

void addEdge(int u, int v)
{
    graph[u][v] = 1;
    graph[v][u] = 1; // for undirected graph
}

void removeEdge(int u, int v) {
    graph[u][v] = 0;
    graph[v][u] = 0; // for undirected graph
}

bool hasEdge(int u, int v) {
    return graph[u][v] == 1;
}

void printGraph() {
    printf("Adjacency Matrix Representation of the Graph:\n");
    for (int i = 0; i <= num_vertices; ++i)
    {
        for (int j = 0; j <= num_vertices; ++j)
        {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

}

// Queue implementation for BFS
#define MAX_QUEUE_SIZE 100

int queue[MAX_QUEUE_SIZE];
int front = -1;
int rear = -1;

void enqueue(int item) {
    if (rear == MAX_QUEUE_SIZE - 1) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear = rear + 1;
    queue[rear] = item;
}

int dequeue()
{
    int item;
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
        return -1;
    }
    item = queue[front];
    front = front + 1;
    return item;
}

bool isempty()
{
    return front == -1 || front > rear;
}

void BFS(int start)
{
    printf("BFS Traversal starting from vertex %d:\n", start);
    int visited[MAX_VERTICES] = {0};
    enqueue(start);
    visited[start] = 1;
    while (!isempty())
    {
        int u = dequeue();
        printf("%d ", u);
        for (int v = 1; v <= num_vertices; ++v)
        {
            if (graph[u][v] == 1 && visited[v] == 0)
            {
                enqueue(v);
                visited[v] = 1;
            }
        }
    }
    printf("\n");
}
void DFS(int start) {
    static int visited[MAX_VERTICES] = {0};

    if (visited[start] == 0) {
        printf("%d ", start);
        visited[start] = 1;

        for (int j = 1; j <= num_vertices; ++j) {
            if (graph[start][j] == 1 && visited[j] == 0) {
                DFS(j);
            }
        }
    }
}


int main()
{
    int num_edges, u, v;

    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &num_vertices);

    initGraph(num_vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &num_edges);

    printf("Enter the edges (format: u v):\n");
    for (int i = 0; i < num_edges; ++i)
    {
        scanf("%d %d", &u, &v);
        addEdge(u, v);
    }

    printGraph();

    int start_vertex;
    printf("Enter the starting vertex for traversal: ");
    scanf("%d", &start_vertex);

    BFS(start_vertex);
    printf("\nDFS Traversal starting from vertex %d:\n", start_vertex);
    DFS(start_vertex);

    return 0;
}
