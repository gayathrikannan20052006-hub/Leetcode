class MyStack {
    int top=-1;
    int []arr= new int[100];;
    public MyStack() {
    }
    public void push(int x) {
        arr[++top]=x;
    }
    public int pop() {
        int val;
        val=arr[top];
        top--;
        return val;
    }
    public int top() {
        int v = arr[top];
        return v;   
    }
    public boolean empty() {
        if(top==-1){
            return true;
        }   
        else{
            return false;
        }
    }
}
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */
