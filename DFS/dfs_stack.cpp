int graph[MAX_N][MAX_N];
int stack[STACK_SIZE], top;

void dfs(int node) {
        bool visited[MAX_N] = { false };
        int top = -1;
        stack[++top] = node;
        while (top != -1) {
                int curr = stack[top--];
                if (!visited[curr]) {
                        visited[curr] = true;
                        cout << curr << ' ';

                        for (int next = 0; next < N; next++) {
                                if (!visited[next] && graph[curr][next]) {
                                        stack[++top] = next;
                                }
                        }
                }
        }
}
