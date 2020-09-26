vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector<int> ans;
   int row=A.size();int col=A[0].size(),d=0;
    int l=0,r=col-1;
    int t=0,b=row-1;
    while(l<=r&&t<=b){
        if(d==0){
            for(int i=l;i<=r;i++){
                ans.push_back(A[t][i]);
            }
            d=1;t++;
        }else if(d==1){
            for(int i=t;i<=b;i++){
                ans.push_back(A[i][r]);
            }
            d=2;r--;
        }else if(d==2){
            for(int i=r;i>=l;i--){
                ans.push_back(A[b][i]);
            }
            d=3;b--;
        }else if(d==3){
            for(int i=b;i>=t;i--){
                ans.push_back(A[i][l]);
            }
            d=0;l++;
        }
    }
    return ans;
    }
