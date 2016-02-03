#include <stdio.h>

#include "bandstack.h"
#include "band.h"
#include "filter.h"
#include "mode.h"
#include "xvtr.h"
#include "alex.h"
#include "property.h"

int band=band20;
int xvtr_band=band160;

/* --------------------------------------------------------------------------*/
/**
* @brief bandstack
*/
/* ----------------------------------------------------------------------------*/
BANDSTACK_ENTRY bandstack_entries160[] =
    {{1810000LL,modeCWL,filterF4,-2800,-200,-2800,-200},
     {1835000LL,modeCWU,filterF0,-2800,-200,-2800,-200},
     {1845000LL,modeUSB,filterF5,-2800,-200,-2800,-200}};

BANDSTACK_ENTRY bandstack_entries80[] =
    {{3501000LL,modeCWL,filterF0,-2800,-200,-2800,-200},
     {3751000LL,modeLSB,filterF5,-2800,-200,-2800,-200},
     {3850000LL,modeLSB,filterF5,-2800,-200,-2800,-200}};

BANDSTACK_ENTRY bandstack_entries60[] =
    {{5330500LL,modeUSB,filterF5,-2800,-200,-2800,-200},
     {5346500LL,modeUSB,filterF5,-2800,-200,-2800,-200},
     {5366500LL,modeUSB,filterF5,-2800,-200,-2800,-200},
     {5371500LL,modeUSB,filterF5,-2800,-200,-2800,-200},
     {5403500LL,modeUSB,filterF5,-2800,-200,-2800,-200}};

BANDSTACK_ENTRY bandstack_entries40[] =
    {{7001000LL,modeCWL,filterF0,-2800,-200,-2800,-200},
     {7152000LL,modeLSB,filterF5,-2800,-200,-2800,-200},
     {7255000LL,modeLSB,filterF5,-2800,-200,-2800,-200}};

BANDSTACK_ENTRY bandstack_entries30[] =
    {{10120000LL,modeCWU,filterF0,200,2800,200,2800},
     {10130000LL,modeCWU,filterF0,200,2800,200,2800},
     {10140000LL,modeCWU,filterF4,200,2800,200,2800}};

BANDSTACK_ENTRY bandstack_entries20[] =
    {{14010000LL,modeCWU,filterF0,200,2800,200,2800},
     {14230000LL,modeUSB,filterF5,200,2800,200,2800},
     {14336000LL,modeUSB,filterF5,200,2800,200,2800}};

BANDSTACK_ENTRY bandstack_entries18[] =
    {{18068600LL,modeCWU,filterF0,200,2800,200,2800},
     {18125000LL,modeUSB,filterF5,200,2800,200,2800},
     {18140000LL,modeUSB,filterF5,200,2800,200,2800}};

BANDSTACK_ENTRY bandstack_entries15[] =
    {{21001000LL,modeCWU,filterF0,200,2800,200,2800},
     {21255000LL,modeUSB,filterF5,200,2800,200,2800},
     {21300000LL,modeUSB,filterF5,200,2800,200,2800}};

BANDSTACK_ENTRY bandstack_entries12[] =
    {{24895000LL,modeCWU,filterF0,200,2800,200,2800},
     {24900000LL,modeUSB,filterF5,200,2800,200,2800},
     {24910000LL,modeUSB,filterF5,200,2800,200,2800}};

BANDSTACK_ENTRY bandstack_entries10[] =
    {{28010000LL,modeCWU,filterF0,200,2800,200,2800},
     {28300000LL,modeUSB,filterF5,200,2800,200,2800},
     {28400000LL,modeUSB,filterF5,200,2800,200,2800}};

BANDSTACK_ENTRY bandstack_entries50[] =
    {{50010000LL,modeCWU,filterF0,200,2800,200,2800},
     {50125000LL,modeUSB,filterF5,200,2800,200,2800},
     {50200000LL,modeUSB,filterF5,200,2800,200,2800}};

BANDSTACK_ENTRY bandstack_entriesGEN[] =
    {{909000LL,modeAM,filterF6,-6000,6000,-6000,60000},
     {5975000LL,modeAM,filterF6,-6000,6000,-6000,60000},
     {13845000LL,modeAM,filterF6,-6000,6000,-6000,60000}};

