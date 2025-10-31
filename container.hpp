
#include <filesystem>
#include  <sys/stat.h> // for mkdir
#include <iostream>
#include <string>
#include <unistd.h>
#include <vector>


#include <fstream>
#include <sched.h> // For clone()
#include <sys/wait.h> // For waitpid()

#ifndef CONTAINER_HPP
# define CONTAINER_HPP

# define cgoupe_path /root/cgroup 


const int CHILD_STACK_SIZE = 1024 * 1024; // 1MB


class Container {
public:
    Container();
    ~Container();
    Container(const std::string& name, const std::string& rootfs);
    int run(const std::vector<std::string>& command);
    int stop();
private:
    int setup_namespaces();
    int setup_cgroups();
    int setup_filesystem();
    int setup_network();
    int drop_capabilities();
    int pivot_root();
    int exec_command(const std::vector<std::string>& command);
};



#endif




