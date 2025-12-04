class TopVotedCandidate {

    int [] times;
    int [] leaders;
    public TopVotedCandidate(int[] persons, int[] times) {
        this.times = times;
        leaders = new int[persons.length];

        int leader = -1;
        int leaderVote = 0;
        Map<Integer,Integer> count = new HashMap<>();

        for(int i=0;i<persons.length;i++){
            
            int p = persons[i];
            count.put(p,count.getOrDefault(p,0)+1);

            if(count.get(p) >= leaderVote){
                leader = p;
                leaderVote = count.get(p);
            }

            leaders[i] = leader;
        }
    }
    
    public int q(int t) {
        
        int low = 0,high = times.length-1;

        while( low <= high){

            int mid = low + (high-low)/2;

            if(times[mid] <= t){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }

        return leaders[high];
    }
}

/**
 * Your TopVotedCandidate object will be instantiated and called as such:
 * TopVotedCandidate obj = new TopVotedCandidate(persons, times);
 * int param_1 = obj.q(t);
 */
