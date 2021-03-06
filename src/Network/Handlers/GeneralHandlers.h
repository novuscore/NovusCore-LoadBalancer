#pragma once
#include <memory>

class MessageHandler;
class NetworkClient;
struct NetworkPacket;
namespace InternalSocket
{
    class GeneralHandlers
    {
    public:
        static void Setup(MessageHandler*);
        static bool HandleConnected(std::shared_ptr<NetworkClient>, std::shared_ptr<NetworkPacket>&);
        static bool HandleRequestAddress(std::shared_ptr<NetworkClient>, std::shared_ptr<NetworkPacket>&);
        static bool HandleFullServerInfoUpdate(std::shared_ptr<NetworkClient>, std::shared_ptr<NetworkPacket>&);
        static bool HandleServerInfoAdd(std::shared_ptr<NetworkClient>, std::shared_ptr<NetworkPacket>&);
        static bool HandleServerInfoRemove(std::shared_ptr<NetworkClient>, std::shared_ptr<NetworkPacket>&);
    };
}