#ifndef __UDPSENDER_H__
#define __UDPSENDER_H__

#include <cstdint>
#include <string>
#include <vector>

namespace net {
class UdpSender {
  public:
    static bool send(const std::string &msg, const std::uint16_t localPort,
                     const std::string &remoteAddr,
                     const std::uint16_t remotePort);

    static bool send(const std::vector<std::uint8_t> &bytes,
                     const std::uint16_t localPort,
                     const std::string &remoteAddr,
                     const std::uint16_t remotePort);
};
} // namespace net

#endif // __UDPSENDER_H__