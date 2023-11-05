#include <stdlib.h>
#include <stdio.h>
#include <Python.h>

/**
 * print_python_list_info -  fun. prints basic info about Python lists
 * @p: a python list
*/

void print_python_list_info(PyObject *p)
{
	int elem;
	PyObject *obj;

	printf("[*] Size of the Python List = %d\n", Py_SIZE(p));
	printf("[*] Allocated = %d\n", ((PyListObject *)p)->allocated);
	for (elem = 0; elem < Py_SIZE(p); elem++)
		printf("Element %d: ", elem)
			printf("%s\n, Py_TYPE(PyList_GetItem(p, elem))->tp_name);
}
