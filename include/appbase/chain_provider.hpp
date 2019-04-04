#pragma once

namespace cyberway { namespace chaindb {
    class chaindb_controller;
}}

namespace eosio { namespace chain {
    class authorization_manager;
}}

namespace fc {
    class microseconds;
}

namespace appbase {
    struct chain_provider {
        virtual ~chain_provider() = default;

        virtual cyberway::chaindb::chaindb_controller& get_chaindb() = 0;

        virtual const eosio::chain::authorization_manager& get_authorization_manager() const = 0;

        virtual fc::microseconds get_abi_serializer_max_time() const = 0;

    };

}
