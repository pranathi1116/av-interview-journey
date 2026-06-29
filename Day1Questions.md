1. Why is RAII considered one of the greatest strengths of C++?
2. Answer: because RAII eliminates resource leaks, need for garbage collector and it manages finite sysrem resource instaed of making manually handling them.
3. Why should make_unique() generally be preferred over new?
4. Answer: It handles safe deallocation when no longer in use
5. Suppose two modules both need access to the same Sensor object.
Would you use:
unique_ptr
shared_ptr
raw pointer
Why?
Answer: I would use shared_ptr as we need to share the ownership of same object (sensor). It allows multilple pointers to share ownership while using reference counting to track

7. Imagine you're designing a Track Manager.
Each track has:
ID
Position
Velocity
Confidence
Tracks are created and deleted continuously.
How would you store them?
Example options:
vector<Track>

vector<Track*>

vector<unique_ptr<Track>>

unordered_map<int, Track>

...

Answer: I would use a vector of unique_pts as with this we can store Track objects as diferent objects without the overhead of managing memory when deletions happen. 
