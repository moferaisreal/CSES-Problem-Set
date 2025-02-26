document.getElementById("generateWeirdness").addEventListener("click", (e) => {
  e.preventDefault();

  let num = document.getElementById("number");
  let weirdNumber = parseInt(num.value);
  let outputElement = document.getElementById("weirdnessOutput");
  if (isNaN(weirdNumber) || weirdNumber <= 0) {
    outputElement.innerHTML = "Please enter a valid positive number!";
    return;
  }

  let outputArray = [weirdNumber];

  while (weirdNumber !== 1) {
    if (weirdNumber % 2 === 0) {
      weirdNumber = weirdNumber / 2;
    } else {
      weirdNumber = weirdNumber * 3 + 1;
    }
    outputArray.push(weirdNumber);
  }

  outputElement.innerHTML = outputArray;
});
