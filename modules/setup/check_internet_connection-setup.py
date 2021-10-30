from cx_Freeze import setup, Executable
setup(
    name = "check_internet_connection",
    version = "1",
    description = "check_internet_connection",
    executables = [Executable("../check_internet_connection.py")],
)