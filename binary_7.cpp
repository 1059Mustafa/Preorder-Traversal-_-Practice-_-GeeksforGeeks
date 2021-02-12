vector <int> preorder(Node* root)
{
  stack<Node*>s;
  vector<int>v;
  Node* curr=root;
  while(curr!=NULL||s.size()>0)
  {
      while(curr!=NULL)
      {
          v.push_back(curr->data);
          s.push(curr);
          curr=curr->left;
      }
      curr=s.top();
      s.pop();
      curr=curr->right;
      
  }
  return v;
  
}
