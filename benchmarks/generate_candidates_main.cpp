/*
 * MIT License
 *
 * Copyright (c) 2022 Nora Khayata
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
// FUSE
#include <BristolFormatBackend.h>
#include <BristolFrontend.h>
#include <IOHandlers.h>
#include <ModuleGenerator.h>

#include <filesystem>
#include <fstream>
#include <gzip/compress.hpp>
#include <regex>

#include "common/common.h"

int main(int argc, char* argv[]) {
    namespace be = fuse::benchmarks;
    namespace fs = std::filesystem;

    // // create resource directories first
    fs::create_directory("../../../benchmarks/resources");
    fs::create_directory(be::kOutputPath);
    fs::create_directory(be::kPathToZippedBristolCircuits);
    fs::create_directory(be::kPathToZippedHyccCircuits);
    fs::create_directory(be::kPathToFuseIr);
    fs::create_directory(be::kPathToZippedFuseIr);
    fs::create_directory(be::kPathToFsrFuseIr);
    fs::create_directory(be::kPathToVectorizedFuseIr);
    fs::create_directory(be::kPathToZippedFsrFuseIr);
    fs::create_directory(be::kPathToZippedVectorizedFuseIr);

    // // generate FUSE IR from bristol and hycc
    // be::generateFuseFromBristol();
    // be::generateFuseFromHycc();

    // // zip, optimize, zip optimized FUSE IR
    // be::zipBristolCircs();
    // be::zipHyccCircs();
    // be::zipFuseIrCircs();
    // be::optimizeFuseIrCircs();
    // be::fsr();
    // be::vectorization();
    // be::zipOptimizedFuseIrCircs();
    be::generateSHA256();
    return 0;
}
