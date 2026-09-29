// OoT3D decomp @ 0035b950  name=FUN_0035b950  size=132

undefined4 FUN_0035b950(float param_1,int param_2,int param_3,int param_4,int param_5,short param_6)

{
  int iVar1;
  int iVar2;

  iVar1 = (int)(short)(*(short *)(param_3 + 0x92) - param_6);
  iVar2 = (int)(short)((*(short *)(param_3 + 0x92) + -0x8000) -
                      *(short *)(*(int *)(param_2 + 0x20ac) + 0xbe));
  if ((*(float *)(param_3 + 0x98) <= param_1) &&
     (*(char *)(*(int *)(param_2 + 0x20ac) + 0x2227) != '\0')) {
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 <= param_5) {
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 <= param_4) {
        return 1;
      }
    }
  }
  return 0;
}
