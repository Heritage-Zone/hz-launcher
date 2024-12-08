#include <GLFW/glfw3.h>

class Window
{
    private:
    public:
        Window()
        {
            glfwInit();

            //glfwWindowHint( GLFW_DECORATED, GLFW_FALSE );

            GLFWwindow *window = glfwCreateWindow(1280, 720, "HZLauncher", NULL, NULL);

            glfwMakeContextCurrent(window);

            while(!glfwWindowShouldClose(window))
            {
                glClear(GL_COLOR_BUFFER_BIT);
                glClearColor(0.1f, 0.1f, 0.1f, 1.0f);

                glfwPollEvents();
                glfwSwapBuffers(window);
            }

            glfwDestroyWindow(window);
            glfwTerminate();
        };
};