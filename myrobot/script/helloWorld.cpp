
/* include gazebo lib */
#include <gazebo/gazebo.hh>

namespace gazebo
{
    /* create hello world class as WorldPlugin */
    class HelloWorld : public WorldPlugin
    {
        /* contructor */
        public: HelloWorld() : WorldPlugin()
        {
            /* print message */
            printf("Welcome to Karl-Bang's World!\n");
        }

        /* load function */
        public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
        {

        }
    };
    /* add class as world plugin to gazebo */
    GZ_REGISTER_WORLD_PLUGIN(HelloWorld)
}

