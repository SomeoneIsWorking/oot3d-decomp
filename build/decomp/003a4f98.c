// OoT3D decomp @ 003a4f98  name=FUN_003a4f98  size=396

void FUN_003a4f98(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  uint uVar4;
  undefined4 local_20;
  int local_1c;

  uVar1 = DAT_003a5124;
  local_20 = 0;
  *(undefined4 *)(param_1 + 0x6c) = DAT_003a5124;
  FUN_00326a6c(param_1 + 0xec8,&local_1c,&local_20);
  if ((DAT_003a5128 < local_1c) && (iVar2 = FUN_00326b20(param_1,param_2), iVar2 == 1)) {
    uVar4 = FUN_00338f60((int)(short)local_20);
    if (uVar4 < 0xbf000000) {
      iVar2 = FUN_00338f60((int)(short)local_20);
      if (DAT_003a512c < iVar2) {
        if ((*(uint *)(param_1 + 0xe54) & 0x300) == 0) {
          *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 0x200;
          *(undefined2 *)(param_1 + 0x100a) = 0xc;
          *(undefined4 *)(param_1 + 0x1a8) = 0;
          *(undefined4 *)(param_1 + 0x1ac) = 0;
          *(undefined1 *)(param_1 + 0x1a4) = 8;
          *(undefined4 *)(param_1 + 0xe7c) = 0;
        }
        else {
          *(undefined2 *)(param_1 + 0x100a) = 0;
          FUN_00318778(param_1);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x1a4) = 7;
        *(undefined4 *)(param_1 + 0xe7c) = 0;
        *(undefined1 *)(param_1 + 0xe74) = 4;
        iVar2 = DAT_003a5130;
        uVar3 = FUN_0036ae14(param_1 + 0x1c4,
                             *(undefined4 *)
                              (*(int *)(DAT_003a5130 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + 0x10)
                            );
        uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(DAT_003a5138,uVar1,uVar3,DAT_003a5134,param_1 + 0x1c4,
                     *(undefined4 *)
                      (*(int *)(iVar2 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                      (uint)*(byte *)(param_1 + 0xe74) * 4),2);
      }
    }
    else {
      FUN_00318814(param_1);
    }
  }
  iVar2 = FUN_003731e0(param_1 + 0x1c4);
  if (iVar2 != 0) {
    FUN_003478b0(uVar1,param_1 + 0x1c4);
    *(undefined4 *)(param_1 + 0xe78) = uVar1;
    FUN_00357d6c(param_1);
    *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xffffefff;
  }
  return;
}
