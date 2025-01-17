#pragma once

#include <string>
#include <vector>

#include "Abbreviations.h"
#include "Adjectives.h"
#include "faker-cxx/Helper.h"
#include "fmt/format.h"
#include "Ingverbs.h"
#include "Nouns.h"
#include "Verbs.h"

namespace faker
{
// use fmt::format() to format each phrase w/ random word

const std::vector<std::string> phrases = {
    "If we {verb} the {noun}, we can get to the {abbreviation} {noun} through the {adjective} {abbreviation} {noun}!",
    "We need to {verb} the {adjective} {abbreviation} {noun}!",
    "Try to {verb} the {abbreviation} {noun}, maybe it will {verb} the {adjective} {noun}!",
    "You can't {verb} the {noun} without {ingverb} the {adjective} {abbreviation} {noun}!",
    "Use the {adjective} {abbreviation} {noun}, then you can {verb} the {adjective} {noun}!",
    "The {abbreviation} {noun} is down, {verb} the {adjective} {noun} so we can {verb} the {abbreviation} {noun}!",
    "{ingverb} the {noun} won't do anything, we need to {verb} the {adjective} {abbreviation} {noun}!",
    "I'll {verb} the {adjective} {abbreviation} {noun}, that should {noun} the {abbreviation} {noun}!",
};
}
