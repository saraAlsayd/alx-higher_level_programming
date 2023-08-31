#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <floatobject.h>

void print_python_list(PyObject *p) {
    if (!PyList_Check(p)) {
        fprintf(stderr, "Invalid PyListObject\n");
        return;
    }
    
    Py_ssize_t size = PyList_Size(p);
    PyObject *item;
    
    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %zd\n", size);
    printf("[*] Allocated = %zd\n", ((PyListObject *)p)->allocated);
    
    for (Py_ssize_t i = 0; i < size; ++i) {
        item = PyList_GetItem(p, i);
        printf("Element %zd: %s\n", i, Py_TYPE(item)->tp_name);
    }
}

void print_python_bytes(PyObject *p) {
    if (!PyBytes_Check(p)) {
        fprintf(stderr, "Invalid PyBytesObject\n");
        return;
    }
    
    Py_ssize_t size = PyBytes_GET_SIZE(p);
    printf("[.] bytes object info\n");
    printf("  size: %zd\n", size);
    printf("  trying string: %s\n", PyBytes_AsString(p));
    printf("  first %zd bytes: ", size + 1 > 10 ? 10 : size + 1);
    for (Py_ssize_t i = 0; i < size + 1 && i < 10; ++i) {
        printf("%02x", (unsigned char)PyBytes_AS_STRING(p)[i]);
        if (i + 1 < size + 1 && i + 1 < 10) {
            printf(" ");
        }
    }
    printf("\n");
}

void print_python_float(PyObject *p) {
    if (!PyFloat_Check(p)) {
        fprintf(stderr, "Invalid PyFloatObject\n");
        return;
    }
    
    double value = PyFloat_AS_DOUBLE(p);
    
    printf("[.] float object info\n");
    printf("  value: %s\n", PyOS_double_to_string(value, 'r', 0, Py_DTSF_ADD_DOT_0, NULL));
}

