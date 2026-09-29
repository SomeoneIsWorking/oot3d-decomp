// OoT3D decomp @ 0026f9dc  name=FUN_0026f9dc  size=304

void FUN_0026f9dc(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_00346d94(param_2,param_1);
  if ((iVar1 == 0) &&
     (((*(byte *)(param_1 + 0x1b5) & 2) == 0 || ((DAT_0026fc6c & **(uint **)(param_1 + 0x1e0)) == 0)
      ))) {
    *(byte *)(param_1 + 0x1b5) = *(byte *)(param_1 + 0x1b5) & 0xfd;
    if (DAT_0026fca4 <= *(int *)(param_1 + 0x98)) {
      return;
    }
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
    return;
  }
  if ((*(short *)(param_2 + 0x104) == 0x59) && ((*(ushort *)(param_1 + 0x1c) & 0x3f) == 0x16)) {
    for (iVar1 = *(int *)(DAT_0026fc70 + param_2); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x130)) {
      if (*(ushort *)(iVar1 + 0x1c) == DAT_0026fc74) {
        if (iVar1 != 0) {
          return;
        }
        break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
