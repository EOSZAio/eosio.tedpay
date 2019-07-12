#include <eosio/eosio.hpp>

using namespace eosio;

class [[eosio::contract("eosio.tedpay")]] tedp_pay : public contract {
public:
    using contract::contract;

    [[eosio::action]]
    void hi( name user ) {
        print( "Hello, ", user);
    }
};