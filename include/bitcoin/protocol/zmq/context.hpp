/*
 * Copyright (c) 2011-2016 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin-protocol.
 *
 * libbitcoin-protocol is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License with
 * additional permissions to the one published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) 
 * any later version. For more information see LICENSE.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBBITCOIN_PROTOCOL_ZMQ_CONTEXT_HPP
#define LIBBITCOIN_PROTOCOL_ZMQ_CONTEXT_HPP

#include <cstdint>
#include <bitcoin/protocol/define.hpp>

namespace libbitcoin {
namespace protocol {
namespace zmq {

class BCP_API context
{
public:
    /// Construct a context.
    context();

    /// Cause all sockets of this context to close.
    ~context();

    /// This class is not copyable.
    context(const context&) = delete;
    void operator=(const context&) = delete;

    /// True if the context construction was successful.
    operator const bool() const;

    /// The underlying zeromq context.
    void* self();

private:
    bool destroy();

    int32_t threads_;
    void* self_;
};

} // namespace zmq
} // namespace protocol
} // namespace libbitcoin

#endif

