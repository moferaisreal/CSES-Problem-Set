document.getElementById("generateWeirdness").addEventListener("click", (e) => {
  e.preventDefault();

  let weirdNumber = document.getElementById("number");
  let num = parseInt(weirdNumber.value);
  let outputElement = document.getElementById("weirdnessOutput");

  if (isNaN(num) || num <= 0) {
    outputElement.innerHTML = "Please enter a valid positive number!";
    return;
  }

  let outputArray = [num];

  while (num !== 1) {
    if (num % 2 === 0) {
      num = num / 2;
    } else {
      num = num * 3 + 1;
    }
    outputArray.push(num);
  }

  outputElement.innerHTML = outputArray;
});
