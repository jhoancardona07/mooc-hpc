#include <mkl.h>
#include "distribution.h"


//vectorize this function based on instruction on the lab page
int diffusion(const int n_particles, 
              const int n_steps, 
              const float x_threshold,
              const float alpha, 
              VSLStreamStatePtr rnStream) {
  int n_escaped=0;

  // Inicio de la solución

  // Modificando la instrucción ' x==0.0f ' para que trabaje con vectores.
  float x[n_particles];
  x[0:n_particles]=0.0f;

  float rn[n_particles];
  //Intel MKL function to generate random numbers
  vsRngUniform(VSL_RNG_METHOD_UNIFORM_STD, rnStream, n_particles, rn, -1.0, 1.0);

  // Cambio del loop interno por el externo
  for (int j = 0; j < n_steps; j++) {
    for (int i = 0; i < n_particles; i++) {
      
      // Modificando la siguiente instrucción para que trabaje con los vectores.
      x[i] += dist_func(alpha, rn[i]);
    }
  }

    // Ahora no solo tenemos una X sino un vector de X.
    for (int i = 0; i < n_particles; i++){
      if (x[i] > x_threshold) n_escaped++;
    }
  return n_escaped;
}
