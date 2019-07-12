add_contract(eosio.tedpay eosio.tedpay
   ${CMAKE_CURRENT_SOURCE_DIR}/src/eosio.tedpay.cpp
   )

target_compile_options(eosio.tedpay.wasm PUBLIC -fcolor-diagnostics)

target_include_directories(eosio.tedpay.wasm
   PUBLIC
   ${CMAKE_CURRENT_SOURCE_DIR}/include)

set_target_properties(eosio.tedpay.wasm
   PROPERTIES
   RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")
