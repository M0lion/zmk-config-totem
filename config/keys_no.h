#pragma once
#include <dt-bindings/zmk/keys.h>

// Norwegian characters
#define NO_AE SEMI // æ
#define NO_OE APOS // ø 
#define NO_AA LBKT // å

// Symbols in different positions
#define NO_PIPE GRAVE // |
#define NO_PLUS MINUS // +
#define NO_BSLS EQUAL // \ (backslash)
#define NO_DIAE RBKT  // ¨ (diaeresis dead key)
#define NO_LABK NUBS  // < (less than)
#define NO_MINS FSLH  // - (minus/hyphen)
#define NO_SQT  NUHS

// Shifted versions of repositioned keys
#define NO_SECT LS(GRAVE) // § (section)
#define NO_QUES LS(MINUS) // ?
#define NO_ASTR LS(EQUAL) // * (asterisk)
#define NO_CIRC LS(RBKT)  // ^ (circumflex)
#define NO_HALF LS(NUBS)  // ½ (half)
#define NO_UNDS LS(FSLH)  // _ (underscore)

// Common AltGr symbols
#define NO_AT  RA(N2)   // @
#define NO_DLR  RA(N4)   // $
#define NO_EURO RA(N5)   // €
#define NO_LCBR RA(N7)   // {
#define NO_LBRC RA(N8)   // [
#define NO_RBRC RA(N9)   // ]
#define NO_RCBR RA(N0)   // }
#define NO_TILD RA(RBKT) // ~

// Shifted symbols 
#define NO_AMPS LS(N6) // &
#define NO_DQT LS(N2)  // "
