struct contact_persons
{
   int contact_person_id[5];
   char first_name[10];
   char last_name[10];
   char email[25];
};
struct contact_person_details
{
    int contact_id[5];
    char contact_name[20];
    char street[30];
    char area[10];
    char city[10];
    struct contact_persons persons[2];
};
