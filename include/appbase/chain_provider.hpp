#pragma once

namespace eosio { namespace chain {
    class controller;
}}

namespace fc {
    class microseconds;
}

namespace appbase {
    struct chain_provider {
        virtual ~chain_provider() = default;

        virtual eosio::chain::controller& chain() = 0;

        virtual fc::microseconds get_abi_serializer_max_time() const = 0;

    };

}
