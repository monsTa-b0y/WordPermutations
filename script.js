










function takeInput() {
    var x = document.getElementById("input");
    var digits = x.value;
    //document.getElementById("display").innerHTML = "Entered String is "
    //document.getElementById("demo").innerHTML = digits;
    Combinations(digits);

  }

var Combinations = function(digits){
    //console.log(input);
    //console.log(digits);
    const letters = {
        0:[],
        1:[],
        2:['a','b','c'],
        3:['d','e','f'],
        4:['g','h','i'],
        5:['j','k','l'],
        6:['m','n','o'],
        7:['p','q','r','s'],
        8:['t','u','v'],
        9:['w','x','y','z']
    };
    //console.log(letters)
    const result = [];
    //console.log(digits.length)
        const backtrack = (i, prefix) => {
        //console.log(mani)
        if(i > digits.length - 1){
            result.push(prefix);
            return;
        }
        const digit = digits[i];
        //console.log(digit, letters[digit])
        for(let char of letters[digit]){
            backtrack(i+1, prefix + char);
        }
    }
    if(digits.length){
        //console.log("if statement")
        backtrack(0, '');
    }
   //console.log(result);
   document.getElementById("output").innerHTML = result;
   console.log(result.length)
    //return result
};



