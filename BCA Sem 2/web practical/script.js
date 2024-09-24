document.addEventListener('DOMContentLoaded', function() {
    var button = document.getElementById('btn');
    var searchInput = document.getElementById('search');

    button.addEventListener('click', function() {
        document.body.style.backgroundColor = 'red';
    });
});