BANDSTACK_ENTRY bandstack_entriesWWV[] =
    {{2500000LL,modeSAM,filterF6,200,2800,200,2800},
     {5000000LL,modeSAM,filterF6,200,2800,200,2800},
     {10000000LL,modeSAM,filterF6,200,2800,200,2800},
     {15000000LL,modeSAM,filterF6,200,2800,200,2800},
     {20000000LL,modeSAM,filterF6,200,2800,200,2800}};

BANDSTACK bandstack160={3,1,bandstack_entries160};
BANDSTACK bandstack80={3,1,bandstack_entries80};
BANDSTACK bandstack60={5,1,bandstack_entries60};
BANDSTACK bandstack40={3,1,bandstack_entries40};
BANDSTACK bandstack30={3,1,bandstack_entries30};
BANDSTACK bandstack20={3,1,bandstack_entries20};
BANDSTACK bandstack18={3,1,bandstack_entries18};
BANDSTACK bandstack15={3,1,bandstack_entries15};
BANDSTACK bandstack12={3,1,bandstack_entries12};
BANDSTACK bandstack10={3,1,bandstack_entries10};
BANDSTACK bandstack50={3,1,bandstack_entries50};
BANDSTACK bandstackGEN={3,1,bandstack_entriesGEN};
BANDSTACK bandstackWWV={5,1,bandstack_entriesWWV};

BAND bands[BANDS] = 
    {{"160",&bandstack160,0,0,0,ALEX_RX_ANTENNA_NONE,ALEX_TX_ANTENNA_1,ALEX_ATTENUATION_0dB},
     {"80",&bandstack80,0,0,0,ALEX_RX_ANTENNA_NONE,ALEX_TX_ANTENNA_1,ALEX_ATTENUATION_0dB},
     {"60",&bandstack60,0,0,0,ALEX_RX_ANTENNA_NONE,ALEX_TX_ANTENNA_1,ALEX_ATTENUATION_0dB},
     {"40",&bandstack40,0,0,0,ALEX_RX_ANTENNA_NONE,ALEX_TX_ANTENNA_1,ALEX_ATTENUATION_0dB},
     {"30",&bandstack30,0,0,0,ALEX_RX_ANTENNA_NONE,ALEX_TX_ANTENNA_1,ALEX_ATTENUATION_0dB},
     {"20",&bandstack20,0,0,0,ALEX_RX_ANTENNA_NONE,ALEX_TX_ANTENNA_1,ALEX_ATTENUATION_0dB},
     {"18",&bandstack18,0,0,0,ALEX_RX_ANTENNA_NONE,ALEX_TX_ANTENNA_1,ALEX_ATTENUATION_0dB},
     {"15",&bandstack15,0,0,0,ALEX_RX_ANTENNA_NONE,ALEX_TX_ANTENNA_1,ALEX_ATTENUATION_0dB},
     {"12",&bandstack12,0,0,0,ALEX_RX_ANTENNA_NONE,ALEX_TX_ANTENNA_1,ALEX_ATTENUATION_0dB},
     {"10",&bandstack10,0,0,0,ALEX_RX_ANTENNA_NONE,ALEX_TX_ANTENNA_1,ALEX_ATTENUATION_0dB},
     {"50",&bandstack50,0,0,0,ALEX_RX_ANTENNA_NONE,ALEX_TX_ANTENNA_1,ALEX_ATTENUATION_0dB},
     {"GEN",&bandstackGEN,0,0,0,ALEX_RX_ANTENNA_NONE,ALEX_TX_ANTENNA_1,ALEX_ATTENUATION_0dB},
     {"WWV",&bandstackWWV,0,0,0,ALEX_RX_ANTENNA_NONE,ALEX_TX_ANTENNA_1,ALEX_ATTENUATION_0dB}};

#define NUM_BAND_LIMITS 22

