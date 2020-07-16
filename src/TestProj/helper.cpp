/* This file is part of TestDependency.
 *
 * Copyright (c) BitBoson
 *
 * TestDependency is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * TestDependency is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with TestDependency.  If not, see <https://www.gnu.org/licenses/>.
 *
 * Written by:
 *     - Tyler Parcell <OriginLegend>
 */

#include <leveldb/db.h>
#include <TestProj/helper.h>

using namespace BitBoson::TestDependency;

/**
 * Function used to setup a simple LevelDB workflow
 *
 * @return String representing "Hello World" for testing
 */
std::string getMessage()
{

    // Run a simple setup workflow to ensure LevelDB works
    leveldb::DB* db;
    leveldb::Options options;
    options.create_if_missing = true;
    leveldb::Status status = leveldb::DB::Open(options, "/tmp/testdb", &db);
    assert(status.ok());

    // Simply Return Hello World for validation
    return "Hello World!";
};

