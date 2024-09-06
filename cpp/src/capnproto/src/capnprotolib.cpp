#include <iostream>
#include <capnp/message.h>

#include "../idl/person.cpnp.h"

#include "../include/capnprotolib.h"



int getPerson() {
    capnp::MallocMessageBuilder message;

    AddressBook::Builder addressBook = message.initRoot<AddressBook>();
    capnp::List<Person>::Builder people = addressBook.initPeople(1);

    Person::Builder alice = people[0];
    alice.setId(123);
    alice.setName("Alice");
    alice.setEmail("alice@example.com");
    
    auto reader = alice.asReader();

    std::cout << "Person:" << reader.getName().cStr();

    return 10;
}
