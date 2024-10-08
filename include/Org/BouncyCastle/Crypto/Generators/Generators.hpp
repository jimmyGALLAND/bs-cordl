#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Org/BouncyCastle/Crypto/Generators/BCrypt.hpp"
#include "Org/BouncyCastle/Crypto/Generators/BaseKdfBytesGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/DHBasicKeyPairGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/DHKeyGeneratorHelper.hpp"
#include "Org/BouncyCastle/Crypto/Generators/DHKeyPairGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/DHParametersGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/DHParametersHelper.hpp"
#include "Org/BouncyCastle/Crypto/Generators/DesEdeKeyGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/DesKeyGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/DsaKeyPairGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/DsaParametersGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/ECKeyPairGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/Ed25519KeyPairGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/Ed448KeyPairGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/ElGamalKeyPairGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/ElGamalParametersGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/Gost3410KeyPairGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/Gost3410ParametersGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/HkdfBytesGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/Kdf1BytesGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/Kdf2BytesGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/KdfCounterBytesGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/KdfDoublePipelineIterationBytesGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/KdfFeedbackBytesGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/Mgf1BytesGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/NaccacheSternKeyPairGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/OpenBsdBCrypt.hpp"
#include "Org/BouncyCastle/Crypto/Generators/OpenSslPbeParametersGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/Pkcs12ParametersGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/Pkcs5S1ParametersGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/Pkcs5S2ParametersGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/Poly1305KeyGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/RsaBlindingFactorGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/RsaKeyPairGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/SCrypt.hpp"
#include "Org/BouncyCastle/Crypto/Generators/X25519KeyPairGenerator.hpp"
#include "Org/BouncyCastle/Crypto/Generators/X448KeyPairGenerator.hpp"
#ifdef __cpp_modules
                    export module Generators;
                    #endif
                
