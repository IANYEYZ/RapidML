#ifndef _RAPID_ML_HPP_
#define _RAPID_ML_HPP_
#include <bits/stdc++.h>
namespace rapidML {
    using namespace std;
    template <typename Scalar>
    using Matrix = vector<vector<Scalar> >;
    string versionShort = "v0.1";
    string status = "develop";
    tuple<int, int> getVersion() {
        return make_tuple(0, 1);
    }
    template <typename X, typename Y>
    class Data {
        public:
            vector<X> x;
            vector<Y> y;
            Y missing;
    };
}
#endif