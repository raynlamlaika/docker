#include "container.hpp"

/*
here the constante varibles
*/





// first creating in cgoupe "creat in dir"




// assigning processe to the cgroup creat dir






// read statics, the info about the resources usage from the status file
typedef struct childM
{
	char *name;
	int *pid;
	void *helper;
} childMetadata;

const char *cgroupPath = "/sys/fs/cgroup";

int Container::run(const std::vector<std::string>& command)
{
	
	
}


int childWork(void* arg)
{


}

void print(std::string const helper)
{
	std::cout  << helper << std::endl;
}

bool write_to_file(const std::string& path, const std::string& content)
{
    std::ofstream file(path, std::ios::app);
    if (!file.is_open()) {
        std::cerr << "failed to open file: " << path << std::endl;
        return false;
    }

    file << content;
    file.close();
    return true;
}


void setup_cgroups(pid_t pid)
{
	std::string cgroup_path = "/sys/fs/cgroup/container_" + std::to_string(pid);
	mkdir(cgroup_path.c_str(), 0755);

    // limit memory
    write_to_file("/sys/fs/cgroup/mycontainer/memory.max", "500M");
    // limit CPU
    write_to_file("/sys/fs/cgroup/mycontainer/cpu.max", "100000 200000");
    // attach the container process
    write_to_file("/sys/fs/cgroup/mycontainer/cgroup.procs", std::to_string(pid));

}

pid_t create_isolated_process()
{
    print("Creating new isolated process...");

    std::vector<char> child_stack(CHILD_STACK_SIZE);
    void* child_stack_ptr = child_stack.data() + CHILD_STACK_SIZE;


    childMetadata* arg_to_child = nullptr;


    int flags = CLONE_NEWUTS | CLONE_NEWPID | CLONE_NEWNS | CLONE_NEWIPC | SIGCHLD;

    pid_t child_pid = clone(childWork, child_stack_ptr, flags, arg_to_child);
    if (child_pid == -1)
    {
        print("failed to create child process with clone()");
        exit(1);
    }

    print("Parent waiting for the child to finish...");

    int status;
    waitpid(child_pid, &status, 0);

    print("👶 Child exited");
    return child_pid;
}


int main(int ac, char*ar[])
{
	std::cout << "start of the program"<< std::endl;
	



}

