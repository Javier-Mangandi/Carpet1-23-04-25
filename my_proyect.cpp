#include <iostream>
using namespace std;

int main(){
int gradeNumber;
cout << "ingrese la notad el estudiante" << endl;
cin >> gradeNumber;

if (gradeNumber < 0 || gradeNumber > 100){
    cout << "La nota ingresada esta fuera de los parametros, ingresela nuevamente" << endl;
    cin >> gradeNumber;
}

if (gradeNumber < 50){
    cout << "Lastimosamente, desaprobaste la materia, pero no te preocupes, despues de la tempestad, siempre hay algo mejor." << endl;
}
else if(gradeNumber >= 50 && gradeNumber < 60) {
    cout << "Apenas has aprobado, animos, esta en tus manos mejorar y superarte cada dia." << endl;
}
else if(gradeNumber >= 60 && gradeNumber < 75) {
    cout << "Has aprobado, muchas felicidades, tu trabajo esta rindiendo frutos." << endl;
}
else if(gradeNumber >= 75 && gradeNumber < 84) {
    cout << "Lo has hecho muy bien, tus resultados son buenos, recuerda, que siempre se puede mejorar, pero eso no te quita lo bueno." << endl;
}
else if(gradeNumber >= 84 && gradeNumber < 94) {
    cout << "Muy bien, tu nota ha sido muy buena, estas muy cerca de la perfeccion, fuerzas campeon." << endl;
}
else{
    cout << "Excelente, se te felicita por ser un estudiando excelente, muchas felicitaciones.";
}


    return 0;
}