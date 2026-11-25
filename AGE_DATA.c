MaillonAge *creer_maillon(unsigned char age)
{
    MaillonAge *nouveau;

    nouveau = malloc(sizeof(MaillonAge));

    if (nouveau == NULL)
    {
        return NULL;
    }

    nouveau->age = age;

    nouveau->total = 0;

    nouveau->conducteurs = 0;
    nouveau->passagers = 0;
    nouveau->pietons = 0;

    nouveau->hommes = 0;
    nouveau->femmes = 0;

    nouveau->conducteurs_hommes = 0;
    nouveau->conducteurs_femmes = 0;

    nouveau->passagers_hommes = 0;
    nouveau->passagers_femmes = 0;

    nouveau->pietons_hommes = 0;
    nouveau->pietons_femmes = 0;

    nouveau->suivant = NULL;

    return nouveau;
}
