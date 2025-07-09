class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
        // code here
        StackNode* newNode=new StackNode(x);
        if(!newNode){
            return;}
            newNode->next=top;
            top=newNode;
        }
    

    int pop() {
        if(top==NULL){
            return -1;
        }else{
            int popped =top->data;
            StackNode*temp =top;
            top=top->next;
            delete temp;
            return popped;
        }
        // code here
    }

    MyStack() { top = NULL; }
};