BAND_LIMITS bandLimits[NUM_BAND_LIMITS] = {
    {1800000LL,2000000LL},
    {3500000LL,4000000LL},
    {5330500LL,5403500LL},
    {7000000LL,7300000LL},
    {10100000LL,10150000LL},
    {14000000LL,14350000LL},
    {18068000LL,18168000LL},
    {21000000LL,21450000LL},
    {24890000LL,24990000LL},
    {28000000LL,29700000LL},
    {50000000LL,54000000LL},
    {144000000LL,148000000LL},
    {222000000LL,224980000LL},
    {420000000LL,450000000LL},
    {902000000LL,928000000LL},
    {1240000000LL,1300000000LL},
    {2300000000LL,2450000000LL},
    {3456000000LL,3456400000LL},
    {5760000000LL,5760400000LL},
    {10368000000LL,10368400000LL},
    {24192000000LL,24192400000LL},
    {47088000000LL,47088400000LL}
};

/* --------------------------------------------------------------------------*/
/**
* @brief xvtr
*/
/* ----------------------------------------------------------------------------*/
static XVTR_ENTRY xvtr[12]=
    {{"",0LL,0LL,0LL,0LL,0LL,0LL,0LL,0LL,0,modeUSB,filterF5,-2800,-200,-2800,-200,0,0,0,0},
     {"",0LL,0LL,0LL,0LL,0LL,0LL,0LL,0LL,0,modeUSB,filterF5,-2800,-200,-2800,-200,0,0,0,0},
     {"",0LL,0LL,0LL,0LL,0LL,0LL,0LL,0LL,0,modeUSB,filterF5,-2800,-200,-2800,-200,0,0,0,0},
     {"",0LL,0LL,0LL,0LL,0LL,0LL,0LL,0LL,0,modeUSB,filterF5,-2800,-200,-2800,-200,0,0,0,0},
     {"",0LL,0LL,0LL,0LL,0LL,0LL,0LL,0LL,0,modeUSB,filterF5,-2800,-200,-2800,-200,0,0,0,0},
     {"",0LL,0LL,0LL,0LL,0LL,0LL,0LL,0LL,0,modeUSB,filterF5,-2800,-200,-2800,-200,0,0,0,0},
     {"",0LL,0LL,0LL,0LL,0LL,0LL,0LL,0LL,0,modeUSB,filterF5,-2800,-200,-2800,-200,0,0,0,0},
     {"",0LL,0LL,0LL,0LL,0LL,0LL,0LL,0LL,0,modeUSB,filterF5,-2800,-200,-2800,-200,0,0,0,0},
     {"",0LL,0LL,0LL,0LL,0LL,0LL,0LL,0LL,0,modeUSB,filterF5,-2800,-200,-2800,-200,0,0,0,0},
     {"",0LL,0LL,0LL,0LL,0LL,0LL,0LL,0LL,0,modeUSB,filterF5,-2800,-200,-2800,-200,0,0,0,0},
     {"",0LL,0LL,0LL,0LL,0LL,0LL,0LL,0LL,0,modeUSB,filterF5,-2800,-200,-2800,-200,0,0,0,0},
     {"",0LL,0LL,0LL,0LL,0LL,0LL,0LL,0LL,0,modeUSB,filterF5,-2800,-200,-2800,-200,0,0,0,0}};


BANDSTACK_ENTRY *bandstack_entry_get_current() {
    BANDSTACK *bandstack=bands[band].bandstack;
    BANDSTACK_ENTRY *entry=&bandstack->entry[bandstack->current_entry];
    return entry;
}

BANDSTACK_ENTRY *bandstack_entry_next() {
    BANDSTACK *bandstack=bands[band].bandstack;
    bandstack->current_entry++;
    if(bandstack->current_entry==bandstack->entries) {
        bandstack->current_entry=0;
    }
    BANDSTACK_ENTRY *entry=&bandstack->entry[bandstack->current_entry];
    return entry;
}

int band_get_current() {
    return band;
}

BAND *band_get_current_band() {
    BAND *b=&bands[band];
    return b;
}

BAND *band_get_band(int b) {
    BAND *band=&bands[b];
    return band;
}

BAND *band_set_current(int b) {
    band=b;
    return &bands[b];
}


