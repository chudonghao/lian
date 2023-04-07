
#include <boost/program_options.hpp>
#include <iostream>

namespace po = boost::program_options;

int main(int argc, char *argv[]) {
  std::string output_filepath;

  po::options_description desc("Lian-1 Allowed options");
  desc.add_options()("help", "produce help message");
  desc.add_options()("cpp", "translate lian language to cpp language");
  desc.add_options()("output,o", po::value(&output_filepath), "output filepath");

  po::variables_map vm;
  po::store(po::parse_command_line(argc, argv, desc), vm);
  po::notify(vm);

  if (vm.count("help")) {
    std::cout << desc << std::endl;
    return 1;
  }
  return 0;
}
