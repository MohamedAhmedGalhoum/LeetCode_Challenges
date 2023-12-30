bool makeEqual(vector<string>& words) {
      int cnt[26]{} , n = words.size();
      for(auto s : words) for(auto c : s) cnt[c - 'a']++;
      for(auto it : cnt) if(it % n != 0) return false;
      return true;
  }
