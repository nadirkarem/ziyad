#include <stdio.h> 
#include <time.h> 

int heure() {
    /* 
       renvoie l'heure dans le pays o� l'on se trouve en supposant que 
       l'heure systeme est universelle
    */
    time_t tt;
    struct tm *t;
    
    tt = time (NULL);
    t = gmtime(&tt);
    
    return (t -> tm_hour);
}