int aleatorio_en_rango(int minimo, int maximo) {
  return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}
void Nombre(){
printf("========================================================================\n");
printf("  .___  ___.      ___      ____    ____ .___  ___.  _______ .__   __. \n");
printf("  |   \\/   |     /   \\     \\   \\  /   / |   \\/   | |   ____||  \\ |  | \n");
printf("  |  \\  /  |    /  ^  \\     \\   \\/   /  |  \\  /  | |  |__   |   \\|  | \n");
printf("  |  |\\/|  |   /  /_\\  \\     \\_    _/   |  |\\/|  | |   __|  |  . `  | \n");
printf("  |  |  |  |  /  _____  \\      |  |     |  |  |  | |  |____ |  |\\   | \n");
printf("  |__|  |__| /__/     \\__\\     |__|     |__|  |__| |_______||__| \\__| \n\n");
printf("========================================================================\n");
}
