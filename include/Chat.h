#pragma once
#include <iostream>
#include "Client.h"
#include "Message.h"
#include <vector>

struct Chat{
    std::vector<Message> messages;
    std::string name;
    std::string password;
    int port;
    uint chat_id;
    Chat(int Port):port(Port)
    {

    }
    Chat()
    {

    }
};