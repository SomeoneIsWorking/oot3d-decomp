// OoT3D decomp @ 00328cac  name=FUN_00328cac  size=152

undefined4 FUN_00328cac(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;

  iVar3 = *(int *)(DAT_00328d44 + param_1);
  if (*(short *)(param_2 + 0x1c) < 0) {
    iVar1 = FUN_00369608(param_1,param_2);
    if (iVar1 != 0) {
      if (*(short *)(param_2 + 0x1c) != -2) {
        return 0;
      }
      psVar2 = *(short **)(DAT_00328d4c + iVar3);
      if (psVar2 == (short *)0x0) {
        return 0;
      }
      if ((char)psVar2[1] == '\x05') {
        if (*psVar2 != 0x25) {
          return 0;
        }
        if (psVar2[0x8d] == 0) {
          return 0;
        }
      }
    }
  }
  else if ((*(uint *)(DAT_00328d48 + iVar3) & 0x6000) != 0) {
    return 0;
  }
  return 1;
}