void bandSaveState() {
    char name[128];
    char value[128];
    int current;
    BANDSTACK_ENTRY* entry;

    int b;
    int stack;
    for(b=0;b<BANDS;b++) {
        sprintf(value,"%d",bands[b].bandstack->entries);
        sprintf(name,"band.%d.entries",b);
        setProperty(name,value);

        sprintf(value,"%d",bands[b].bandstack->current_entry);
        sprintf(name,"band.%d.current",b);
        setProperty(name,value);

        sprintf(value,"%d",bands[b].preamp);
        sprintf(name,"band.%d.preamp",b);
        setProperty(name,value);

        sprintf(value,"%ld",bands[b].alexRxAntenna);
        sprintf(name,"band.%d.alexRxAntenna",b);
        setProperty(name,value);

        sprintf(value,"%ld",bands[b].alexTxAntenna);
        sprintf(name,"band.%d.alexTxAntenna",b);
        setProperty(name,value);

        sprintf(value,"%ld",bands[b].alexAttenuation);
        sprintf(name,"band.%d.alexAttenuation",b);
        setProperty(name,value);

        for(stack=0;stack<bands[b].bandstack->entries;stack++) {
            entry=bands[b].bandstack->entry;
            entry+=stack;

            sprintf(value,"%lld",entry->frequencyA);
            sprintf(name,"band.%d.stack.%d.a",b,stack);
            setProperty(name,value);

            sprintf(value,"%d",entry->mode);
            sprintf(name,"band.%d.stack.%d.mode",b,stack);
            setProperty(name,value);

            sprintf(value,"%d",entry->filter);
            sprintf(name,"band.%d.stack.%d.filter",b,stack);
            setProperty(name,value);

            sprintf(value,"%d",entry->var1Low);
            sprintf(name,"band.%d.stack.%d.var1Low",b,stack);
            setProperty(name,value);

            sprintf(value,"%d",entry->var1High);
            sprintf(name,"band.%d.stack.%d.var1High",b,stack);
            setProperty(name,value);

            sprintf(value,"%d",entry->var2Low);
            sprintf(name,"band.%d.stack.%d.var2Low",b,stack);
            setProperty(name,value);

            sprintf(value,"%d",entry->var2High);
            sprintf(name,"band.%d.stack.%d.var2High",b,stack);
            setProperty(name,value);

        }
    }

    sprintf(value,"%d",band);
    setProperty("band",value);
}

void bandRestoreState() {
    char* value;

    int b;
    int stack;
    char name[128];
    BANDSTACK_ENTRY* entry;
    int current;


    for(b=0;b<BANDS;b++) {
        sprintf(name,"band.%d.entries",b);
        value=getProperty(name);
        if(value) bands[b].bandstack->entries=atoi(value);

        sprintf(name,"band.%d.current",b);
        value=getProperty(name);
        if(value) bands[b].bandstack->current_entry=atoi(value);

        sprintf(name,"band.%d.preamp",b);
        value=getProperty(name);
        if(value) bands[b].preamp=atoi(value);

        sprintf(name,"band.%d.alexRxAntenna",b);
        value=getProperty(name);
        if(value) bands[b].alexRxAntenna=atoi(value);

        sprintf(name,"band.%d.alexTxAntenna",b);
        value=getProperty(name);
        if(value) bands[b].alexTxAntenna=atoi(value);

        sprintf(name,"band.%d.alexAttenuation",b);
        value=getProperty(name);
        if(value) bands[b].alexAttenuation=atoi(value);
        for(stack=0;stack<bands[b].bandstack->entries;stack++) {
            entry=bands[b].bandstack->entry;
            entry+=stack;

            sprintf(name,"band.%d.stack.%d.a",b,stack);
            value=getProperty(name);
            if(value) entry->frequencyA=atoll(value);

            sprintf(name,"band.%d.stack.%d.mode",b,stack);
            value=getProperty(name);
            if(value) entry->mode=atoi(value);

            sprintf(name,"band.%d.stack.%d.filter",b,stack);
            value=getProperty(name);
            if(value) entry->filter=atoi(value);

            sprintf(name,"band.%d.stack.%d.var1Low",b,stack);
            value=getProperty(name);
            if(value) entry->var1Low=atoi(value);

            sprintf(name,"band.%d.stack.%d.var1High",b,stack);
            value=getProperty(name);
            if(value) entry->var1High=atoi(value);

            sprintf(name,"band.%d.stack.%d.var2Low",b,stack);
            value=getProperty(name);
            if(value) entry->var2Low=atoi(value);

            sprintf(name,"band.%d.stack.%d.var2High",b,stack);
            value=getProperty(name);
            if(value) entry->var2High=atoi(value);

        }
    }
    value=getProperty("band");
    if(value) band=atoi(value);
}

