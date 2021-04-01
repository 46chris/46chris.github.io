**Quick Access**  **|** [Unity](#unity) **|** [School](#school) **|** [About Me](#about-me) **|** 
# Projects
## Unity 
### "Office Hours" 
![Photo](/images/screamJam.png)  
**Description**: A game I contributed to which was submitted to "screamJam2020" on itch.io  
[*Link*](https://viridian01.itch.io/office-hours) to play the game  

## School   

> "Start early, start often"  
 
![Photo](/images/CSEBear.jpg)  
### Uptree  
*Preview of find method: *  
```
//Find with path compression recursively 
string find(string node){ 
    if(upArr[node] == node){ 
        return node; 
    }
    //Recursion 
    string sentinel = find(upArr[node]); 

    //Recursively path compress 
    upArr[node] = sentinel; 

    return sentinel;
}
```

**Description**: An implementation of an Uptree I wrote for CSE 100   
[Check it out in the repo](/projects/upTree.cpp)

# About Me
Languages I'm familiar with  
- C++
- C
- Java  

Languages I've used  
- Html
- CSS
- C#

My Academic Task List  
- [x] Finish high school
- [x] Go to college 
- [ ] Graduate college 
- [ ] Get a job
