#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


    int n;
    std::cin >> n;

    int totalFaces = 0;

    std::string polyhedrons;

    for (int i = 0; i < n; i++)
    {
        std::cin >> polyhedrons;

        if (polyhedrons == "Tetrahedron") totalFaces += 4;
        else if (polyhedrons == "Cube") totalFaces += 6;
        else if (polyhedrons == "Octahedron") totalFaces += 8;
        else if (polyhedrons == "Dodecahedron") totalFaces += 12;
        else totalFaces += 20;  // Icosahedron
    }

    std::cout << totalFaces;

    return 0;
}