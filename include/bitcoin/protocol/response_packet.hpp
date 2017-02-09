/**
 * Copyright (c) 2011-2017 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifdef LIBBITCOIN_VERSION4

#ifndef LIBBITCOIN_PROTOCOL_RESPONSE_PACKET
#define LIBBITCOIN_PROTOCOL_RESPONSE_PACKET

#include <memory>
#include <bitcoin/bitcoin.hpp>
#include <bitcoin/protocol/define.hpp>
#include <bitcoin/protocol/interface.pb.h>
#include <bitcoin/protocol/packet.hpp>
#include <bitcoin/protocol/zmq/message.hpp>

namespace libbitcoin {
namespace protocol {

class BCP_API response_packet
  : public packet
{
public:
    response_packet();

    std::shared_ptr<response> get_response() const;
    void set_response(std::shared_ptr<response> response);

protected:
    virtual bool encode_payload(zmq::message& message) const;
    virtual bool decode_payload(const data_chunk& payload);

private:
    std::shared_ptr<response> response_;
};

}
}

#endif

#endif
