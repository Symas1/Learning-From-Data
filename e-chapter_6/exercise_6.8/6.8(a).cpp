point branch_and_bound(Points[], x){
    if(Points.size()==0)return null;
    else if(Points.size()==1)return Points[0];

    Points[]p1,Points[]p2,mu1,mu2,r1,r2 divide_into_two_clusters(Points[]); // divide so ||x-mu1||+r1 <= ||x-mu2||-r2

    return branch_and_bound(p1,x); 
}