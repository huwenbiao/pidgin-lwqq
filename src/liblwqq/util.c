#include "util.h"
#include "smemory.h"

void lwqq_ct_free(LwqqConfirmTable* table)
{
    if(table){
        s_free(table->title);
        s_free(table->body);
        s_free(table->input_label);
        s_free(table->exans_label);
        s_free(table->input);
        s_free(table);
    }
}
