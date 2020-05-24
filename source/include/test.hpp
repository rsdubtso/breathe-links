/// @file

/// abc
namespace abc {
    /// Something
    struct something {
        int x; ///< x
    };

    /// Otherthing
    struct otherthing {
        /// Initialize otherthing based on something
        /// @param something Something
        otherthing(const something &something): something_(something) {}
    private:
        something something_;
    };
}
