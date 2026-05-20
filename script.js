const startButton = document.getElementById('startButton');
const learnButton = document.getElementById('learnButton');

if (startButton) {
  startButton.addEventListener('click', () => {
    alert('Get Started clicked! Customize this action in script.js.');
  });
}

if (learnButton) {
  learnButton.addEventListener('click', () => {
    window.scrollTo({ top: document.body.scrollHeight, behavior: 'smooth' });
  });
}
