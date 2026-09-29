// OoT3D decomp @ 004037a8  name=FUN_004037a8  size=108

void FUN_004037a8(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  float local_24;
  float local_20;
  float local_1c;

  FUN_003735ac(&local_24);
  FUN_0040335c(*(undefined4 *)(param_2 + 0x48),
               SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c),
               *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_4 + 4),
               *(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc),&local_24,param_5,param_6
              );
  return;
}
