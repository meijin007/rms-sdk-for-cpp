#include "compound_file_format.h"

namespace mip {
namespace file {

CompoundFileFormat::CompoundFileFormat(shared_ptr<IStream> file, const std::string& extension)
  : FileFormat(file, extension)
{
}

const vector<Tag>& CompoundFileFormat::ReadTags() {
  throw std::exception("not implemnted");
}

} // namespace file
} // namespace mip
